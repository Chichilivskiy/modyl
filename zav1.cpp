#include<stdio.h> 
#include<locale.h> 
#include<stdlib.h> 
#include<math.h> 

int main() 
{ 
int x , y, vidstan; 
 
printf ("Vvedite x: "); 
scanf ("%d", &x); 
printf ("Vvedite y: "); 
scanf ("%d", &y); 
vidstan = sqrt(pow((35 + x), 2) + pow((40 - y), 2)); 
printf("vidstan %d\n", vidstan); 

system("pause"); 
return 0; 
}
