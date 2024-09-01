#include <stdio.h>

struct fraction {
	int numerator;
	int denominator;
}Fraction;

Fraction multiplyFraction(Fraction first, Fraction second)
{
		Fraction product;
		product.numerator = first.numerator * second.numerator;
		product.denominator = first.denominator * second.denominator;
		
		return product;
		

}



int main()
{ 
struct fraction	Fraction x = { .numerator = 1, .denominator = 2 };
	Fraction y = { .numerator = 2, .denominator = 4 };
	
	Fraction product = multiplyFraction(x, y);
	
	printf("%d/%d", product.numerator, product.denominator);


	return 0;
}












