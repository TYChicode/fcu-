#include <stdio.h>
//數字轉中文
int main(){
	int num,ones,tens;
	scanf ("%d",&num);
	ones = num % 10;
	tens = num / 10;
	switch (tens){
		case 1:
			break;
		case 2:
			printf ("二");
			break;
		case 3:
			printf ("三");
			break;
		case 4:
			printf ("四");
			break;
		case 5:
			printf ("五");
			break;
		case 6:
			printf ("六");
			break;
		case 7:
			printf ("七");
			break;
		case 8:
			printf ("八");
			break;
		case 9:
			printf ("九");
			break;
	}
	printf ("十");
	if (ones != 0){
		switch (ones){
		case 1:
			printf ("一");
			break;
		case 2:
			printf ("二");
			break;
		case 3:
			printf ("三");
			break;
		case 4:
			printf ("四");
			break;
		case 5:
			printf ("五");
			break;
		case 6:
			printf ("六");
			break;
		case 7:
			printf ("七");
			break;
		case 8:
			printf ("八");
			break;
		case 9:
			printf ("九");
			break;
		}
	}
	return 0;
}
