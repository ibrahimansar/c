#include <stdio.h>
#include <conio.h>

int main(){
	int a[10][10], b[10][10], c[10][10];
	
	printf("enter matrix a");
	
	for(int i=0;i<3;i++){
		for(int j=0; j<3;j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("emter matrix b");
	
	for(int i=0;i<3;i++){
		for(int j=0; j<3;j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("matrix c is");
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ", c[i][j]);
		}
	}
	return 0;
}
