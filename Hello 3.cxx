#include <iostream>
using namespace std;

int main()
{
	char Name [15];
	int Age;
	char Study [20];
	
	
	cout << "Как Вас зовут?" << endl;
	cin >> Name;
	
	cout << "Сколько Вам лет?" << endl;
	cin >> Age;
	
	cout << "Где Вы учитесь?" << endl;
	cin >> Study;
	
	cout << "Здравствуй, " << Name << "!" << endl;
	cout << "Поздравляю тебя! Тебе всего " << Age << ", а ты уже ведешь диалог с компьютером!" << endl;
	cout << Study << " гордится тобой!" << endl;
}