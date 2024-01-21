/*
In this code, we will use "selection sort" to put the array in an order.

Developer: Barış Someroğlu
Date: 21.01.2024 / 9:10 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, temp;

	cout << "Please Enter Size of Array: ";
	cin >> n;

	vector<int> A(n);

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter Value for " << i + 1 << ". Element: ";
		cin >> A[i];
	}

	cout << endl;

	cout << "Entered Array is: ";

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (A[j] < A[i])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;

				// swap(A[i],A[j);
			}
		}
	}

	cout << endl;

	cout << "Sorted Array is: ";

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
}