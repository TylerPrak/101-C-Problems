#include <stdio.h>

int		main(int argc, char *argv[]) {

	int num, i;

	FILE * fp;
	fp = fopen("../Testdata/testdata8","r");
	fscanf(fp, "%d", &num);

	for (i = 0; i < num; i++)
		printf ("*");
	
	fclose(fp);
	printf("\n");
	return 0;
}
