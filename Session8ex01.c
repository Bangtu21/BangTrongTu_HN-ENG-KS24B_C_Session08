#include<stdio.h>
int main(){
	int n[3][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	printf("Gia tri cac phan tu trong mang 2 chieu la: \n");
	for(int i = 2; i>=0;i--){
		for (int j = 3; j>=0;j--){
			printf("In ra cac phan tu tu cuoi den dau la \n");
			printf("number[%d][%d]=[%d]\n", i, j, n[i][j]);
		}
	}		
}
