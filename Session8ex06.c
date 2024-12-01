#include<stdio.h>
int main(){
	int n[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int a=0, sum=0;
	for (int i=0;i<3;i++){
		for(int j=a; j<a+1;j++){
			printf("[%d]", n[i][j]);
			sum=sum+n[i][j];
		}
		a++;
	}
	printf("\nTong cac so tren duong cheo chinh cua mang la: %d", sum);
}
