#include "UI.h"
#include "Methods.h"
#include<iostream>
using namespace std;

UI::UI()
{

}
void UI::menu()
{
	int indicator;
	bool exitFlag = true;

	while (exitFlag)
	{
		indicator = displayMenu();
		switch (indicator)
		{
		case 1:
			setCellValue();
			break;
		case 2:
			unsetCellValue(); 
			break;
		case 3:
			swapCellValues(); 
			break;
		case 4:
			displayCellValues();
			break;
		case 5:
			changeSizeOfArray(); 
			break;
		case 6:
			exitFlag = false;
			break;
		default: 
			cout << "Not correct value!" << endl;;
			break;
		}
	}
}

void UI::setCellValue()
{
	int x1, y1, value;
	cout << endl << "To which cell [][] do you want add value? : ";
	cin >> x1;
	cin >> y1;
	cout << endl << "Which value [" << x1 << "][" << y1 << "] should consist? : ";
	cin >> value;
	cout << endl << endl << "New table:" << endl;
	method.set(x1, y1, value);
	method.display();
}
void UI::unsetCellValue()
{
	int x1, y1;
	cout << endl << "From which cell do you want remove value? : ";
	cin >> x1;
	cin >> y1;
	cout << endl << endl << "New table:" << endl;
	method.unset(x1, y1);
	method.display(); 
}
void UI::swapCellValues()
{
	int x1, y1, x2, y2;
	cout << endl << "What cells should I switch? : " << endl;
	cout << "First cell: ";
	cin >> x1;
	cin >> y1;
	cout << "Second cell: ";
	cin >> x2;
	cin >> y2;
	method.swap(x1, y1, x2, y2);
	cout << endl << endl << "New table:" << endl;
	method.display();
}

void UI::displayCellValues()
{
	method.display();
}

void UI::changeSizeOfArray()
{
	int columns, rows;
	cout << "Number of columns: ";
	cin >> columns;
	cout << "Number of rows: ";
	cin >> rows;
	method.changeSize(columns, rows);
	method.display();

}
int UI::displayMenu()
{
	int userChoice;
	cout << "What to do with array?" << endl << endl;
	cout << "1.Set value" << endl;
	cout << "2.Unset value" << endl;
	cout << "3.Swap some variables together" << endl;
	cout << "4.Display table" << endl;
	cout << "5.Change dimension of Array" << endl;
	cout << "6.Exit program" << endl << endl;
	cout << "Choose operation by enter number: ";
	cin >> userChoice;
	cout << endl;
	return userChoice;
}