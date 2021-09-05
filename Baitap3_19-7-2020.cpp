#include<stdio.h>
#include<string.h>
int main() {
	char n[100];
	int i = 0;
	 printf("Nhap chuoi n: ");
    gets(n);
    printf("Chuoi vua nhap: ");
    puts(n);
	while (n[i] != '\0') {
		i++;
	}
	printf("Do dai cua chuoi do la: %d", i);
	return 0;
}
