#include <stdio.h>

void		ft_Swap(int *num1, int *num2) {

	int z;
	
	z = *num2;
	*num2 = *num1;
	*num1 = z;
}


void		ft_GetArray(int *num, char *argv) {

	int i;
	
	FILE * fp;
	fp = fopen(argv, "r");
	for (i = 0;i < 10;i++)
		fscanf(fp, "%d", &num[i]);
	fclose(fp);
}

void	 ft_CopyArray(int *num, int *newNum) {
	
	int i;
	
	for (i = 0; i < 10;i++)
		newNum[i] = num[i];
}

void 	ft_BubbleSort (int *newNum) {

	int i, j, z, c, max;
	max = 10;
	
	while (max != 1) {
		i = 0;	
		j = 1;
		while (j < max) {
			if (newNum[i] > newNum[j])
				ft_Swap(&newNum[i], &newNum[j]);
			i++;
			j++;
		}
		max--;
	}	
}

int		main(int argc, char *argv[]) {
	
	int num[10], sortedNum[10], i;
	
	ft_GetArray(num, argv[1]);
	
	printf("Array to be sorted = ");
	for (i = 0;i < 10;i++)
		printf("%d ", num[i]);
	printf("\n");	
	
	ft_CopyArray(num, sortedNum);
	ft_BubbleSort(sortedNum);

	printf("Sorted array = ");	
	for (i = 0;i < 10;i++)
		printf("%d ", sortedNum[i]);
	printf("\n");	


	return 0;
}
