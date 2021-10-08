#include <iostream>
using namespace std;

int main()
{
	int a, b, c, A;
	
	cout << "Задайте значение A:" << endl;
	cin >> a;
	
	cout << "Задайте значение B:" << endl;
	cin >> b;
	
	cout << "Задайте значение C:" << endl;
	cin >> c;
	
	cout << "A=" << a << " B=" << b << " C=" << c << endl;
	
	a = a + b + c;
	c = a - b - c;
	b = a - b - c;
	A = a - b - c;
	
	cout << "A=" << A << " B=" << b << " C=" << c << endl;
}