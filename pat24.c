#include <stdio.h>
int main(){
	int n;
	char ch='A'-1;

	printf("Enter Number: ");
	scanf("%d", &n);

	for(char i=n; i>=1; i--){
		for(char j=1;j<i;j++)
			printf(" ");
		for(char j=i;j<=n; j++)
			printf("%c",ch+j);
		printf("\n");
	}
	return 1;
}
