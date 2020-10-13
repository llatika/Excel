
#include <iostream>
using namespace std;
class Methods {


	int n = 12;
	int m = 10;
	int** tab;

public:Methods()
{
	tab = new int* [m];
	Display();
};

public:
	void Add(int a, int b, int d)
	{
		tab[a][b] == d;
	}
	void Substract(int a, int b)
	{
		tab[a][b] == NULL;
	}
	void Display()
	{
		for (int i = 0; i < m; i++)
		{
			tab[i] = new int[n];
			for (int j = 0; j < n; j++)
			{
				tab[i][j] = 0;
			}

		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				std::cout << tab[i][j];
			}

			std::cout << endl;

		}

		for (int i = 0; i < m; i++)
			delete[] tab[i];
		delete[] tab;
	}

};

