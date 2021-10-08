#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, A;
	
	cout << "Задайте значение A:" << endl;
	cin >> a;
	
	cout << "Задайте значение B:" << endl;
	cin >> b;
	
	cout << "Задайте значение C:" << endl;
	cin >> c;
	
	cout << "Задайте значение D:" << endl;
	cin >> d;
	
	cout << "A=" << a << " B=" << b << " C=" << c << " D=" << d << endl;	
	
	a = a + b + c + d;
	d = a - b - c - d;
	c = a - b - c - d;
	b = a - b - c - d;
	A = a - b - c - d;
	
	cout << "A=" << A << " B=" << b << " C=" << c << " D=" << d << endl;
}