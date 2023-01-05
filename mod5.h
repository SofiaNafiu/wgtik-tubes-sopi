#ifndef MOD5_H_INCLUDED
#define MOD5_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nil NULL

typedef int infotype;
typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct List{
    adr first;
};

void Create_List_1301213112(List &L);
adr newElement_1301213112(infotype x);
void insertLast_1301213112(List &L, adr p);
void show_1301213112(List L);
float vocalPersentage_1301213112(List L);
void showLastK_1301213112(List L, int k);
int selectMenu_1301213112();


#endif // MOD5_H_INCLUDED
