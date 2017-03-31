#include <stdio.h>

int		main(int argc, char *argv[]) {

	int num;
	
	FILE * fp;
	fp = fopen ("testdata6", "r");
	fscanf(fp,"%d", &num);

		printf("%d\n", num);

	fclose(fp);
	return 0;
}
