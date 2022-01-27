#include<iostream>
using namespace std;

void union_set(char x[],int s1,char y[],int s2)
{
	bool Array[26] = { false };
	for (int i = 0; i < 26; i++)
	{
		Array[i] = 0;		//intializing array with 0
	}

	for (int i = 0; i < s1; i++)
	{
		Array[x[i] - 97] = true;
		cout << x[i] << " ";
	}

	for (int j = 0; j < s2; j++)
	{
		if (Array[y[j] - 97] != true)
		{
			cout << y[j] << " ";
		}
	}
}

void Intersection(char x[], int s1, char y[], int s2)
{
	bool Array[26] = { false };
	for (int i = 0; i < 26; i++)
	{
		Array[i] = 0;		//intializing array with 0
	}

	for (int i = 0; i < s1; i++)
	{
		Array[x[i] - 97] = true;
	}

	for (int j = 0; j < s2; j++)
	{
		if (Array[y[j] - 97] != true)
		{
			cout << y[j] << " ";
		}
	}
}

int main()
{
	char array[3] = {'a','b','c'};
	char array2[2] = {'a','d'};
	cout << "Union : ";
	union_set(array, 3, array2, 2);
	cout << "\nIntersection : ";
	Intersection(array, 3, array2, 2);
 	return 0;
}
