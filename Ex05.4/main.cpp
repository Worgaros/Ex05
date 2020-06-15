#include <iostream>
#include <math.h>

void SolveEquation(int ax2, int bx, int c);

int main()
{
	SolveEquation(11, 5, 3);
	SolveEquation(7, 2, 7);
	SolveEquation(222, 345, -145);

	system("pause");
	return EXIT_SUCCESS;
}

void SolveEquation(int a, int b, int c)
{
	int discriminant = 0;

	discriminant = (b * b) - 4 * a * c;

	if (discriminant < 0)
		std::cout << "Il n'existe pas de solution a cette equation.\n\n";
	else if (discriminant == 0)
	{
		float x0 = 0;
		x0 = (-b) / (2 * a);

		std::cout << "Il existe une solution a cette equation pour x= " << x0 << ".\n\n";
	}
	else
	{
		long float x1 = 0;
		long float x2 = 0;

		x1 = ((-b + sqrt(discriminant)) / (2 * a));
		x2 = ((-b - sqrt(discriminant)) / (2 * a));

		std::cout << "Il existe deux solutions a cette equation pour x= " << x1 << " et pour x= " << x2 << ".\n\n";
	}
}