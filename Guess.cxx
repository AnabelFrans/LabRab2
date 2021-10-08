#include <iostream>
using namespace std;

int main()
{
	int x, y;
	
	cout << "Загадайте число." << endl;
	system ("pause");
	
	cout << "Умножьте загаданое число на 2." << endl << "Добавте к полученому числу 10." <<endl << "Отнемите от результата 4. " << endl << "Поделите полученый результат на 2." << endl;
	system ("pause");
	
	cout << "Введите полученый результат:" << endl;
	cin >> y;
	
	x = (y * 2 + 4 - 10) / 2;
	
	cout << "Загаданое вами число: " << x << endl;
}