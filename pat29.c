#include <stdio.h>
int main(){
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);

	for(char i=1; i<=n; i++){
		for(char j=1; j<=n; j++)
			if(i==1||i==n||j==1||j==n)
				printf("* ");
			else printf("  ");
		printf("\n");
	}
	return 0;
}
