#include <stdio.h>
int main(){
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);
	for(char i=n; i>=1; i--){
		for(char j=n; j>=i; j--)
			printf("%d",j);
		printf("\n");
	}
	return 0;
}
