#include <stdio.h>


int main(){
 	int n,Sum=0;
 	do{
  		printf("\n Nhap so nguyen duong n = ");
  		scanf("%d", &n);
  	if(n < 0){
   		printf("\n Vui long nhap n >= 0...");
  	}
 		}while(n < 0);
 while (n != 0)
	{
		int x = n % 10;
		Sum =  x;
		n = n / 10;
	}
 
 printf("\nChu cai dau tien cua so nguyen la:  %d", Sum);
 return 0;
}
