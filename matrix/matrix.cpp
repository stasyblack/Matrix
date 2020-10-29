// matrix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
		if (i % 2 == 0)
		{
			if (i == 4)
				mas[i] = 3;
			else
				mas[i] = 0;
		}
		else
			if (i == 5)
				mas[i] = 2;
			else
				mas[i] = 1;
	}
	i = 0;
	while (i < n)
	{
		cout << mas[i] << " ";
		i++;
	}

}

