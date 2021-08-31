#include<math.h>
#include<stdio.h>
int main()
{	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	
		int a=n/100;
		int b=(n-(100*a))/10;
		int c=n-100*a-10*b;
		if(a*a*a+b*b*b+c*c*c==n)
		{
			printf("%d La so dac biet",n);
		}else{
			printf("%d Khong phai la so dac biet",n);
		}
		return 0;
	}



