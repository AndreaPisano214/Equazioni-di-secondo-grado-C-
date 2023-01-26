
//Per compilare scrivere gcc eq.c -o eq -lm//
// il -lm serve per dire a linux di implementare//
//tutte le funzioni della math.h//


#include<stdio.h>
#include<math.h>

int main() 
{
	float a,b,c;
	double delta,x1,x2;

	printf("Inserire l'elemento di secondo grado:");
	scanf("%f",&a);
	printf("Inserire l'elemento di primo grado:");
	scanf("%f",&b);
	printf("Inserire c:");
	scanf("%f",&c);

	if(a==0.0) 
		printf("L'equanzione non e' di secondo grado.");

	else 
	{
		delta=b*b-4*a*c;

	if(delta<0.0)
		printf("Non ammette soluzioni reali.");
	else {
		x1=(-b- sqrt(delta))/(2*a);
		printf("La prima radice e':%f\n",x1);
		x2=(-b+ sqrt(delta))/(2*a);
		printf("La seconda radice e':%f\n",x2);
		}
	}
}