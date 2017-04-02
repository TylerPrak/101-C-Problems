#include <stdio.h>
#include <math.h>

int		main(int argc, char *argv) {
	
	float num, area;
	printf("Enter the radius for your circle.\n");
	scanf("%f", &num);
	while (1 > num) {
		printf("Enter the radius for your circle.\n");
		scanf("%f", &num);	
	}

	area = M_PI * powf(num, 2);

	printf("%f\n", area);
	return 0;
}
