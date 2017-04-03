#include <stdio.h>

int		main(int argc, char *argv[]) {

	int i, j, num[10];
		 
	for (j = 0;j <= 9;j++) {
		scanf("%d", &num[j]);
	}
	
	printf("*****\n");
	for (i = 9; i >= 0;i--) {
		
		printf("%d\n", num[i]);
	}

	return 0;
}
