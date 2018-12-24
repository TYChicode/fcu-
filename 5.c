#include <stdio.h>
#include <math.h>
//列出1~n的所有質數

int main(){
	int n,x,y,num=0;
	for(x = 2;x <= 1000;x++){
		int var = 0;
		for (y = 2;y <= sqrt(x);y++){
			if (x%y == 0) {
				var++;
				break;
			}
		}
		if (var == 0) {
			printf ("%d ",x);
			num++;
			if (num%5==0){
				printf ("\n");
			}
		}
	}
	return 0;
}

