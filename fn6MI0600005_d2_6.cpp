/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2022 / 2023
*
*@author Georgi Kostov
* @idnumber 6MI0605005
* @task 6
*
*/
#include <iostream>
using namespace std;

void numberReverse(int& n)
{
    int remainder;
    int reversed_number = 0;
    while (n != 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    n = reversed_number;
}

bool isPalindrome(int n)
{
    int temp = n;
    numberReverse(n);
    if (temp == n)
    {
        return true;
    }
    return false;
}

int main() {
    long int maxValue = 2147483648;
    short int minValue = 1;
    short int minThreeDigitPalindrome = 101;
    unsigned int counter = 0;
    unsigned int start=0;
    unsigned int end=0;

    cout << "Enter start: ";
    cin >> start;
    cout << "Enter end: ";
    cin >> end;

    if (start > end)
    {
        return -1;
    }

    if (start<minValue || start>maxValue)
    {
        return -1;
    }
    if (end<minValue || end>maxValue)
    {
        return -1;
    }
    if (start <= 100 && end <= 100)
    {
        cout << counter;
        return 0;
    }
    unsigned int number = start;
    if (number <= 100)
    {
        number = minThreeDigitPalindrome;
    }

    for (number; number <= end; number++)
    {
        if (isPalindrome(number))
        {
            counter++;
        }
    }

    cout << counter; // This gives the number of palindromes between start and end.

    
}