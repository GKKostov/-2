/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2022/2023
*
* @author Georgi Kostov
* @idnumber 6MI0600005
* @task 2
*
*/

#include <iostream>
using namespace std;

double calcRadiusVector(double x, double y)
{
	return sqrt(x * x + y * y);
}

double absoluteVal(double x)
{
	if (x < 0)
	{
		x *= (-1);
	}
	return x;
}
int main()
{
	double xCoordinate = 0;
	double yCoordinate = 0;

	cin >> xCoordinate;
	cin	>> yCoordinate;

	double xAbsoluteVal = absoluteVal(xCoordinate);
	double yAbsoluteVal = absoluteVal(yCoordinate);
	

	if (xAbsoluteVal > 10.0 || yAbsoluteVal > 10.0)
	{
		cout << "Miss";
		return 0;
	}
	double radiusVector = calcRadiusVector(xCoordinate, yCoordinate);
	if (radiusVector < 1.0)
	{
		cout << "Nose";
		return 0;
	}
	else if (radiusVector == 1.0)
	{
		cout << "Border";  // Nose border
		return 0;
	}
	if (radiusVector == 10.0)
	{
		cout << "Border";  // Face border
		return 0;
	}

	if (xAbsoluteVal == 10 || yAbsoluteVal == 10)
	{
		cout << "Border";  // Square border
		return 0;
	}
	if ((xAbsoluteVal < 5) && (yCoordinate > -6 && yCoordinate < -4))
	{
		cout << "Mouth";
		return 0;
	}
	if ((xAbsoluteVal == 5 && (yCoordinate >= -6 && yCoordinate <= -4)) ||
		(yCoordinate == -4 || yCoordinate == -6)&&(xAbsoluteVal<= 5))
	{
		cout << "Border";  // Mouth border
		return 0;
	}
	
	if(radiusVector>10 && xAbsoluteVal<10 && yAbsoluteVal <10)
	{
		cout << "Background";
		return 0;
	}

	const int xRightEyeCenterCoordinate = 4;
	const int xLeftEyeCenterCoordinate = -4;
	const int yEyeCenterCoordinate = 4;
	const double eyeRadius = 2;
	
	double xRightEyeCoordinate = xCoordinate - xRightEyeCenterCoordinate;
	double yRightEyeCoordinate = yCoordinate - yEyeCenterCoordinate;

	double rightRadiusVectorEye = calcRadiusVector(xRightEyeCoordinate, yRightEyeCoordinate);

	double xLeftEyeCoordinate = xCoordinate - xLeftEyeCenterCoordinate;
	double yLeftEyeCoordinate = yCoordinate - yEyeCenterCoordinate;

	double leftRadiusVectorEye = calcRadiusVector(xLeftEyeCoordinate, yLeftEyeCoordinate);
	if (rightRadiusVectorEye < eyeRadius || leftRadiusVectorEye < eyeRadius)
	{
		cout << "Eye";
		return 0;
	}
	else if (rightRadiusVectorEye == eyeRadius || leftRadiusVectorEye == eyeRadius)
	{
		cout << "Border";  // Eye border
		return 0;
	}
	cout << "Face";
	
	return 0;
}








(a * x) + (b * y) + (c * z) + ..... + (n * l)  = 1



29x + 6y + 10z -1 = 0

x = (1-6y-10z)/29
y = 