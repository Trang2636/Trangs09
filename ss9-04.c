
#include<stdio.h>
int main(){
	int a[100];
	int n,position ;
	printf("1.Nhap so \n2.In mang\n3.Them phan tu\n4.Sua phan tu\n5.Xoa phan tu\n6.Thoat\n");
	do{
	int choice;
	printf("Moi ban nhap lua chon:");
	scanf("%d",&choice);
	if(choice==1){	
    	printf("Nhap vao so luong phan tu :");
    	scanf("%d",&n);
    	for(int i=0;i<n;i++){
			printf("Nhap phan tu thu %d :",i+1);
			scanf("%d",&a[i]);
		}
	}
	else if(choice==2){	
    	printf("In mang :");
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");	
	}
	else if(choice==3){
		printf("Nhap vao vi tri muon them:");										
		scanf("%d",&position);
		if(position==0){
			position=1;
		}
		if(position<1||position>n+1){
			printf("khong hop le\n");	
			continue;
		}	
		printf("Nhap gia tri cho phan tu muon them :");
		int value;
		scanf("%d",&value);
		for(int i=n;i>=position;i--){
			a[i]=a[i-1];
		}
		a[position-1]=value;
		n+=1;
	}
	else if(choice==4){
		printf("Nhap vao vi tri muon sua (1-%d) :",n);
		int pos_fix;										
		scanf("%d",&pos_fix);
		if(pos_fix<1||pos_fix>n){
			printf("Vi tri khong hop le!\n");
			continue;
		}	
		printf("Nhap gia tri muon sua :");
		int value_fix;
		scanf("%d",&value_fix);
		for(int i=0;i<n;i++){
			if(i==pos_fix-1){
				a[i]=value_fix;
			}
		}
	}
	else if(choice==5){
		printf("Nhap vao vi tri muon xoa:");
		int pos_clear;										
		scanf("%d",&pos_clear);
		if(pos_clear<1||pos_clear>n){
			printf("Vi tri khong hop le !\n");
			continue;
		}	
		for(int i=0;i<n;i++){
			if(i>=pos_clear-1){
				a[i]=a[i+1];
			}
		}
		n-=1;
	}
	else {
		printf("Bye");
	    break;
	}	
    }while(true);
}