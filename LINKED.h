#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct {
    int nilai;
} infotype;

typedef struct tElmtList *address;

typedef struct tElmtList {
    infotype info;
    address next;
} ElmtList;

typedef address List;

void CreateList(List *L);
bool isEmpty(List L);
void InsertFirst(List *L, infotype X);
void DeleteFirst(List *L, infotype *X);

#endif