#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char *argv[]) {

	int cc;

	while (getchar() != EOF) 
			cc++;
	
	if (cc > 1)
		cc--;
	
	printf("%d\n", cc);
	return 0;
}
