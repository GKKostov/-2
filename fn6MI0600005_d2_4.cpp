/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2022/2023
*
* @author GeorgiKostov
* @idnumber 6MI0600005
* @task 4
*
*/

#include<iostream>

int gcd(int a, int b) // function to find Greatest Common Divisor between 2 numbers
{
	if (a == 0)
	{
		return b;
	}
	return gcd(b % a, a);
}

int findGCD(int arr[], int n) // function to find the GCD in all numbers 
{
	int result = arr[0];
	for (int i = 1; i < n; i++)
	{
		result = gcd(arr[i], result);

		if (result == 1)
		{
			return 1;
		}
	}
	return result;
}

bool isArrayMagical(int arr[], int n)  // the function for magical array
{
	int flag = 1 % findGCD(arr, n);

	if (flag != 0)
	{
		return false;
	}
	return true;
}

int main()
{
	const int minNum = 1;
	const int maxNum = 1000000000;
	int N;
	std::cin >> N;

	if (N < 2 || N>1024)
	{
		std::cout << "-1";
		return -1;
	}

	int* array;
	array = new int[N];

	for (int i = 0; i < N; ++i) {

		std::cin >> *(array + i);
		if ((*(array + i) > maxNum) || (*(array + i) < minNum))
		{
			std::cout << "-1";
			return -1;
		}
	}

	std::cout << isArrayMagical(array, N); 
	delete[] array;
}