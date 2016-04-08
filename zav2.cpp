#include <stdio.h>
#include <cstdlib>
#include <locale.h>
#include <iostream>
#include <math.h>

double func(double x, double a, double b,double c, double d, double f, double g, double h);

int main()
{
	double x,a, b, c, d, f, g, h;
	
	printf("Vvedite x: ");
	scanf("%lf", &x);
	if(x < 1328) {
 a = 0;
 b = 1;
 c = 1;
 d = 3;
 f = -5;
 g = 0.005;
 h = 0;
	}
	else {
 a = 0;
 b = 7;
 c = 4;
 d = 1;
 f = -5;
 g = 0.004;
 h = 1100;
	}
	
	printf("Y(x) = %lf", func(x, a, b, c, d, f, g, h));
	
}

double func(double x, double a, double b,double c, double d, double f, double g, double h)
{
	double y;
	
 y = a + (b / (c + d * exp(f + g * (x + h))));
	
	return y;
}
