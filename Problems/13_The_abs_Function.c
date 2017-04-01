#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char *argv[]) {

	int num;
	if (argv[1][0] == '-')
		num = (int)(argv[1][1] - 48);
	else
		num = (int)(argv[1][0] - 48);

	printf("%d\n", abs(num));
	return 0;
}
