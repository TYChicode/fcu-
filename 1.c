#include <stdio.h>

int main(){
	int num,ones,tens;
	scanf ("%d",&num);
	ones = num % 10;
	tens = num / 10;
	switch (tens){
		case 1:
			break;
		case 2:
			printf ("�G");
			break;
		case 3:
			printf ("�T");
			break;
		case 4:
			printf ("�|");
			break;
		case 5:
			printf ("��");
			break;
		case 6:
			printf ("��");
			break;
		case 7:
			printf ("�C");
			break;
		case 8:
			printf ("�K");
			break;
		case 9:
			printf ("�E");
			break;
	}
	printf ("�Q");
	if (ones != 0){
		switch (ones){
		case 1:
			printf ("�@");
			break;
		case 2:
			printf ("�G");
			break;
		case 3:
			printf ("�T");
			break;
		case 4:
			printf ("�|");
			break;
		case 5:
			printf ("��");
			break;
		case 6:
			printf ("��");
			break;
		case 7:
			printf ("�C");
			break;
		case 8:
			printf ("�K");
			break;
		case 9:
			printf ("�E");
			break;
		}
	}
	return 0;
}
