#include <stdio.h>
#include <conio.h>
#include <string.h>
void sapxep(int n,char ten[][12])
{char a[12];
 int i,j;
 for(i=0;i<n-1;i++)
 for(j=i+1;j<n;j++){
 	if(strcmp(ten[i],ten[j])>0){
	 strcpy(a,ten[i]);
   		strcpy(ten[i],ten[j]);
   			strcpy(ten[j],a);
  }
 }
}
int main(){
 char ten[10][12];
 int n=0,i;
 printf("Moi ban nhap so nguoi trong danh sach: ");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
	{
	  fflush(stdin);
	  printf("\nNhap ten nguoi thu %d: ",i+1);
	  gets(ten[i]);
	}
 sapxep(n,ten);
 printf("\nDanh sach da duoc sap xep theo thu tu A B C ");
 for(i=0;i<n;i++){
 	printf("\nNguoi thu %d la %s ",i+1,ten[i]);
 }
 return 0;
}
