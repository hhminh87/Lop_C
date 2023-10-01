#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//bai tap 1: Nhap vao mang so nguyen N phan tu và in ra danh sach nguoc
	int N,i,j;
//	int a[N], b[N];
//	printf("\nNhap so nguyen N= ");
//	scanf("%d", &N);
//	for (i=0; i<N; i++)
//		{
//			printf("\nNhap phan tu a[%d]= ", i);
//			scanf("%d", &a[i]);
//		}
//	printf("\nNhap lai mang ");
//	for (i=0; i<N; i++)
//		{
//				printf("\na[%d]= %d", i, a[i]);
//		}
//	printf("\nNhap lai mang nguoc");	
//	
//	for(i=2; i>=0; i=i-1)
//		{
//			printf("\na[%d] =%d", i, a[i]);
//		}
//	
//			
		
		
	//bai tap 2: chuyen doi mang a chua danh sach nguoc so voi ban dau
	int a[N], b[N];
	printf("\nNhap so nguyen N= ");
	scanf("%d", &N);
	//Nhap mang a[N]
	for (i=0; i<N; i++)
		{
			printf("\na[%d]= ",i);
			scanf("%d", &a[i]);
//			printf("\n%d", a[i]);
		}
	
	for (i=0; i<N; i++)
	{
		b[i]=a[i];
		printf("\nb[%d]= %d", i, b[i]);
	}
	for (i=1; i<=N; i++)
		{
			for (j=N; j>=0; j--)
				{
					a[i]=a[j];
				}
			
		}
	printf("\nin lai mang a[N]");
	for (i=0; i<N; i++)
		{
			printf("\na[%d]= %d", i,a[i]);
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
