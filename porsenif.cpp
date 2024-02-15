#include "porsenif.h"

void createList(porsenif &P)
{
    firstAcara(P) = nil;
    lastAcara(P) = nil;
}

void newElm_acara(infotypeAcara acara, adr_acara &a)
{
    a = new elm_acara;
    infoAcara(a) = acara;
    nextAcara(a) = nil;
    firstPeserta(a) = nil;
}
void newElm_peserta(infotypePeserta peserta, adr_peserta &c)
{
    c = new elm_peserta;
    infoPeserta(c) = peserta;
    nextPeserta(c) = nil;
}
infotypeAcara Acara(string namaAcara, string venue, int biayaPendaftaran, string tanggalPelaksanaan, int hadiah, int maxPeserta)
{
    infotypeAcara acara;
    acara.namaAcara = namaAcara;
    acara.venue = venue;
    acara.biayaPendaftaran = biayaPendaftaran;
    acara.tanggalPelaksanaan = tanggalPelaksanaan;
    acara.hadiah = hadiah;
    acara.maxPeserta = maxPeserta;
    return acara;
}
infotypePeserta Peserta(string namaKetua, string nimKetua, string kelas, string namaTim, int jlhAnggota)
{
    infotypePeserta peserta;
    peserta.namaKetua = namaKetua;
    peserta.nimKetua = nimKetua;
    peserta.kelas = kelas;
    peserta.namaTim = namaTim;
    peserta.jmlAnggota = jlhAnggota;
    return peserta;
}
void insertAcara(porsenif &P, adr_acara a)
{
    if (firstAcara(P) == nil){
        firstAcara(P) = a;
        lastAcara(P) = a;
    }else{
        nextAcara(lastAcara(P)) = a;
        lastAcara(P) = a;
    }
}
void insertPeserta(porsenif &P, adr_acara a, adr_peserta c)
{
    if (a == nil){
        cout << "Tidak Dapat Memasukan Peserta" << endl;
        cout << "Acara Tidak Tersedia"<<endl;
    }else{
        if (firstPeserta(a) == nil){
            firstPeserta(a) = c;

        }else{
            adr_peserta p = firstPeserta(a);
            while (nextPeserta(p) != nil){
                p = nextPeserta(p);
            }
            nextPeserta(p) = c;
        }
    }

}
void showAcara(porsenif P){

    if (firstAcara(P) == nil){
        cout << "TIDAK ADA ACARA"<<endl;
    }else{
        int i = 1;
        adr_acara p = firstAcara(P);

        cout << "Daftar Acara :" << endl;
        cout << "================================================"<< endl;
        while (p != nil){
            cout << "Acara ke-" << i << endl;
            cout << "Nama Acara : " << infoAcara(p).namaAcara<< endl;
            cout << "Venue : " << infoAcara(p).venue << endl;
            cout << "Biaya Pendaftaran : Rp" << infoAcara(p).biayaPendaftaran << endl;
            cout << "Tanggal Pelaksanaan : " << infoAcara(p).tanggalPelaksanaan << endl;
            cout << "Hadiah : RP" << infoAcara(p).hadiah << endl;
            cout << "Max Peserta : " << infoAcara(p).maxPeserta << endl;

            i++;
            p = nextAcara(p);

        }
        cout << "================================================"<< endl;
    }

    cout << endl;
}

void showPeserta(porsenif P, string namaAcara)
{
    adr_acara p = searchAcara(P, namaAcara);
    if (p == nil){
        cout << "ACARA "<< namaAcara << " TIDAK TERSEDIA" << endl;
    }else if (firstPeserta(p) == nil){
        cout << "Acara "<< namaAcara << " Tidak Mempunyai Peserta" << endl;
    }else{
        adr_peserta c = firstPeserta(p);

        cout << "====================================================================="<<endl;
        cout << "Berikut Adalah data Peserta yang mengikuti Acara "<< namaAcara << " : "<<endl;
        cout << "====================================================================="<<endl;
        int i = 1;
        while (c != nil){

            cout << "Peserta Ke-" << i << endl;
            cout << "Nama Ketua Tim : " << infoPeserta(c).namaKetua << endl;
            cout << "NIM Ketua Tim : " << infoPeserta(c).nimKetua << endl;
            cout << "Kelas : " << infoPeserta(c).kelas << endl;
            cout << "Nama Tim : " << infoPeserta(c).namaTim << endl;
            cout << "Jumlah Anggota : "<< infoPeserta(c).jmlAnggota << endl;

            i++;
            c = nextPeserta(c);
            cout << endl;
        }
        cout << "====================================================================="<<endl;
    }

    cout << endl;
}

adr_acara searchAcara(porsenif P, string namaAcara)
{
    adr_acara p = firstAcara(P);
    while (p != nil){
        if (infoAcara(p).namaAcara == namaAcara){
            return p;
        }
        p = nextAcara(p);
    }
    return nil;
}

adr_peserta searchPeserta(porsenif P, string namaAcara, string namaTim)
{
    adr_acara a = searchAcara(P, namaAcara);
    adr_peserta c = firstPeserta(a);
    while (c != nil){
        if (infoPeserta(c).namaTim == namaTim){
            return c;
        }
        c = nextPeserta(c);
    }

    return nil;
}


