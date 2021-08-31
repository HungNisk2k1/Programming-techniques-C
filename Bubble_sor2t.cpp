#include<stdio.h>
int a[100],n,j,i;

void nhap( ) {
	

	printf("nhap so phan tu trong mang n = " );scanf("%d",&n);
    for (int i = 0; i < n; i++) {
    	
		printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}

void xuat(int a[],int n){
    for (int i = 0; i < n; i++){
	printf("%d ",a[i]);
}
}
void swap(int &x,int &y){
printf("\nDoi cho %d  voi %d ",x,y);

	int temp=x;
	x=y;
	y=temp;
	printf(" [ Mang sau khi doi cho -(  ");
xuat(a,n);printf("  ) ]");
	
}
void Bubble_Sort(int a[],int n){
printf("\nMang sap xep noi bot la: ");
	for(int i=0;i<n-1;i++)
	for (int j=n-1;j>i;j--)
	if (a[j]<a[j-1])
	
	swap(a[j-1],a[j]);
	printf("\nKet qua sau khi sap xep:");xuat(a,n);
	
}


int main(){
    nhap();
    printf( "\nMang vua nhap la : " );
    xuat(a,n);
	 
    Bubble_Sort(a,n);
    
   return 0;
   
    
}

