#include <stdio.h>

void	ft_printTop(int l) {
	
	int i;
	
	for (i = 0;i < l;i++) 
		printf("*");

	printf("\n");
}

void	ft_printBody(int h, int l) {
	
	int i, j;
	h -= 2;
	l -= 2;
	if ((l + 2) == 1) 
		for (i = 0; i < h; i++) 
			printf("*\n");
	else
		for (i = 0;i < h; i++){
			printf("*");
			for (j = 0;j < l; j++) 
				printf(" ");
			printf("*\n");
		}
}

int		main(int argc, char *argv[]) {
	
	int l, h, num;
	l = (int)argv[1][0] - '0';
	h = (int)argv[2][0] - '0';


	if (argv[1][1] >= '0' && argv[1][1] <= '9') {
		num = 10 * (argv[1][0] - '0');
		l = num + (argv[1][1] - '0');
	}	
	else if (argv[1][0] >= '0' && argv[1][0] <= '9') 
		l = argv[1][0] - '0';

	if (argv[2][1] >= '0' && argv[2][1] <= '9') {
		num = 10 * (argv[2][0] - '0');
		h = num + (argv[2][1] - '0');
	}	
	else if (argv[2][0] >= '0' && argv[2][0] <= '9') 
		h = argv[2][0] - '0';

	if ((l >= 1 && l <= 20) && ( h >= 1 && h <= 20)) {
		ft_printTop(l);
		if (h >= 3)
			ft_printBody(h, l);
		if (h >= 2)
			ft_printTop(l);
	}

	return 0;
}
