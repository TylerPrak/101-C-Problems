#include <stdio.h>

int i,j;

void	ft_getValues(int num[][3]) {
	
	for (i = 0;i < 3;i++) 
		for (j = 0;j < 3;j++) 
			scanf("%d", &num[i][j]);
	
	for (i = 0;i < 3;i++) 
		for (j = 0;j < 3;j++) 
			printf("Value of num at [%d][%d] is %d\n", i, j, num[i][j]);

}	

int		ft_getSum(int num[][3]) {
	
	int sum = 0;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3;j++)
			sum += num[i][j];

	return sum;
}

int		main(int argc, char *argv) {
	
	int sum, num[3][3];

	ft_getValues(num);
	sum = ft_getSum(num);

	printf("The sum of the 9 integers put into the"
	"two dismensional array is %d.\n", sum);
	return 0;
}
