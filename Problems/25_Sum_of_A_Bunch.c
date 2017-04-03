#include <stdio.h>

int		main(int argc, char *argv) {

	int num, sum;
	
	FILE * fp;
	fp = fopen("../Testdata/testdata25", "r");

	while (fscanf(fp, "%d", &num) != EOF) {
		sum += num;
	}

	printf("%d\n", sum);
	fclose(fp);
	return 0;
}
