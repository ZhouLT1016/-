#pragma once
//���������
class calculator{
public:
	calculator(double a, double b);
	virtual double result() = 0;//����Ĵ��麯����
	public:
		double a, b;
};
//�ӷ� 
class Add : public calculator {
public:
	Add(double a,double b);
	virtual double result();
};
//����
class Sub :public calculator {
public:
	Sub(double a, double b);
	virtual double result();
};
//�˷�
class Mul :public calculator {
public:
	Mul(double a, double b);
	virtual double result();
};
//����
class Div :public calculator {
public:
	Div(double a, double b);
	virtual double result();
};