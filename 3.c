#include <stdio.h>
#include <math.h>

int prime(int N){
	int k,val = 0;
	for (k = 2;k <= sqrt(N);k++){
		if (N % k == 0){
			val ++;
			break;
		}
	}
	if (val == 0){
		printf ("Yes");	
	}
	else printf ("No");
}

int main(){
	int n;
	scanf ("%d",&n);
	prime (n);
	return 0;
}
