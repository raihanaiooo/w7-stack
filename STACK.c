/* File        : stack.cpp */
/* Deskripsi   : Body ADT stack yang diimplementasikan dgn linked list */
/* Dibuat oleh : Ade Chandra Nugraha*/

#include "stack.h"

/**** Perubahan nilai komponen struktur ****/
void SetTop (Stack *S, Stack NewTop )
/* Memberi Nilai TOP yang baru dengan NewTop */
{
	*S = NewTop;
}

/*    PROTO TYPE    */
/**** Konstruktor/Kreator ****/
void CreateEmpty (Stack *S)
/* IS : S sembarang */
/* FS : Membuat sebuah stack S yang kosong */
/* Ciri stack kosong : TOP bernilai NULL */
{
	*S = NULL;
}

/**** Predikat untuk test keadaan KOLEKSI ****/
bool IsEmpty (Stack S)
/* Mengirim true jika Stack Kosong */
{
	return (isEmpty(S));
}

/**** Menambahkan sebuah elemen ke Stack ****/
void Push (Stack *S, infotype X)
/* Menambahkan X sebagai elemen stack S */
/* IS : S mungkin kosong */
/* FS : X menjadi TOP yang baru */
{
	InsertFirst(S, X);  // nama modul disesuaikan dengan pseudocode linked list pribadi
}

/**** Menghapus sebuah elemen Stack ****/
void Pop (Stack *S, infotype *X)
/* Menghapus X dari Stack S */
/* IS : S tidak mungkin kosong */
/* FS : X adalah nilai elemen TOP yang lama */
{
	DeleteFirst(S, X); // nama modul disesuaikan dengan pseudocode linked list pribadi
}

void KonversiBiner(int desimal){
	Stack S;
	infotype data;
	CreateEmpty(&S);
	
	if(desimal == 0){
		printf("Hasil biner: 0\n");
		return;
	}

	while (desimal > 0)
	{
		data.nilai = desimal % 2;
		Push(&S, data);
		desimal /= 2;
	}
	printf("Hasil konversi biner: ");
    
    while (!IsEmpty(S)) {
        Pop(&S, &data);
        printf("%d", data.nilai);
    }
    
    printf("\n");
	
}