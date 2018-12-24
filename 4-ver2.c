#include <stdio.h>
#include <string.h>
//反轉(完整版)
void change(char word[100]){
	int k,length;
	char wordnew[100]={0};
	length = strlen (word);
	for (k = 0;k < length;k++){
		wordnew[k] = word[length-1-k];
	}
	printf ("%s",wordnew);
}

int main (){
	char str[100]={0};
	scanf ("%s",str);
	change (str);
	return 0;
} 
