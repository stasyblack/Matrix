﻿// matrix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	const int n = 10;
	int mas[n];
	int i;
	for (i = 0; i < n; i++)
	{
		mas[i] = 1;
	}
	i = 0;
	while (i < n)
	{
		cout << mas[i] << " ";
		i++;
	}

}