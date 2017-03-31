#include <stdio.h>

int		main(int argc, char *argv[]){

	int num;
	scanf("%d", &num);

	if (num > 100)
		printf("The number is bigger than 100.");
	else
		printf("The number is not bigger than 100.");	

	printf("\n");	
	return 0;
}
