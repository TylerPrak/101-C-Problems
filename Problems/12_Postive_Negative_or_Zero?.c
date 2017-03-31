#include <stdio.h>

int		main(int argc, char *argv[]) {

	int num;
	scanf("%d", &num);

	printf("The number is ");
	if (num == 0) 
		printf("zero.");
	else if (num < 0)
		printf("negative.");	
	else 
		printf("positive.");
	
	printf("\n");
	return 0;
}
