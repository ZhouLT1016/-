#include"������.h"
#include<iostream>
using namespace std;
double a, b;
char c;
int main() {
	cout << "��������������������"<<endl;
	cin >> a >> b;
	cout << "�����������" << endl;
	cout << "����+ - * /"<<endl;
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
			cout << "��������Ϊ0";
			return 0;
		}
		cout << "a/b=" << a4.result();

	}
	else
	{
		cout << "��������ȷ�������";
	}
	return 0;
}