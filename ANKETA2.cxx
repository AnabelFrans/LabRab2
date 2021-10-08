#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()
{
	char Fam [50];
	char Name [50];
	char Otc [50];
	char Pol [50];
	char Data [50];
	char Adr [50];
	char Tel [50];
	char Study [50];
	char Klas [50];
	char Hob [100];
	
	cout << "Фамилия: " << Fam << endl;
	cin >> Fam;
	
	cout << "Имя: " << Name << endl;
	cin >> Name;
	
	cout << "Отчество: " << Otc << endl;
	cin >> Otc;
	
	cout << "Пол: " << Pol << endl;
	cin >> Pol;
	
	cout << "Дата рождения: " << Data << endl;
	cin >> Data;
	
	cout << "Адрес: " << Adr << endl;
	cin >> Adr;
	cin.getline(Adr, 50);
	
	cout << "Номер телефона: " << Tel << endl;
	cin >> Tel;
	
	cout << "Место учёбы: " << Study << endl;
	cin >> Study;
	
	cout << "Курс:  " << Klas << endl;
	cin >> Klas;
	
	cout << "Хобби: " << Hob << endl;
	cin >> Hob;
	
	cout << setw(25)  << "АНКЕТА" << setw(25) << endl;
	
	cout << "Фамилия: " << Fam << " Имя: " << Name << " Отчество: " << Otc << endl;
	cout << "Пол: " << Pol << " Дата рождения: " << Data << " Номер телефона: " << Tel << endl;
	cout << "Адрес: " << Adr << endl;
	cout << "Место учебы: " << Study << " Курс: " << Klas << endl;
	cout << "Хобби: " << Hob << endl;
}