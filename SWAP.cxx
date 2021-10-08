#include <iostream>
using namespace std;

int main()
{
	int A, B;
	
	cout << "Задайте значение А и B" << endl;
	cin >> A >> B; 
	
	cout << "A=" << A << "  B=" << B << endl;
	
	int dif = A = A + B; 
	int dif2 = B = A - B;
	int dif3 = A = A - B;
	
	cout << "A=" << dif3 << "  B=" << dif2 << endl;
}