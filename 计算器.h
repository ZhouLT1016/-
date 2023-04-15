#pragma once
//基类计算器
class calculator{
public:
	calculator(double a, double b);
	virtual double result() = 0;//基类的纯虚函数。
	public:
		double a, b;
};
//加法 
class Add : public calculator {
public:
	Add(double a,double b);
	virtual double result();
};
//减法
class Sub :public calculator {
public:
	Sub(double a, double b);
	virtual double result();
};
//乘法
class Mul :public calculator {
public:
	Mul(double a, double b);
	virtual double result();
};
//除法
class Div :public calculator {
public:
	Div(double a, double b);
	virtual double result();
};