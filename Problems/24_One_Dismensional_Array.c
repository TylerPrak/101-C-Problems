#include <stdio.h>

int		main(int argc, char *argv[]) {

	int i, j, num[15];

	FILE * fp;
	fp = fopen("../Testdata/testdata24", "r");		

	for (i = 0;i <= 15;i++) {		
		fscanf(fp, "%d", &num[i]);
	}

	
	for (j = 13;j >= 0;j--) { 
		printf("%d\n", num[j]);
	}

	fclose(fp);
	return 0;
}
