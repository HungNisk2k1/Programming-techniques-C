#include <stdio.h>
#include<string.h>
int main() {
   char n[50] ;    
   int i = 0;
   int nguyen_am = 0,phu_am=0;            
       printf("Nhap chuoi n: ");
            gets(n);
   while(n[i++] != '\0') {
      if(n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u' )
         nguyen_am++;
      else
         phu_am++;
   }
   
   printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", n, nguyen_am, phu_am);

   return 0;
}

