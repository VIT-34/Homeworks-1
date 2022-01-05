// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
#include <time.h>
#include <cstdlib>
#include <functional>

// TasK 1

int main() 
{
    int* ptrArr, n;

    cout << "Enter size of your array: ";
    cin >> n;
    ptrArr = new int[n];
    for (int i = 0; i < n; i++) 
    {
        ptrArr[i] = 1 << i;
        cout << ptrArr[i] << "  ";
    }
    delete[] ptrArr;
    return 0;
}

//Task 2

int main()
{
	int n = 4;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 10;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete[]a[i];
	}
	delete[] a;
	return 0;
}

// Task 3

#include <iostream>
#include <fstream>
using namespace std;

struct Foo
{
	int a;
	char b;
	float c;
};

int main()
{
	char buf[255] = "We speak about school, pupils and teachers, about lessons, animals and nature.";
	char buf1[255] = "We play at English, too. We sing songs and learn poems.";

	ofstream fout1;
	fout1.open("C://Users//Vitaliy//Desktop//домашка//myfile.txt");

	if (fout1.is_open())
	{
		fout1 << buf << endl;
		fout1 << 12345678910 << endl;

		fout1.close();
	}

	ofstream fout2;
	fout2.open("C://Users//Vitaliy//Desktop//домашка//mydata.txt");

	if (fout2.is_open())
	{
		fout2 << buf1 << endl;
		fout2 << 03021564 << endl;

		fout2.close();
	}

	return 0;
}