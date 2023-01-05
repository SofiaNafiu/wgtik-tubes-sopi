#include <iostream>
#include "mod5.h"

using namespace std;

int main()
{
    int NUM = 0, pilihan = 0, x;
    adr p;
    List L;
    string status;

    Create_List_1301213112(L);
    pilihan = selectMenu_1301213112();
    while (pilihan != 0){
        switch(pilihan)
        {
        case 1:
            cout << "Jumlah data yang akan ditambahkan : ";
            cin >> NUM;
            for (int i=0;i<NUM;i++){
                cout << "Masukkan data baru : ";
                cin >> x;
                p = newElement_1301213112(x);
                insertLast_1301213112(L, p);
            }
            cout << "Kembali ke menu utama? (Y/N) : ";
            cin >> status;
            cout << endl;
            if (status == "N"){
                pilihan = 0;
            } else if (status == "Y"){
                pilihan = selectMenu_1301213112();
            }
            break;

        case 2:
            show_1301213112(L);
            cout << "Kembali ke menu utama? (Y/N) : ";
            cin >> status;
            cout << endl;
            if (status == "N"){
                pilihan = 0;
            } else if (status == "Y"){
                pilihan = selectMenu_1301213112();
            }
            break;

        case 3:
            float persen;
            persen = vocalPersentage_1301213112(L);
            cout << persen<<"%" << endl;
            if (status == "N"){
                pilihan = 0;
            } else if (status == "Y"){
                pilihan = selectMenu_1301213112();
            }
            break;

        case 4:
            int y;
            cout << "Masukkan angka : ";
            cin >> y;
            showLastK_1301213112(L, y);
            if (status == "N"){
            pilihan = 0;
            } else if (status == "Y"){
                pilihan = selectMenu_1301213112();
            }
            break;

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;


    return 0;
        }
    }
}
