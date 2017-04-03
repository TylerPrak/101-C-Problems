#include <stdio.h>
#include <ctype.h>


int		ft_addSum(int num, int sum) {
	
		num -= 48;
		sum += num;

	return sum;
}

int		main(int argc, char *argv[]) {

	int sum, num;

	FILE * fp;
	fp = fopen(argv[1], "r");
	
	while ((num = fgetc(fp)) != EOF && (num >= '0' && num <= '9'))
		sum = ft_addSum(num, sum);

	printf("%d\n", sum);
	fclose(fp);
	return 0;
}
