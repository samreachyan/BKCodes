#include <stdio.h>
#include <string.h>

struct SinhVien
{
	int MSSV;
	char HoTen[30];
	float DiemTB;
};


void NhapSV(SinhVien sv)
{
	printf("Nhap ma so sinh vien: ");
	scanf("%d",&sv.MSSV);
	printf("Nhap diem TB cua sinh vien: ");
	scanf("%f",&sv.DiemTB);
	printf("Nhap ho ten sinh vien: ");
	// fflush(stdin);
	// gets(sv.HoTen);
	scanf("%s",sv.HoTen);
}




void XuatSV(SinhVien sv)
{
	printf("\nMSSV: %d",sv.MSSV);
	printf("\nHo va ten: %s", sv.HoTen);
	printf("\nDiem TB: %.2f",sv.DiemTB);
}

struct Node
{
	SinhVien Data;
	Node *Next;
};




struct List
{
	Node *Head;
	Node *Tail;
};




void CreateList(List &l)
{
	l.Head=l.Tail=NULL;
}




Node* CreateNode(SinhVien sv)
{
	Node *p = new Node;
	p->Data = sv;
	p->Next = NULL;
	return p;
}



void AddHead(List &l, SinhVien sv)
{
	Node *p = CreateNode(sv);
	if(l.Head==NULL)
		l.Head=l.Tail=p;
	p->Next=l.Head;
	l.Head=p;
}

void XemList(List &l)
{
	Node *p = l.Head;
	while(p!=NULL)
	{
		XuatSV(p->Data);
		printf("\n");
		p=p->Next;
	}
}

// not working yet with input value
int main() {
	List l;
	CreateList(l);
	SinhVien sv1;
	NhapSV(sv1);
	// NhapSV(sv2);
	// NhapSV(sv3);
	// AddHead(l,sv3);
	// AddHead(l,sv2);
	AddHead(l,sv1);
	XuatSV(sv1);
	// XemList(l);
	getchar();
}