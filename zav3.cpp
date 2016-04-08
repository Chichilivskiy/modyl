#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main(int argc, char *argv[]) {
	double vklad,proz,n;
	int year=0;
	printf("Vvedite vlkad:");
	scanf("%lf",&vklad);
	printf ("Vvedite proz");
	scanf("%lf",&proz);
    n=vklad*2;
	while (vklad<n)
	{
        year++; 
        vklad=(vklad+(vklad/100)*proz);
		
	}
	printf("vklad=%lf",vklad);
	printf("year=%d",year);
	
	return 0;
}
