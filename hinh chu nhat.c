#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//tao strucure
typedef struct Hinh_Chu_Nhat
	{float chieudai, chieurong, dientich;
	} hcn;
	//tao mang list gom 5 hinh chu nhat
hcn list[3];

	int i;
	float tong=0;
	for (i=0;i<3; i++)
		{
			printf("\nNhap thong so hnc %d", i+1);
			printf("\nNhap chieu dai= ");
			scanf("%f",&list[i].chieudai);
			printf("\nNhap chieu rong= ");
			scanf("%f",&list[i].chieurong);
		}
	for (i=0;i<3;i++)
		{printf("\nthong so hinh chu nhat %d chieu dai %f chieu rong %f",i+1,list[i].chieudai, list[i].chieurong );
	
		}
	//tinh dien tich hinh chu nhat
	for (i=0;i<3; i++)
		{
			list[i].dientich = list[i].chieudai * list[i].chieurong;
			printf("\ndien tich hinh chu nhat %d= %f",i+1, list[i].dientich);
			tong=tong+list[i].dientich;
		}
	printf("\nTong dien tich cac hinh chu nhat laf: %f", tong);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
