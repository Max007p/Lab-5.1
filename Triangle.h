#pragma once
#include <iostream>

class Triangle
{
public:
	Triangle();
	Triangle(double, double, double);
	virtual ~Triangle();
	friend std::ostream& operator<< (std::ostream&, const Triangle&);
	virtual std::ostream& print(std::ostream& out) const
	{
		out << "First side of triangle (a) = " << FirstCatet << std::endl << "Second side of triangle (b) = " << SecondCatet << std::endl << "Third side of triangle (c) = " << Hypotenose << std::endl << std::endl;
		out << "Angle between c and b = " << FirstAngle << std::endl << "Angle between a and c = " << SecondAngle << std::endl << "Angle between b and a = " << ThirdAngle << std::endl << std::endl;
		out << "Sum of all sides = " << Perimetr << std::endl;
		out << "The area of this triangle is = " << Area << std::endl;
		out << "------------------------------------------" << std::endl;
		return out;
	};
	double GetArea() const;
	double GetHypotenose() const;

protected:
	double FirstCatet;
	double SecondCatet;
	double Hypotenose;
	double FirstAngle = 0;
	double SecondAngle = 0;
	double ThirdAngle = 0;
	double Perimetr = 0;
	double Area = 0;
	void MathematicalExpression();
	void EnterTheValues();
	virtual void CheckTheExist();
};

class RightTriangle : public Triangle
{
public:
	RightTriangle();
	RightTriangle(double, double, double);
	~RightTriangle();
	virtual std::ostream& print(std::ostream& out) const override final
	{
		out << "First side of the right triangle (a) = " << FirstCatet << std::endl << "Second side of the right triangle (b) = " << SecondCatet << std::endl << "Third side of the right triangle (c) = " << Hypotenose << std::endl << std::endl;
		out << "Angle between c and b = " << FirstAngle << std::endl << "Angle between a and c = " << SecondAngle << std::endl << "Angle between b and a = " << ThirdAngle << std::endl << std::endl;
		out << "Sum of all sides = " << Perimetr << std::endl;
		out << "The area of this right triangle is = " << Area << std::endl;
		out << "------------------------------------------" << std::endl;
		return out;
	};

protected:
	virtual void CheckTheExist() override final;
};

