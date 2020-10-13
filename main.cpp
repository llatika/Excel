#include <iostream>
#include "Methods.h"
#include "Methods.cpp"

using namespace std;
int aa;
void menu()
{
	Methods metoda;
	cout << endl << endl;
	cout << "What to do with array?" << endl << endl;
	cout << "1.Add some values" << endl;
	cout << "2.Substract values from array" << endl;
	cout << "3.swap some variables together" << endl;

	cout << "Choose operation by enter number: ";
	int a;
	cin >> a;
	aa = a;
}
int main()
{
	int b, c, d;

	menu();

	switch (aa)
	{
	case 1: 
		cout << endl << "To which cell do you want add value: ";
		cin >> b;
		cin >> c;
		cout << endl << "Which value [" << b << "][" << c << "] should consist? : ";
		cin >> d;
		cout << endl << endl << "New table:" << endl;
		Add(b, c, d);
		Display();  break; 
	case 2:
		cout << endl << "From which cell do you want remove value: ";
		cin >> b;
		cin >> c;
		cout << endl << endl << "New table:" << endl;
		Substract(b, c);
		Display();  break;
	
	}

	menu();
	return 0;
}