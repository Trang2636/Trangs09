#include<stdio.h>

int main(){
	int run=0;
	int choice,i,j,length,min,max,position,n,addNum;
	int chan,snt;
	int arr[9000];
	int check=0;
	int same_number=0;
	int same_number_check=0;

	
	while(run==0){
		
		printf(" MENU\n\n 1.Nhap so phan tu can nhap va cac gia tri cua phan tu \n 2.In ra gia tri cac phan tu \n 3.In ra gia tri cac phan tu chan va tinh tong\n 4.In gia tri lon nhat va nho nhat\n 5.In ra cac so nguyen to va tinh tong\n 6.Nhap vao 1 so va thong ke trong mang c? bao nhieu phan tu do\n 7.Them 1 phan tu vao vi tri chi dinh\n 8.Thoat\n lua chon cua ban: ");
		scanf("%d",&choice);
		
		if (choice==1){
			printf("\nmoi nhap so phan tu muon nhap: ");
	        scanf("%d", &length);
	 
	 
	
	for(i=0;i<length;i++){
		printf("moi nhap phan tu arr[%d]: ",i);
		scanf("%d", &arr[i]);
	
			
		}check=1;
	}
	if (choice==8){
	printf("\n thoat chuong trinh.");
		return 1;
	if (check!=1){
		printf(" chua nhap mang (1)\n");
		
	}else if(choice==2){
		for(i=0;i<length;i++){
			printf("arr[%d]=%d \n",i,arr[i]);
		}
	}else if(choice==3){
		
		
		for(i=0;i<length;i++){
			if(arr[i]%2==0){
				printf("arr[%d] la so chan\n",i);
				chan+=arr[i];
			}
		}
		printf("tong cua cac phan tu so chan la: %d",chan);
		
	}else if(choice==4){
		min=arr[0];
			for(i=0;i<length;i++){
				if (arr[i]>max){
					max=arr[i];
				}else if(arr[i]<min){
					min=arr[i];
				}
					
			}printf("\n gia tri lon nhat la: %d\n",max);
			printf("gia tri nho nhat la: %d",min);
			
	}else if(choice==5){
		for(i=0;i<length;i++){
			if(arr[i]==3 || arr[i]==7 || arr[i]==5 || arr[i]==2 || arr[i]>1 && arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%4!=0 && arr[i]%5!=0 && arr[i]%6!=0 && arr[i]%7!=0 && arr[i]%9!=0 && arr[i]%8!=0){
					printf("arr[%d]=%d la so nguyen to\n",i,arr[i]);
			snt += arr[i];
			}
		
			
		}printf("tong cua cac so nguyen to la: %d\n",snt);
		
		
		
		
	}else if(choice==6){
		printf("\nmoi nhap so muon kiem tra: ");
		scanf("%d", &same_number);
		for(i=0;i<length;i++){
			if(arr[i]==same_number){
				same_number_check++;
			}
		}printf("trong mang co %d phan tu giong so muon kiem tra\n",same_number_check);
		
	}else if(choice==7){
		printf("moi nhap phan tu muon them : ");
		scanf("%d",&addNum);
		printf("moi nhap vi tri muon them  (arr[]): ");
		scanf("%d", &position);
		
		if (position>length || position<0){
			printf("vi tri khong hop le!");
		}else{
			n=position;
		
				for(i=length;i>position;i--){
					
					arr[i]=arr[i-1];
				}
			arr[n]=new_num;
			length++;
		}
		
	}
	
		
		
	}
			
		
	}

   return 0;
}

