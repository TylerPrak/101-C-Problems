#include <stdio.h>

int		main(int argc, char *argv) {
	
	int num;

	FILE * fp;	
	fp = fopen("../Testdata/testdata23", "r");

	while (fscanf(fp, "%d", &num) != EOF)
	printf("%d\n", num); 

	fclose(fp);
	return 0;
}
