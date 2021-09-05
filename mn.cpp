#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
 char n[256];
 char x;
 printf("Nhap chuoi: ");
 gets(n);
 puts(n);
 printf("Nhap ky tu can dem: ");
 scanf("%c",&x);
 int dem=0;
 for(int i=0;i<=strlen(n);i++){
 	if(n[i]==x) 
	 dem=dem+1;  
 	}
 printf("So lan xuat hien ky tu %c la: %d ",x,dem);
    return 0;
}
