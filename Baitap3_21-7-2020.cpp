#include <stdio.h>
int main()
{
    int n;
    int dem = 0;
    int Min ;
    do{
  		printf("\n Nhap so nguyen duong n = ");
  		scanf("%d", &n);
  	if(n < 0){
   		printf("\n Vui long nhap n >= 0...");
  	}
 		}while(n < 0);
 		Min = n%10;
 		if(n==0)
 		Min = 0;
 		do{
        int t = n % 10;

        if (t == Min)
            dem++;
        if(t<Min)
        Min = t;
    }while(n = n / 10);
    printf("\nSo nho nhat trong so nguyen la: %d",Min);

     printf("\nSo lan xuat hien cua so nho nhat trong so nguyen la: %d",dem);
     return 0;
}
  


