#include<stdio.h>
int main(){
	int i,j ,n ,row ,col ;
	int arr[2][3] ={{1,2,3},
	               { 4,5,6}};
	printf("moi nhap vao vi tri ban muon thay the trong mang :");
	scanf("%d %d",&row,&col);
	printf("moi nhap vao gia tri muon thay the : ");
	scanf("%d",&n);
	 arr[row][col]=n ;
	 for(i=0;i<2;i++){
	 	for(j=0;j<3;j++){
	 		printf("%2d",arr[i][j]); 
		 } 
	printf("\n");  }  
	
	return 0; 
} 
