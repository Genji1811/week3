#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
typedef struct //khai bao ngay sinh
{
	int ngay;
	int thang;
	int nam;
}a;
typedef struct //khai bao diem tong ket
{
	float toan;
	float ly;
	float hoa;
	float tong;
}b;
typedef struct //khai bao danh sach thi
{
	char ho_ten[25];
	a ngay_sinh;
	b diem;	
}c;
c ds[30];
float toan, ly, hoa, tong;
int main()
{
	for(int i=1; i<30; i++)
	{
		//nhap ten sinh vien
		printf("nhap du lieu sinh vien thu %d ", i);
		printf("nhap ho ten %c/n", ds[i].ho_ten);
		fflush(stdin);
		gets(ds[i].ho_ten); 
	
		//nhap ngay thang nam sinh 
		printf("/n nhap ngay,thang,nam sinh %c", &ds[i].ngay_sinh.ngay, &ds[i].ngay_sinh.thang, &ds[i].ngay_sinh.nam);
		fflush(stdin);
		scanf("%d - %d - %d",&ds[i].ngay_sinh.ngay, &ds[i].ngay_sinh.thang, &ds[i].ngay_sinh.nam);
		
		//nhap diem cac mon
		printf("/n nhap diem mon toan : %f", ds[i].diem.toan);
		fflush(stdin);
		scanf("%f",&ds[i].diem.toan);
		printf("/n nhap diem mon ly : %f", ds[i].diem.ly);
		fflush(stdin);
		scanf("%f",&ds[i].diem.ly);
		printf("/n nhap diem mon hoa : ", ds[i].diem.hoa);
		fflush(stdin);
		scanf("%f",&ds[i].diem.hoa);
		printf("/n tong diem %f", ds[i].diem.tong=(ds[i].diem.toan + ds[i].diem.ly + ds[i].diem.hoa) );
	}
}
