#include <stdio.h>
int main()
{
    int n;
    int dem = 0;
    int Max = 0;
    do{
  		printf("\n Nhap so nguyen duong n = ");
  		scanf("%d", &n);
  	if(n < 0){
   		printf("\n Vui long nhap n >= 0...");
  	}
 		}while(n < 0);
    while (n > 0)
    {
        int t = n % 10;

        if (t > Max){
            Max = t;
            }
		if(t==Max){
		dem++;
		}
        n = n / 10;
    }
    printf("\nSo lon nhat trong so nguyen la: %d",Max);

     printf("\nSo lan xuat hien cua lon nhat trong so nguyen la: %d",dem);
     return 0;
}
  


