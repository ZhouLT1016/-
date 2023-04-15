#include"计算器.h"
#include<iostream>
using namespace std;
double a, b;
char c;
int main() {
	cout << "请输入两个数进行运算"<<endl;
	cin >> a >> b;
	cout << "请输入运算符" << endl;
	cout << "例如+ - * /"<<endl;
	cin >> c;
	if (c == '+')
	{
		Add a1(a, b);
		cout << "a+b=" << a1.result();
	}
	else if (c == '-')
	{
		Sub a2(a, b);
		cout << "a-b=" << a2.result();
	}
	else if (c == '*') {
		Mul a3(a, b);
		cout << "a*b=" << a3.result();
	}
	else  if(c=='/')
	{
		Div a4(a, b);
		try {
			a4.result();
		}
		catch (double) {
			cout << "除数不能为0";
			return 0;
		}
		cout << "a/b=" << a4.result();

	}
	else
	{
		cout << "请输入正确的运算符";
	}
	return 0;
}