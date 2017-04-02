#include <stdio.h>

int		main(int argc, char *argv[]) {

	int L, H, i, j;
	printf("Enter the length(1-20) of your Asterisk Box.\n");
	scanf("%d", &L);
	while (1 > L || L > 20) {
		printf("Enter the length(1-20) of your Asterisk Box.\n");
		scanf("%d", &L);
	}
	printf("Enter the height(1-20) of your Asterisk Box.\n");
	scanf("%d", &H);
	while (1 > H || H > 20){
		printf("Enter the height(1-20) of your Asterisk Box.\n");
		scanf("%d", &H);
	}
	
	for(i = 0;H > i;i++){
		for(j = 0;L > j; j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
