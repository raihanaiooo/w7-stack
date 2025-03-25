#include "linked.h"
#include "stack.h"

void Alokasi(address *p, infotype data) { 
    *p = (address)malloc(sizeof(ElmtList)); 
    if (*p != NULL) {
        (*p)->info = data;
        (*p)->next = NULL;
    }   
}

void Dealokasi(address *p) {
    free(*p);
    *p = NULL;
}

bool isEmpty(List L) {
    return (L == NULL);
}

void InsertFirst(List *L, infotype X) {
    address P;
    Alokasi(&P, X); 
    if (P != NULL) {
        P->next = *L;
        SetTop(L, P); 
    }
}

void DeleteFirst(List *L, infotype *X) {
    if (!isEmpty(*L)) {
        address P = *L;
        *X = P->info;
        SetTop(L, P->next);
        Dealokasi(&P);
    }
}
