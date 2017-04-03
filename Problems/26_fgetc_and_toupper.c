#include <stdio.h>
#include <ctype.h> 

int		main(int argc, char *argv[]) {

	int c;

	FILE * fp;
	fp = fopen("../Testdata/testdata26", "r");

	while ((c = fgetc(fp)) != EOF)
		printf("%c", toupper(c));
	
	fclose(fp);
	return 0;
}  
