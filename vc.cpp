#include<conio.h>
#include<stdio.h>
int main(){
    int n;
    int sotachra;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;){
        sotachra = n % 10;
        n /= 10;
        if(sotachra%2==0){
        	s += sotachra;
    } 
	}   
    printf("Tong cac so chan trong so nguyen la:  %d",s);
}
