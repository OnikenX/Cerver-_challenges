#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char** argv){
	char string[100];
	int i = 1, ii = 0, size = 0;
	if(argc == 1){
		printf("escreva a string:");
		scanf(" %99[^\n]%*c", string);
	}else {
		while((i < argc) || (size<100)){
			if(i>1 && ii==0){
				string[size++]=' ';
			}
			if(argv[i][ii]=='\0'){
				++i;
				continue;
			}
				string[size++] = tolower(argv[i][ii++]); 
		}
		string[size++]='\0';			
	}
	
	printf("%s\n",string);			

	return 0;
}
