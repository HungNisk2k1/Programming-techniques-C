#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n;
	int chusole=0;
	printf("Moi ban nhap n : ");
	scanf("%d",&n);
	while (n != 0) {
        int temp = n % 10;
        if (temp % 2 == 1)
            chusole++;
        n /= 10;
    }
    printf("Chu so le la: %d",chusole);
	return 0;
}
