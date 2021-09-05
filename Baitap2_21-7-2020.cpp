#include<stdio.h>
int main(){
  int n;
  do{
    printf("\nNhap vào so nguyen duong n: ");
    scanf("%d", &n);
    if(n < 0)
    {
      printf("\nSo n phai >= 0, vui lòng nhap lai !"); 
    }
  }while(n < 0);
  int kiemtra = 1;
  while(n = n / 10)
  {
    if((n % 10) % 2 == 1)
    {
      kiemtra = 0;
      break;
    }
  }
  
  if(kiemtra == 1)
  {
    printf("La so toan chan!");
  }
  
  else
  {
    printf("Khong phai la so toan chan!");
  }
 
}
