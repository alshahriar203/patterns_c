#include <stdio.h>
int main(){
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);

	for(char i=1; i<=n;i++){
		for(char j=1; j<i;j++)
			printf(" ");
		for(char j=i; j<=n;j++)
			printf("%d", j);
		printf("\n");
	}
	return 0;
}
