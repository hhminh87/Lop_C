#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	//Bai tap 1
////	Kiem tra chan le
//int N,i,s;
////	printf("\nNhap So Nguyen N= ");
////	scanf("%d", &N);
////	if (N%2==0){
////		printf(" N la so chan");}
////	else {printf("N= %d là so le", N);
////	}
////	kiem tra chia het cho 2 va 7 
////	if (N%2==0 && N%7==0){
////		printf("\nN= %d la so chia het cho ca 2 va 7", N);}
////	else {
////		if(N%2!=0 ||N%7!=0){
////			printf("\nN= %d la so khong chia het cho 2 va 7", N);
////		
////	}
////	}
//////////kiem tra N co phai so nguyen to khong
////Nhap so nguyen N
////printf("\nNhap so nguyen N= %d");
////scanf("%d", &N);
////int h=0;
////for (i=2; i<N; i++) {if (N%i==0) {
////
////									h=h+1;
////								 }
////					}
////if (h>0) {printf("\nSo N= %d KHONG PHAI la so nguyen to" ,N);
////		 }
////else {printf("\nSo N= %d  la so nguyen to", N);
//	 }
////Bai 3
////Nhap mang so nguyen t[10]- Khai bao mang và nhao tu ban phim
////
////int t[10];
////for (j=0;j<10;j++){
////					printf("\nNhap phan tu t[%d]= ",j);
////					
////					scanf("%d", &t[j]);
////					}
//////Tinh tong cac phan tu trong mang
////s=0;
////for (i=0;i<10;i++){
////s=s+t[i];}
////printf("tong cac phan tu trong mang là s= %d", s);
//// Tính tong cac phan tu trong mang chia het cho 3 và 6
////s=0;
////for (i=0;i<10;i++)
////					{
////						if (t[i]%3==0 && t[i]%6==0)
////													{s=s+t[i];
////													}
////	
////					}	
////printf("\nTong cac phan tu chi het cho ca 3 và 6 là: %d", s);
//	
///////////////////////TINH TONG CÁC SO CHIA HET CHO 3 VÀ 7 TRONG MANG
////s=0;
////for (i=0; i<10; i++)	{if (t[i]%3==0 && t[i]%7==0) {s=s+t[i];
////														
////														
////														}
////						};
////	
////	
////	printf("TONG CAC SO CHIA HET CHO 3 VA 7 TRONG MANG LA: %d",s);
////////////////////////////////////////////////////////LUU CAC SO NGUYEN TO VAO BANG MOI K
////lap bang k
//int z,j;
//int k[10];
//int t[10];
////Nhap so lieu cho bang t
//for (j=0; j<10; j++){
//
//printf("\nNhap gia tri phan tu t[%d] =");
//scanf("%d", &t[j]);
//				}
//int s=0;	
//				}
//for (i=0; i<10, i++) {for (z=2;z<t[i];z++) {if (t[i]%z==0){s=s+1
//													      }
//						if (s<1) {t[i]=k
//								 }
//										   }
//					 }
////////////////////////////////////Luu cac so nguyen to vao mang moi k
//for (i=0; i<10; i++)
//{
//	if (i mod 2 == 0) 
//	{
//		
//	}
//	else 
//}
//
//
//**************************************************BAI 1************************************************************
//***********************NHAP VAO SO N VÀ KIEM TRA XEM CHAN HAY LE***************************************************
// Nhap so N
//int N;
//printf("\nVui long nhap so N= ");
//scanf("%d", &N);
////Kiem tra N chan/le
//if (N%2==0)
//{
//	printf("\nN= %d la so CHAN", N);
//}
//else 
//{
//	printf("\nN= %d la so LE", N);
//}

//********************** NHAP VAO N VA KIEM TRA N CO CHI HET CHO 3 VA 7 KHONG****************************************
// Nhap so N

//int N;
//printf("\nNhap so N=");
//scanf("%d", &N);

////Kiem tra N co chia het cho 3 va 7 khong

//if (N%3==0 && N%7==0)
//{
//	printf("\nSo N= %d chia het cho ca 3 va 7", N);
//}
//if (N%3!=0 ||N%3!=0)
//{ printf("\nSo N= %d khong chia het cho ca 3 va 7", N);
//	
//}
//***********************NHAP VAO N VA KIEM TRA XEM CO PHAI LA SO NGUYEN TO KHONG************************************
//int N,i,j,t,S;
//
//// Nhap so N
//printf ("\nNhap vao N= ");
//scanf("%d", &N);

//Kiem tra so N co phai la so nguyen to khong
// dung vong for cach 1
//printf("%d", N);
//S=0;
//for (i=2; i<N; i++)
//{ if (N%i==0)
//	{
//		S++;
//	}	
//}
//if (S==0)
//{
//	printf("\nSo N= %d la so NGUYEN TO", N);
//}
//else 
//{
//	printf("\nSo N= %d KHONG phai so nguyen to",N);
//}


