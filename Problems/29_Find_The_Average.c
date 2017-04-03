#include <stdio.h>
#include <ctype.h>

int		main(int argc, char *argv[]) {

	int sum, num;
	float mean;
	
	FILE * fp;
	fp = fopen("../Testdata/testdata29", "r");

	while ((num = fgetc(fp)) != EOF && (num >= '0' && num <= '9')) {
		num -= 48;
		sum += num;
	}

	mean = num/4;
	
	printf("%f\n", mean);
	return 0;
}
