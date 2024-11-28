#include<stdio.h>
int main(){
	int n[3][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int number, count=0;
	printf("Hay nhap mot phan tu: ");
	scanf("%d",&number);
	for(int i= 0; i<3;i++){
		for(int j=0; i<4;j++){
			if(number==n[i][j]){
				printf("Vi tri phan tu trong mang la n[%d][%d]\n", i,j);
				count++;
			}
		}
	}
	if(count==0){
		printf("Phan tu khong ton tai trong mang");
	}
}
