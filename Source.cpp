#include <iostream>
#include "Triangle.h"
#include "Functions.h"


using namespace std;

int main()
{
	int QuantityOfTriangles, QuantityOfRightTriangles;
	cout << "Enter the number of triangles:";
	cin >> QuantityOfTriangles;
	Triangle** SimpleTriangle = new Triangle*[QuantityOfTriangles];
	for (int i = 0; i < QuantityOfTriangles; i++)
	{
		double FirstCatet, SecondCatet, Hypotenose;
		cout << "Please enter the sides of the triangle # " << i << std::endl;
		cout << "First catet = ";
		cin >> FirstCatet;
		cout << "Second catet = ";
		cin >> SecondCatet;
		cout << "Hypotenose = ";
		cin >> Hypotenose;
		system("cls");
		SimpleTriangle[i] = new Triangle(FirstCatet, SecondCatet, Hypotenose);
		system("cls");
	}

	cout << "Enter the number of right triangles:";
	cin >> QuantityOfRightTriangles;
	RightTriangle** SimpleRightTriangle = new RightTriangle* [QuantityOfRightTriangles];
	for (int i = 0; i < QuantityOfRightTriangles; i++)
	{
		double FirstCatet, SecondCatet, Hypotenose;
		cout << "Please enter the sides of the triangle # " << i << std::endl;
		cout << "First catet = ";
		cin >> FirstCatet;
		cout << "Second catet = ";
		cin >> SecondCatet;
		cout << "Hypotenose = ";
		cin >> Hypotenose;
		system("cls");
		SimpleRightTriangle[i] = new RightTriangle(FirstCatet, SecondCatet, Hypotenose);
		system("cls");
	}

	for (int i = 0; i < QuantityOfTriangles; i++)
	{
		Triangle& AnyTriangle = *SimpleTriangle[i];
		cout << AnyTriangle;
	}

	for (int i = 0; i < QuantityOfRightTriangles; i++)
	{
		Triangle& AnyTriangle = *SimpleRightTriangle[i];
		cout << AnyTriangle;
	}

	Triangle& AnyTriangle = MaxArea(SimpleTriangle, QuantityOfTriangles);
	cout << "Triangle with the largest area:" << endl << AnyTriangle;

	AnyTriangle = MinHypotenose(SimpleRightTriangle, QuantityOfRightTriangles);
	cout << "Triangle with the lowest hypotenose:" << endl << AnyTriangle;



    return 0;
}