#include <stdio.h>

int		main(int argc, char *argv[]) {
	
	int num1, num2, sum;

	printf ("Please enter an integer.\n");
	scanf ("%d", &num1);
	printf ("Please enter another integer.\n");
	scanf ("%d", &num2);

	sum = num1 + num2;
    printf ("The sum of the two integers you entered is %d.\n", sum);

	return 0;
}
