// Lab_03_4.cpp
// Торос Владислав
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 17
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if (((y >= 0) && (pow(R, 2) <= pow(y, 2) + pow(x, 2)) && (x >= R))
		&& ((y <= 0) && (pow(R, 2) >= pow(y, 2) + pow(x, 2)) && (x <= R)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}