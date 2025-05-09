#include "widget.h"
#include "./ui_widget.h"

int precedence(QChar op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

bool isOperator(QChar ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

bool toPostfix(const QString& expr, QQueue<QString>& output) {
    QStack<QChar> ops;
    QString number;

    for (int i = 0; i < expr.length(); ++i) {
        QChar ch = expr[i];

        if (ch.isDigit() || ch == '.') {
            number += ch;
        } else {
            if (!number.isEmpty()) {
                output.enqueue(number);
                number.clear();
            }

            if (ch == '(') {
                ops.push(ch);
            } else if (ch == ')') {
                while (!ops.isEmpty() && ops.top() != '(') {
                    output.enqueue(QString(ops.pop()));
                }
                if (ops.isEmpty()) return false;
                ops.pop();
            } else if (isOperator(ch)) {
                while (!ops.isEmpty() && precedence(ops.top()) >= precedence(ch)) {
                    if (ops.top() == '(') break;
                    output.enqueue(QString(ops.pop()));
                }
                ops.push(ch);
            } else {
                return false;
            }
        }
    }

    if (!number.isEmpty()) {
        output.enqueue(number);
    }

    while (!ops.isEmpty()) {
        if (ops.top() == '(' || ops.top() == ')') return false;
        output.enqueue(QString(ops.pop()));
    }

    return true;
}


bool evalPostfix(QQueue<QString> postfix, double& result) {
    QStack<double> stack;

    while (!postfix.isEmpty()) {
        QString token = postfix.dequeue();
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (stack.size() < 2) return false;
            double b = stack.pop();
            double a = stack.pop();
            if (token == "+") stack.push(a + b);
            else if (token == "-") stack.push(a - b);
            else if (token == "*") stack.push(a * b);
            else if (token == "/") {
                if (b == 0) return false;
                stack.push(a / b);
            }
        } else {
            bool ok;
            double num = token.toDouble(&ok);
            if (!ok) return false;
            stack.push(num);
        }
    }

    if (stack.size() != 1) return false;
    result = stack.pop();
    return true;
}

bool evaluateExpression(const QString& expr, double& result) {
    QQueue<QString> postfix;
    if (!toPostfix(expr, postfix)) return false;
    return evalPostfix(postfix, result);
}





Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setMaximumSize(232,305);
    this->setMinimumSize(232,305);
    this->setWindowTitle("计算器");

    QFont f("仿宋",20);
    ui->lineEdit->setFont(f);

    QIcon con("E:\\QTfile\\calculator\\backspace.jpg");
    ui->delbutton->setIcon(con);

    this->setStyleSheet("background-color: #FFFACD;");

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_onebutton_clicked()
{
    expression += "1";
    ui->lineEdit->setText(expression);
}


void Widget::on_twobutton_clicked()
{
    expression += "2";
    ui->lineEdit->setText(expression);
}


void Widget::on_threebutton_clicked()
{
    expression += "3";
    ui->lineEdit->setText(expression);
}


void Widget::on_fourbutton_clicked()
{
    expression += "4";
    ui->lineEdit->setText(expression);
}


void Widget::on_fivebutton_clicked()
{
    expression += "5";
    ui->lineEdit->setText(expression);
}


void Widget::on_sixbutton_clicked()
{
    expression += "6";
    ui->lineEdit->setText(expression);
}


void Widget::on_sevenbutton_clicked()
{
    expression += "7";
    ui->lineEdit->setText(expression);
}


void Widget::on_eightbutton_clicked()
{
    expression += "8";
    ui->lineEdit->setText(expression);
}



void Widget::on_ninebutton_clicked()
{
    expression += "9";
    ui->lineEdit->setText(expression);
}


void Widget::on_zerobutton_clicked()
{
    expression += "0";
    ui->lineEdit->setText(expression);
}


void Widget::on_leftbutton_clicked()
{
    expression += "(";
    ui->lineEdit->setText(expression);
}


void Widget::on_rightbutton_clicked()
{
    expression += ")";
    ui->lineEdit->setText(expression);
}


void Widget::on_addbutton_clicked()
{
    expression += "+";
    ui->lineEdit->setText(expression);
}


void Widget::on_subbutton_clicked()
{
    expression += "-";
    ui->lineEdit->setText(expression);
}


void Widget::on_mulbutton_clicked()
{
    expression += "*";
    ui->lineEdit->setText(expression);
}


void Widget::on_divbutton_clicked()
{
    expression += "/";
    ui->lineEdit->setText(expression);
}


void Widget::on_equalbutton_clicked()
{
    if (expression.endsWith("=")) {
        expression.chop(1);
    }

    double result;
    if (evaluateExpression(expression, result)) {
        ui->lineEdit->setText(QString::number(result));
        expression = QString::number(result);
    } else {
        ui->lineEdit->setText("错误");
        expression.clear();
    }
}


void Widget::on_clearbutton_clicked()
{
    expression.clear();
    ui->lineEdit->clear();
}


void Widget::on_delbutton_clicked()
{
    expression.chop(1);
    ui->lineEdit->backspace();
}




