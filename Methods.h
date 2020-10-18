#pragma once
class Methods
{
	int n;
	int m;
	int** tab;
public:
	Methods();
	~Methods();
	void changeSize(int columns, int rows);
	void display();
	void set(int, int, int);
	void unset(int, int);
	void swap(int, int, int, int);
};
