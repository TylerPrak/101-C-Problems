#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int		main(int argc, char *argv[]) {

	float num;
	num = atof(argv[1]);
	
	printf("%f\n", sqrt(num));
	return 0;
}
