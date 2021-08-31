#include<stdio.h>
#include<string.h>
struct Sinhvien
{
	int maSV;
	char hodem[20];
	char quequan[100];
	int dtoan,dly,dhoa;
}SV;

void sapxep(int n,char ten[][20]){
	char a[20];
 int i,j;
 for(i=0;i<n-1;i++)
 for(j=i+1;j<n;j++){
 	if(strcmp(ten[i],ten[j])>0){
	 strcpy(a,ten[i]);
   		strcpy(ten[i],ten[j]);
   			strcpy(ten[j],a);
  }
 }
}
int main()
{	              
	int i,n;
	char ten[20][20];
    FILE *fo = fopen("BaiTapLon.xls", "w+");
	printf("\nMoi ban nhap so sinh vien: ");
	scanf("%d",&n);
	struct Sinhvien SV[n];
	for (i=0;i<n;i++)
	{     
		printf("\nNhap thong tin sinh vien: %d",i+1);
		printf("\nNhap ma sinh vien: ");
		scanf("%d",&SV[i].maSV);
		fflush(stdin);
		printf("\nNhap ho dem: ");
		gets(SV[i].hodem);
		fflush(stdin);
		printf("\nNhap ten sinh vien: ");
		gets(ten[i]);
		fflush(stdin);	
		printf("\nNhap que quan: ");
		gets(SV[i].quequan);
		printf("\nNhap diem toan: ");
		scanf("%d",&SV[i].dtoan);
		printf("\nNhap diem ly: ");
		scanf("%d",&SV[i].dly);
		printf("\nNhap diem hoa: ");
		scanf("%d",&SV[i].dhoa);
		
	}
	fprintf(fo,"Danh sach sinh vien vua nhap: ");

	for(i=0;i<n;i++){
		fprintf(fo,"\nSinh vien %d: ",i+1);
		fprintf(fo,"\nMa sinh vien: %d",SV[i].maSV);
		fprintf(fo,"\nHo va ten: %s %s\t\t\tQue quan: %s",SV[i].hodem,ten[i],SV[i].quequan);
		fprintf(fo,"\nSTT|  Danh sach mon     |Diem| ");
 		fprintf(fo,"\n 1   |     Mon toan   | %d  |",SV[i].dtoan);
 		fprintf(fo,"\n 2   |     Mon ly     | %d  |",SV[i].dly);
 		fprintf(fo,"\n 3   |     Mon hoa    | %d  |",SV[i].dhoa);
 		int tongdiem =0;
		tongdiem=(SV[i].dtoan+SV[i].dly+SV[i].dhoa);
 		fprintf(fo,"\nDiem tong: %d",tongdiem);
 		fprintf(fo," ");
 		printf("---------------");
 	} 
 		fprintf(fo,"\nSap xep ten sinh vien theo thu tu tang dan: ");
	  for(i=0;i<n;i++){
	  	sapxep(n,ten);
		fprintf(fo,"\nSTT %d: \nTen sinh vien: %s",i+1,ten[i] );
	}  
    fclose(fo);
	return 0;
}
