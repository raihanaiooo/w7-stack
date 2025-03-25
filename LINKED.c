#include "linked.h"
#include "stack.h"

bool isEmpty(List L)
{
    return (L == NULL);
}

void InsertFirst(List *L, infotype X)
{
    address P = (address)malloc(sizeof(ElmtList));
    if (P != NULL) {
        P->info = X;
        P->next = *L;
        SetTop(L, P);  // Menggunakan SetTop untuk memperbarui TOP
    }
}

void DeleteFirst(List *L, infotype *X)
{
    if (!isEmpty(*L)) {
        address P = *L;
        *X = P->info;
        SetTop(L, P->next); 
        free(P);
    }
}
