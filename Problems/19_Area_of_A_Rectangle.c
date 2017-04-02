#include <stdio.h>

int		main(int argc, char *argv) {

	float L, H, product;
	printf("Enter the length of your rectangle.\n");
	scanf("%f", &L);
	while (1 > L) {
		printf("Enter the length of your rectangle.\n");
		scanf("%f", &L);
	}
	printf("Enter the height of your rectangle.\n");
	scanf("%f", &H);
	while (1 > H){
		printf("Enter the height of your rectangle.\n");
		scanf("%f", &H);
	}
	product = L * H;	


	printf("The area of your rectangle is %f\n", product);
	return 0;
}
