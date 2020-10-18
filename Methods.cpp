
#include <iostream>
#include "Methods.h"
using namespace std;



Methods::Methods()
{
	n = 10;
	m = 10;
	tab = new int* [m];
	for (int i = 0; i < m; i++)
	{
		tab[i] = new int[n];

		for (int j = 0; j < n; j++)
		{
			tab[i][j] = 0;
		}
	}
};
void Methods::changeSize(int columns, int rows)
{

	for (int i = 0; i < rows; i++)
	{
		tab[i] = new int[columns];
		std::cout << endl;
	}
	std::cout << endl;
}
Methods::~Methods()
{
	for (int i = 0; i < m; i++)
	{
		delete[] tab[i];
	}
	delete[] tab;
}

void Methods::set(int a, int b, int d) {

	tab[a][b] = d;
}
void Methods::unset(int a, int b)
{
	tab[a][b] = 0;
}
void Methods::display()
{
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << tab[i][j] << " ";
		}
		std::cout << endl;
	}
	std::cout<<endl;
}
void Methods::swap(int a, int b, int c, int d)
{
	int r = tab[a][b];
	tab[a][b] = tab[c][d];
	tab[c][d] = r;
	std::cout << endl;
}