//dung vong for cach 2 toi uu
//S=0;
//for (i=2;i<(N/2);i++)
//{
//	if (N%i==0)
//	{
//		printf("\nN KHONG phai la so nguyen to");
//		S++;
//		break;
//	}
//}
//if (S==0)
//{
//	printf("\nN la SO NGUYEN TO");
//}

// Dung vong lap while
//i=2;
//S=0;
//while (i<N)
//{
//	if (N%i==0)
//	{
//		printf("\nSo N= %d KHONG PHAI la SO NGUYEN TO",N);
//		S++;
//		break;
//	}
//	i++;
//}
//if (S==0)
//{
//	printf("\nSo N= %d la SO NGUYEN TO", N);
//}

//**********************************************BAI 2**********************************************************
//NHAP 2 SO a va b, TINH TONG CAC SO GIUA A VA B
//int a,b,S,i;
//printf("\nNhap so nguyen a=");
//scanf("%d", &a);
//printf("\nNhap so nguyen b=");
//scanf("%d", &b);
//S=0;
//
//if (a<b)
//{
//	for (i=a+1; i<b; i++)
//	{
//		S=S+i;	
//	}
//printf("\nTong cac so giua a va b la %d",S);
//}
//if (a>b)
//{
//	for (i=b+1; i<a; i++)
//	{
//		S=S+i;	
//	}
//printf("\nTong cac so giua a va b la %d",S);
//}
//if (a==b)
//{printf("\nTong cac so giua a =%d va b =%d la S= %d",a,b,S);
//}

//int a,b,i,j,i1,S;
//
//printf("\nNhap so nguyen a=");
//scanf("%d", &a);
//printf("\nNhap so nguyen b=");
//scanf("%d", &b);
//S=0;
//
//if (a<b) 
//{
//	i=a+1;
//	j=b-1;
//}
//if (a>b)
//{
//	i=b+1;
//	j=a-1;
//}
//
//for (i1=i;i1<=j;i1++)
//{
//	S=S+i1;
//}
//
//if (a==b)
//{
//	S=0;
//}
//printf("%d",S); 
// **************,****************GIAI BANG switch********************************
//int a,b,i,S,x;
//printf("\nNhap so nguyen a=");
//scanf("%d", &a);
//printf("\nNhap so nguyen b=");
//scanf("%d", &b);
//x=a-b;
//S=0;
//if (x>0)
//{
//	x=1;
//}
//else if (x<0)
//		{x=2;
//		}
//	 else
//	  {
//	 	x=3;
//	 }
//switch (x)
//{
//	case 1:
//		for (i=b+1; i<a; i++)
//		{
//			S=S+i;
//		}
//		printf("\nTong cac so giua a va b la: %d", S);
//	break;
//	case 2:
//		for (i=a+1; i<b; i++)
//		{
//			S=S+i;
//		}
//		printf("\n Tong cac so giua a va b laf: %d", S);
//		break;
//	case 3:
//		printf("Tong cac so giua a va b la: %d", S);
//		
//}
//************************************* BAI 3*************************8
//.****************************NHAP MANG SO NGUYEN t[1]****************************
int t[10], k[10];
int S,i,j,H, K,z;
//Nhap Mang t[10] tu ban phim
for (i=0; i<10;i++)
	{
		printf("\nNhap phan tu t[%d]= ", i);
		scanf("%d",&t[i]);
	}
// Tinh tong cac phan tu trong mang t[10]
S=0;
for (i=0; i<10; i++)
	{S=S+t[i];
	}
printf("\nTong cac phan tu trong mang t[10]= %d", S);
// Tinh tong cac phan tu chia het cho 3 va 6
H=0;
for (i=0; i<10; i++)
	{
		if (t[i]%6==0)
		{
			printf("\nPhan tu chia het cho 3 va 6 la t[%d]= %d",i,t[i]);
			H=H+t[i];
		}
	}
printf("\n Tong cac phan tu chi het cho 3 vaf 6 la H= %d", H);
//tinh tong cac phan tu chia het cho 3 va 7
K=0;
for (i=0;i<10;i++)
	{if (t[i]%3==0 &&t[i]%7==0)
		{printf("\nPHAN TU CHI HET CHO CA 3 VA 7 LA t[%d]= %d", i,t[i]);
		K=K+t[i];
		}
	}
printf("\nTONG CAC PHAN TU TRONG MANG CHI AHET CHO CA 3 VA 7 LA H= %d", K);
	
// TIM SO NGUYEN TO TRONG MANG t[10] va luu vao mang k[10]
//tim so nguyen to trong mang
z=0;
for (i=0; i<10; i++)
{
	for (j=2; j<t[i]; j++);
		{if (t[i]%j==0)
			{z=z+1;
			}
	    }
	if (z<1)
		{printf("\nPhan tu trong mang la so nguyen to la t[%d] %d", i, t[i]);
		}
	}
////Luu phan tu la so nguyen to vao mang k[10]
//	if (z==0)
//		{
//			
//		}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}
