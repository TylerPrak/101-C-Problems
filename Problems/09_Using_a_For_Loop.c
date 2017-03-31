#include <stdio.h>

int		main(int argc, char *argv[]) {

	int num, i;

	FILE * fp;
	fp = fopen("./Testdata/testdata9", "r");
	
	for (i = 0; i < 5; i++) {
		fscanf(fp, "%d", &num);
		printf("%d ", num);
	}

	fclose(fp);
	printf("\n");
	return 0;
}
