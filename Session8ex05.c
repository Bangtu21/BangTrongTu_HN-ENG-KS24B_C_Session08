#include<stdio.h>
int main(){
	int m=3,n=4,sum;
	int number[3][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	for(int i=0; i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0||i==m-1||j==0||j==n-1){
				sum=sum+number[i][j];
			}
		}
	}
	printf("tong cac so o bien la %d", sum);
}
