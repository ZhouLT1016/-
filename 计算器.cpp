#include"¼ÆËãÆ÷.h"
#include<iostream>
using namespace std;
 calculator::calculator(double m, double n) {
	a = m;
	b = n;
}
 Add::Add(double a, double b) :calculator(a, b) { }
double Add::result() {
	return a + b;
}
Sub::Sub(double a, double b) :calculator(a, b) { }
double Sub::result() {
	return a - b;
}
Mul::Mul(double a, double b) :calculator(a, b) { }
double Mul::result() {
	return a * b;
}
Div::Div(double a, double b) :calculator(a, b) { }
double Div::result() {
	if (b == 0) {
		throw(b);
		return 0.0;
	}
	else
	return a / b;
}