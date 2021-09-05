#include<stdio.h>
#include<string.h>
int main(){
 char ten[10][12];
 int n,i;
 printf("Moi ban nhap so nguoi trong danh sach: ");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
	{
	  fflush(stdin);
	  printf("\nNhap ten nguoi thu %d: ",i+1);
	  gets(ten[i]);
	}
	printf("Danh sach vua nhap: ");
	for(i=0;i<n;i++){
 	printf("\nNguoi thu %d la %s ",i+1,ten[i]);
 }
 int max = strlen(ten[0]);
 for(int i =0;i<n;i++){
 	if(strlen(ten[i])>max)
 	max = strlen(ten[i]);
 	else max = max;
 	}
 	printf("\nPhan tu dai nhat co %d ky tu",max);
 	int min = strlen(ten[0]);
 for(int i =0;i<n;i++){
 	if(strlen(ten[i])<min){
 	min = strlen(ten[i]);
 	}
 	else if(strlen(ten[i])<min){
	 min = min;
	 }
 	
 	}
 	printf("\nPhan tu ngan nhat co %d ky tu",min);
 	printf("\nPhan tu ngan nhat  %s ",ten[i]);
 return 0;
 }
