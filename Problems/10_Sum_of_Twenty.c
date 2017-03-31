#include <stdio.h>

int		main(int argc, char *argv[]) {

	int num, i, sum;

	FILE * fp;
	fp = fopen("../Testdata/testdata10", "r");
	
	for (i = 0; i < 20; i++) {
		fscanf(fp, "%d", &num);
		sum += num;
	}

	fclose(fp);
	printf("%d\n", sum);
	return 0;
}
