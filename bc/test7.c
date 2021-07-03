#include <stdio.h>
#include <conio.h>

void main(){
	int N, i, j, v=1;
	int a[25];
	printf("Enter the Number: ");
	scanf("%d", &N);

	for(i=0,j=1; i<N,j<=N; i=i+2, j=j+2){
		a[i] = v++;
		a[j] = N%2==0 ? ((N/2) + (i/2) + 1) : ((N/2) + (i/2) + 2);
	}	
	
	printf("Output Array: ");
	for(i=0;i<N;i++){
		printf("%d ", a[i]);
	}
}


