#ifndef PORSENIF_H_INCLUDED
#define PORSENIF_H_INCLUDED

#include <iostream>

#define infoAcara(a) (a)->infoAcara
#define infoPeserta(c) (c)->infoPeserta
#define nextAcara(a) (a)->nextAcara
#define firstPeserta(a) (a)->firstPeserta
#define nextPeserta(c) (c)->nextPeserta
#define firstAcara(porsenif) ((porsenif).firstAcara)
#define lastAcara(porsenif) ((porsenif).lastAcara)
#define nil NULL

using namespace std;

typedef struct elm_acara *adr_acara;
typedef struct elm_peserta *adr_peserta;

struct acara {
    string namaAcara;
    string venue;
    int biayaPendaftaran;
    string tanggalPelaksanaan;
    int hadiah;
    int maxPeserta;
};
typedef acara infotypeAcara;

struct peserta{
    string namaKetua;
    string nimKetua;
    string kelas;
    string namaTim;
    int jmlAnggota;
};
typedef peserta infotypePeserta;

struct elm_acara{
    adr_acara nextAcara;
    infotypeAcara infoAcara;
    adr_peserta firstPeserta;
};

struct elm_peserta{
    adr_peserta nextPeserta;
    infotypePeserta infoPeserta;
};

struct porsenif{
    adr_acara firstAcara;
    adr_acara lastAcara;

};

void createList(porsenif &P);
void newElm_acara(infotypeAcara acara, adr_acara &a);
void newElm_peserta(infotypePeserta peserta, adr_peserta &c);
void insertAcara(porsenif &P, adr_acara a);
void insertPeserta(porsenif &P, adr_acara a, adr_peserta c);
void showAcara(porsenif P);
void showPeserta(porsenif P, string namaAcara);

infotypeAcara Acara(string namaAcara, string venue, int biayaPendaftaran, string tanggalPelaksanaan, int hadiah, int maxPeserta);
infotypePeserta Peserta(string namaKetua, string nimKetua, string kelas, string namaTim, int jlhAnggota);

//find acara
adr_acara searchAcara(porsenif P, string namaAcara);

//find peserta
adr_peserta searchPeserta(porsenif P, string namaAcara, string namaKetua);

//delete Acara
void deleteFirst_acara(porsenif &P, adr_acara a);
void deleteLast_acara(porsenif &P, adr_acara a);
void deleteAfter_acara(porsenif &P, adr_acara prec, adr_acara a);
void deleteAcara(porsenif &P, string namaAcara);

//delete Peserta
void deleteFirst_peserta(porsenif &P, adr_acara a, adr_peserta c);
void deleteLast_peserta(porsenif &P, adr_acara a, adr_peserta c);
void deleteAfter_peserta(porsenif &P, adr_acara a, adr_peserta prec, adr_peserta c);
void deletePeserta(porsenif &P,string namaAcara, string namaKetua);

//menghapus dan membuat relasi
void Pindahrelasi(porsenif &P, string acaraLama, string acaraBaru);

//2 spesifikasi wajib
adr_peserta searchChild_Allparent(porsenif P, string namaKetua);
void showSomeDataAll(porsenif P);




#endif // PORSENIF_H_INCLUDED
