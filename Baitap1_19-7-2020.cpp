#include<stdio.h>
#include<string.h>
int main()
{
            char n[50];
            printf("Nhap chuoi n: ");
            gets(n);
            
            for(int i=strlen(n)-1; i>=0; i--)
            {
                        printf("%c", n[i]);
            }
           
            return 0;
}