void deleteFirst_acara(porsenif &P, adr_acara a)
{
    a = firstAcara(P);
    if (nextAcara(firstAcara(P)) == nil){
        firstAcara(P) = nil;
    }else{
        firstAcara(P) = nextAcara(a);
        a = nil;
    }
}

void deleteLast_acara(porsenif &P, adr_acara a)
{
    a = firstAcara(P);
    if ( nextAcara(firstAcara(P)) == nil) {
        firstAcara(P) = nil;
    }else{
        adr_acara q = firstAcara(P);
        while (nextAcara(q) != lastAcara(P)){
            q = nextAcara(q);
        }
        lastAcara(P) = q;
        q = nextAcara(q);
        nextAcara(lastAcara(P)) = nil;
    }
}

void deleteAfter_acara(porsenif &P, adr_acara prec, adr_acara a)
{
    nextAcara(prec) = nextAcara(a);
    nextAcara(a) = nil;
}

void deleteAcara(porsenif &P, string namaAcara)
{
    adr_acara a = searchAcara(P, namaAcara);
    if (a == firstAcara(P)){
        deleteFirst_acara(P, a);
    }else if(a == lastAcara(P)){
        deleteLast_acara(P, a);
    }else{
        adr_acara q = firstAcara(P);
        while (nextAcara(q) != a){
            q = nextAcara(q);
        }
        deleteAfter_acara(P, q, a);
    }
}

void deleteFirst_peserta(porsenif &P, adr_acara a, adr_peserta c)
{
    c = firstPeserta(a);
    if ( nextPeserta(firstPeserta(a)) == nil){
        firstPeserta(a) = nil;
    }else{
        firstPeserta(a) = nextPeserta(c);
        nextPeserta(c) = nil;
    }
}
void deleteLast_peserta(porsenif &P, adr_acara a, adr_peserta c)
{
    c = firstPeserta(a);
    if ( nextPeserta(firstPeserta(a)) == nil){
        firstPeserta(a) = nil;

    }else{
        while (nextPeserta(c) != nil){
            c = nextPeserta(c);
        }
        c = nil;
    }
}
void deleteAfter_peserta(porsenif &P, adr_acara a, adr_peserta prec, adr_peserta c)
{
    nextPeserta(prec) = nextPeserta(c);
    nextPeserta(c) = nil;
}

void deletePeserta(porsenif &P, string namaAcara, string namaKetua)
{
    adr_acara a = searchAcara(P, namaAcara);
    adr_peserta c = firstPeserta(a);
    while (c != nil){
        if (infoPeserta(c).namaKetua == namaKetua){
            if (c == firstPeserta(a)){
                deleteFirst_peserta(P, a, c);
            }if (nextPeserta(c) == nil){
                deleteLast_peserta(P, a, c);
            }else{
                adr_peserta q = firstPeserta(a);
                while (nextPeserta(q) != c){
                    c = nextPeserta(q);
                }
                deleteAfter_peserta(P, a, q, c);
            }
        }
        c = nextPeserta(c);
    }
}

void Pindahrelasi(porsenif &P, string acaraLama, string acaraBaru)
{
    adr_acara a = searchAcara(P, acaraLama);
    adr_acara b = searchAcara(P, acaraBaru);

    firstPeserta(b) = firstPeserta(a);
    firstPeserta(a) = nil;

}


//2 spesifikasi wajib
adr_peserta searchChild_Allparent(porsenif P, string namaKetua)
{
    adr_acara a = firstAcara(P);
    adr_peserta c;
    while (a != nil){
        c = firstPeserta(a);
        while (c != nil){
                if(infoPeserta(c).namaKetua == namaKetua){
                    cout << "Nama Ketua di temukan pada acara "<< infoAcara(a).namaAcara<< endl;
                    cout << "Nama Ketua Tim : "<< infoPeserta(c).namaKetua << endl;
                    cout << "NIM Ketua Tim : " << infoPeserta(c).nimKetua << endl;
                    cout << "Kelas : " << infoPeserta(c).kelas << endl;
                    cout << "Nama Tim : " << infoPeserta(c).namaTim << endl;
                    cout << "Jumlah Anggota : "<< infoPeserta(c).jmlAnggota << endl;

                    return c;
                }
                c = nextPeserta(c);
        }
        a = nextAcara(a);
    }
    return nil;
}

void showSomeDataAll(porsenif P)
{
    adr_acara a = firstAcara(P);
    adr_peserta c;
    int i;
    while (a != nil){
        i = 1;
        cout << "Nama Acara : "<< infoAcara(a).namaAcara <<endl;
        c = firstPeserta(a);
        if (c != nil){
            while (c != nil){
                cout << "Nama Tim ke-" << i << " : "<< infoPeserta(c).namaTim << endl;
                i++;
                c = nextPeserta(c);
            }
        }else{
            cout << "Tidak Ada Peserta"<<endl;
        }
        cout << endl;
        a = nextAcara(a);

    }
}


