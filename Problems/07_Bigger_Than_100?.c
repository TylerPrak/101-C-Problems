#include <stdio.h>

int		main(int argc, char *argv[]){

	int num;
	scanf("%d", &num);

	if (num > 100)
		printf("The number is bigger than 100.\n");
	else
		printf("The number is not bigger than 100.\n");	
	
	return 0;
}
