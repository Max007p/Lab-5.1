#include <iostream>
#include <windows.h>
#include <cmath>
#include "Triangle.h"
#define pi 3.141592

Triangle::Triangle():
	FirstCatet(NULL),
	SecondCatet(NULL),
	Hypotenose(NULL)
{

};

Triangle::Triangle(double FirstCatet, double SecondCatet, double Hypotenose) :
	FirstCatet(FirstCatet),
	SecondCatet(SecondCatet),
	Hypotenose(Hypotenose)
{
	CheckTheExist();
};

Triangle::~Triangle()
{

};

std::ostream& operator<< (std::ostream& out, const Triangle& triangle)
{
	return triangle.print(out);
};

void Triangle::CheckTheExist()
{
	while (!(FirstCatet + SecondCatet > Hypotenose) || !(FirstCatet + Hypotenose > SecondCatet) || !(SecondCatet + Hypotenose > FirstCatet) || !(FirstCatet != 0) || !(SecondCatet != 0) || !(Hypotenose != 0))
	{
		EnterTheValues();
	}
	MathematicalExpression();
}

void Triangle::EnterTheValues()
{
	std::cout << "Please enter the correct sides of the triangle" << std::endl;
	std::cout << "First catet = ";
	std::cin >> FirstCatet;
	std::cout << "Second catet = ";
	std::cin >> SecondCatet;
	std::cout << "Hypotenose = ";
	std::cin >> Hypotenose;
}

void Triangle::MathematicalExpression()
{
	FirstAngle = (pow(SecondCatet, 2) + pow(Hypotenose, 2) - pow(FirstCatet, 2)) / (2. * SecondCatet * Hypotenose);
	FirstAngle = acos(FirstAngle);
	SecondAngle = SecondCatet * sin(FirstAngle) / FirstCatet;
	SecondAngle = asin(SecondAngle) * 180 / pi;
	FirstAngle = FirstAngle * 180 / pi;
	ThirdAngle = 180 - FirstAngle - SecondAngle;
	Perimetr = FirstCatet + SecondCatet + Hypotenose;
	Area = sqrt(Perimetr * 0.5 * (Perimetr * 0.5 - FirstCatet) * (Perimetr * 0.5 - SecondCatet) * (Perimetr * 0.5 - Hypotenose));
}

double Triangle::GetArea() const
{
	return Area;
}

double Triangle::GetHypotenose() const
{
	return Hypotenose;
}

RightTriangle::RightTriangle():
	Triangle(NULL, NULL, NULL)
{

};

RightTriangle::RightTriangle(double FirstCatet, double SecondCatet, double Hypotenose) :
	Triangle(FirstCatet, SecondCatet, Hypotenose)
{
	CheckTheExist();
};

RightTriangle::~RightTriangle()
{

};

void RightTriangle::CheckTheExist()
{
	while (!((pow(FirstCatet, 2) + pow(SecondCatet, 2)) == pow(Hypotenose, 2)))
	{
		EnterTheValues();
	}
	MathematicalExpression();
}