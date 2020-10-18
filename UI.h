#include "Methods.h"
class UI
{
public:
	UI();
	void menu();

private:
	Methods method;
	int displayMenu();
	void setCellValue();
	void unsetCellValue();
	void swapCellValues();
	void displayCellValues();
	void changeSizeOfArray();

};