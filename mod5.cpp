#include "mod5.h"

void Create_List_1301213112(List &L){
    first(L) = nil;
}

adr newElement_1301213112(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = nil;
    return P;
}

void insertLast_1301213112(List &L, adr p)
{
    if (first(L) == nil){
        first(L)=p;
    } else {
        adr Q = first(L);
        while (next(Q) != nil) {
            Q = next(Q);
        }
        next(Q) = p;
    }
}

void show_1301213112(List L){
    if (first(L) != nil) {
        adr p = first(L);
        while (p != nil) {
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    } else {
        cout << "List Kosong" << endl;
    }
}

float vocalPersentage_1301213112(List L){
    adr p = first(L);
    float vocal = 0, length = 0;

    while (p != nil){
        if (info(p) == 'a' || info(p) == 'i' || info(p) == 'u' || info(p) == 'e' || info(p) == 'o' || info(p) == 'A' || info(p) == 'I' || info(p) == 'U' || info(p) == 'E' || info(p) == 'O'){
            vocal++;
        }
        p = next(p);
        length++;
    }

    return ((vocal/length)*100);
}

void showLastK_1301213112(List L, int k){
    adr p = first(L);
    int l = 0, i=1, n;

    while (p != nil){
        p = next(p);
        l++;
    }

    n = (l-k) + 1;

    p = first(L);
    while (p != nil && i < n){
        p = next(p);
        i++;
    }

    cout << info(p) << endl;
}

int selectMenu_1301213112(){
    cout << "===== MENU =====" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan nilai terbesar" << endl;
    cout << "4. Menampilkan nilai tengah" << endl;
    cout << "0. Exit" << endl;
    cout << "Masukkan menu : ";

    int input = 0;
    cin >> input;

    return input;
}
