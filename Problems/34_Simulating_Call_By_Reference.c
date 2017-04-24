#include <stdio.h>

int		ft_Swap(int *x, int *y) {

	int z;
	
	z = *x;
	*x = *y;
	*y = z;
	return z;
}

int		main(int argc, char *argv) {

	int x, y;
	
	printf("Enter your first integer.\n");
	scanf("%d", &x);
	printf("Enter your second integer.\n");
	scanf("%d", &y);
	ft_Swap(&x, &y);
	
	printf("First integer  = %u\nSecond integer = %u\n", x, y);	
	return 0;
}
