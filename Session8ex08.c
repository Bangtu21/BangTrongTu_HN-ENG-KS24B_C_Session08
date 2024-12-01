#include<stdio.h>
int main(){
	int n[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int sum=0, a=2;
	for(int i=0;i<3;i++){
		for(int j=a+1;j>a;j--){
			printf("[%d]", n[i][a]);
			sum=sum+n[i][a];
		}
		a--;
	}
	printf("\nTong cac so tren duong cheo phu chua mang la %d",sum);
}
