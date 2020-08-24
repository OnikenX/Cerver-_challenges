#include <stdio.h>
#include <string.h>

int main(){
	char a, b[100], c[100];
	scanf("%c\n %s\n %[^99\n]", &a,b,c );
	//scanf("%c",&a);
	//scanf("%s",b);
	//scanf("%[^\n]",c);
	
	printf("strings:\n %c\n %s\n %s\n",a,b,c);

	return 0;
}
