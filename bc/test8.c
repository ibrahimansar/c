#include <stdio.h>
#include <conio.h>

//put all prime number in an array
//get N prime number

void main() {
	int N, i, j, v=1;
	int a[25];
	printf("Enter the Number: ");
	scanf("%d", &N);
	for(i=2;i<N;i++){    
		for(j=2;j<N;j++){
			if(j%i==0){
				break;
			} else {
				a[i-2] = j;
			}
		}
	}	
}
