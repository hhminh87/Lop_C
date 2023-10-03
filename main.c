#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	typedef struct book_st
		{
			char ten[30], theloai[30];
			int giatien, namsanxuat;
		} book;
	void showMenu();
	void input();	


int main(int argc, char *argv[]) {
	
int choose;
do {
	showMenu ();
	printf("\nchon");
	scanf("%d",&choose);
	switch (choose)
	{
		case 1:{
			printf("\nNhap du lieu quyen sach");
			input();
			break;
		}
		case 2: {
			break;
		}
		case 3:
			{
				break;
			}
		case 4: {
			break;
		}
		case 5: {
			printf("\nThoat");
			break;
		}
		default: {
			printf("\nNhap sai!");
			break;
		}
	}
} while(choose!=5);
	
	
	
	
	
	
	
	
	return 0;
}
	void showMenu()
		{
			printf("\n1- Nhap du lieu cua tung quyen sach.");
			printf("\n2- Sap xep, hien thi thong tin chi tiet cua tung quyen sach theo the loai (Z->A). Thong ke sach theo nam xuat ban..");
			printf("\n3- Tim  quyen sach theo the loai.");
			printf("\n4- Ghi vao tap tin nhi phan book.dat.");
			printf("\n5- Thoat");
		};
	void input(){
		int i;
		book bookList[3];
		for (i=0;i<3;i++) {
			printf("\nNhap du lieu quyen sach thu %d",i+1);
			printf("\nNhap ten quyen sach:");
			fflush(stdin); fflush(stdout);
			gets(bookList[i].ten);
			printf("\nNhap the loai:");
			fflush(stdin); fflush(stdout);
			gets(bookList[i].theloai);
			printf("\nGia tien: ");
			scanf("%d", &bookList[i].giatien);
			printf("\nNam san xuat: ");
			scanf("%d", &bookList[i].namsanxuat);
			
		}
	}
	void timTheLoai();
	printf("\nNhap the loai ban muon tim: ");
	fflush(stdin); fflush(stdout);
	gets(bookList.theloai);
	for (i=0;i<3;i++) {
		if (bookList[i]
	}
