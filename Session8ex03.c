#include<stdio.h>
int main(){
	int number;
	printf("Hay nhap vao mot so nguyen: ");
	scanf("%d", &number);
	int n[number][number];
	for(int i=0;i<number;i++){
		for(int j=0;j<number;j++){
			n[i][j]=number;
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
}
