#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int		main(int argc, char *argv[]) {

	float num;
	num = atof(argv[1]);

	printf("%f\n", sin(num));
	return 0;
}
