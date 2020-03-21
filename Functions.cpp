#include "Functions.h"

Triangle& MaxArea(Triangle** SimpleTriangle, int Size)
{
	int NumberOfTheLargest = NULL;
	double MaxFinalArea = SimpleTriangle[0]->GetArea();
	for (int i = 0; i < Size; i++)
	{
		if (MaxFinalArea < SimpleTriangle[i]->GetArea())
		{
			MaxFinalArea = SimpleTriangle[i]->GetArea();
			NumberOfTheLargest = i;
		}
	}
	return *SimpleTriangle[NumberOfTheLargest];
}

Triangle& MinHypotenose(RightTriangle** SimpleRightTriangle, int Size)
{
	int NumberOfTheLowest = NULL;
	double MinHypotenose = SimpleRightTriangle[0]->GetHypotenose();
	for (int i = 0; i < Size; i++)
	{
		if (MinHypotenose> SimpleRightTriangle[i]->GetHypotenose())
		{
			MinHypotenose= SimpleRightTriangle[i]->GetHypotenose();
			NumberOfTheLowest = i;
		}
	}
	return *SimpleRightTriangle[NumberOfTheLowest];
}

