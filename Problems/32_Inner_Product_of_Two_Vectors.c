#include <stdio.h>

int i;

void		ft_GetValues(float *u, float *v, int size) {
	
	printf("Enter 8 floating point values for your first vector.\n");
	
	for (i = 0;i < size;i++)
		scanf("%f", &u[i]);
	
	printf("Your first vector is (");
	for (i = 0;i < size;i++) {
		printf("%f", u[i]);
		if(i != 7)
			printf(", ");
	}
	printf(")\n");

	
	printf("Enter 8 floating point values for your second vector.\n");
	
	for (i = 0;i < size;i++) 
		scanf("%f", &v[i]);
	
	printf("Your second vector is (");
	for (i = 0;i < size;i++) {
		printf("%f", v[i]);
		if(i != 7)
			printf(", ");
	}
	printf(")\n");
}		

float		inner(float u[], float v[], int size) {

	float product, sum;
	for	(i = 0;i < size;i++) {
		product = u[i] * v[i];
		sum += product;
		printf("Product = %f\nSum = %f\n", product, sum);
	}
	
	return sum;
}

int			main(int argc, char *argv) {

	float product, u[8], v[8];
	ft_GetValues(u, v, 8);	
	product = inner(u, v, 8);
	
	printf("The inner product of the two vectors is %f\n", product);
	return 0;
}
