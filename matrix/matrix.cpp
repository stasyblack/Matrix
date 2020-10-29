// matrix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

const int n = 10;
const int m = 10;

void init_array(int(*mas)[m], int n1, int m1, int c)
{
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n1; j++)
			mas[i][j] = c;
	}
}
void print_array(int(*mas)[m], int n1, int m1)
{
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n1; j++)
			cout << mas[i][j] << " ";
		cout << "\n";
	}
}
int main()
{

	int my_array[n][m];
	//int i, j;
	init_array(my_array, n, m, 0);
	print_array(my_array, n, m);
	cout << "\n";
	init_array(my_array, n, m, 1);
	print_array(my_array, n, m);

}
