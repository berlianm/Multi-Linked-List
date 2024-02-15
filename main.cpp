#include <iostream>
#include "porsenif.h"
using namespace std;

int main()
{
    porsenif P;
    infotypeAcara acara;
    infotypePeserta peserta;
    adr_acara a;
    adr_peserta c;


    createList(P);

    //memasukan data parent
    acara = Acara("Mobile Legends", "Online", 75000, "20-11-2021 s/d 23-12-2021", 600000, 7);
    newElm_acara(acara, a);
    insertAcara(P, a);

    acara = Acara("VALORANT", "Online", 75000, "20-11-2021 s/d 23-12-2021", 60000, 13);
    newElm_acara(acara, a);
    insertAcara(P, a);

    acara = Acara("Jingle", "Online", 50000, "22-11-2021 s/d 23-12-2021", 350000, 7);
    newElm_acara(acara, a);
    insertAcara(P, a);

    acara = Acara("Badminton", "Lapangan Badminton Tel-U", 50000, "7-11-2021 s/d 23-12-2021", 350000, 7);
    newElm_acara(acara, a);
    insertAcara(P, a);

    acara = Acara("Futsal", "Lapangan Futsal Tel-U", 50000, "7-11-2021 s/d 23-12-2021", 350000, 7);
    newElm_acara(acara, a);
    insertAcara(P, a);

    acara = Acara("Basketball", "Lapangan Basket Tel-U", 50000, "7-11-2021 s/d 23-12-2021", 350000, 7);
    newElm_acara(acara, a);
    insertAcara(P, a);

    showAcara(P); //Menampilkan daftar Acara yang telah diinsertkan kedalam list


    //Memasukan data child pada parent Mobile Legend
    a = searchAcara(P, "Mobile Legends");
    peserta = Peserta("Berlian", "1301204378", "IF - 44 - 10", "Bojongsoang Empire", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Mobile Legends");
    peserta = Peserta("Lasman", "1301200559", "IF - 44 - 9", "I9 No Counter", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Mobile Legends");
    peserta = Peserta("Maulana", "1301204200", "IF - 44 - 12", "REBORN", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Mobile Legends");
    peserta = Peserta("Radhiva", "1301204385", "IF - 44 - 02", "FARcarryUS", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Mobile Legends");
    peserta = Peserta("Sulthon", "1301204089", "IF - 44 - 11", "SHIUUU", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Mobile Legends");
    peserta = Peserta("Daffa", "1301204216", "IF - 44 - INT", "Silogonggo", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Mobile Legends");
    peserta = Peserta("Lukman", "1301204242", "IF - 44 - 07", "HT-ML", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Mobile Legends");
    peserta = Peserta("Alif", "1301204228", "IF - 44 - 04", "Infourtech", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Mobile Legends");
    peserta = Peserta("Rayhan", "1301204026", "IF - 44 - 06", "Infinity Team", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Mobile Legends");
    peserta = Peserta("Galih", "1301204028", "IF - 44 - 08", "Black-Piggies", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Mobile Legends");
    peserta = Peserta("Haikal", "1301202398", "IF - 44 - 05", "Haji Mabrur", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Mobile Legends");
    peserta = Peserta("Hanif", "1301204368", "IF - 44 - 01", "Fixers", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    showPeserta(P, "Mobile Legends"); //Menampilkan daftar Peserta acara Mobile Legend



    //Memasukan data child pada parent VALORANT
    a = searchAcara(P, "VALORANT");
    peserta = Peserta("Rafiq", "1301204011", "IF - 44 - 01", "IF-ONE", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "VALORANT");
    peserta = Peserta("Ilham", "1301204571", "IF - 44 - 02", "BEDS IF 2", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "VALORANT");
    peserta = Peserta("Shidqi", "1301204256", "IF - 44 - 10", "Bojongsoang Empire", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "VALORANT");
    peserta = Peserta("Kevin", "1301200158", "IF - 44 - 11", "No Mercy", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "VALORANT");
    peserta = Peserta("Adam", "1301200041", "IF - 44 - INT", "Tim Hehe", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "VALORANT");
    peserta = Peserta("Satria", "1301204038", "IF - 44 - 09", "I9 No Counter", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "VALORANT");
    peserta = Peserta("Hadi", "1301204373", "IF - 44 - 07", "NasgorX", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "VALORANT");
    peserta = Peserta("Adit", "1301200489", "IF - 44 - 08", "Saparudin", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "VALORANT");
    peserta = Peserta("Refky", "1301204218", "IF - 44 - 05", "Zero Five", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "VALORANT");
    peserta = Peserta("Jonathan", "1301204094", "IF - 44 - 04", "BUN GAMING", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    showPeserta(P, "VALORANT"); //Menampilkan daftar Peserta VALORANT

    //Memasukan data child pada parent Jingle
    a = searchAcara(P, "Jingle");
    peserta = Peserta("Adi", "1301200366", "IF - 44 - 09", "Gasken", 15);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Jingle");
    peserta = Peserta("Salsa", "1301200325", "IF - 44 - 02", "Totally Tuned", 15);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Jingle");
    peserta = Peserta("Risma", "1301204087", "IF - 44 - 11", "Bliss", 15);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Jingle");
    peserta = Peserta("Audry", "1301204119", "IF - 44 - 05", "CrossPath", 15);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    showPeserta(P, "Jingle"); //Menampilkan Daftar Peserta Jingla

    //Memasukan data child pada parent Badminton
    a = searchAcara(P, "Badminton");
    peserta = Peserta("Nico", "1301204351", "IF - 44 - 01", "Sulawesi Pride", 2);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Badminton");
    peserta = Peserta("Hilal", "1301204095", "IF - 44 - 06", "Utah Itah", 2);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Badminton");
    peserta = Peserta("Rey", "1301201583", "IF - 44 - 08", "Team Roar", 2);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Badminton");
    peserta = Peserta("Abdul", "1301201583", "IF - 44 - 11", "Bisa-Bisa", 2);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Badminton");
    peserta = Peserta("Rizqi", "1301204507", "IF - 44 - 08", "Halo Gaes", 2);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Badminton");
    peserta = Peserta("Irvan", "1301204532", "IF - 44 - INT", "Florestina", 2);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    showPeserta(P, "Badminton"); //Menampilkan Daftar Peserta Badminton


    //Memasukan data child pada parent Futsal
    a = searchAcara(P, "Futsal");
    peserta = Peserta("Raihan", "1301204324", "IF - 44 - 06", "Freeboy", 5);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Futsal");
    peserta = Peserta("Denny", "1301204036", "IF - 44 - 11", "Skip Team", 6);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Futsal");
    peserta = Peserta("Randy", "1301204370", "IF - 44 - 08", "Trobos Sajalah", 5);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Futsal");
    peserta = Peserta("Farhan", "1301204268", "IF - 44 - 07", "Barcelona", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    a = searchAcara(P, "Futsal");
    peserta = Peserta("Fairuz", "1301202034", "IF - 44 - 04", "Bandung Pride", 7);
    newElm_peserta(peserta, c);
    insertPeserta(P, a, c);

    showPeserta(P, "Futsal"); //Menampilkan Daftar Peserta Futsal



    c = searchPeserta(P, "Futsal", "Barcelona");
    /*Mencari Peserta dengan Nama Tim Barcelona
      pada acara futsal jika ketemu memberikan data peserta
      tersebut.
    */
    if (c == nil){
        cout << "Peserta Tidak Ditemukan "<<endl;
    }else{
        cout << "Peserta Ditemukan " <<endl;
        cout << "Nama Ketua Tim : "<< infoPeserta(c).namaKetua << endl;
        cout << "NIM Ketua Tim : " << infoPeserta(c).nimKetua << endl;
        cout << "Kelas : " << infoPeserta(c).kelas << endl;
        cout << "Nama Tim : " << infoPeserta(c).namaTim << endl;
        cout << "Jumlah Anggota : "<< infoPeserta(c).jmlAnggota << endl;
    }
    cout << endl;

    c = searchChild_Allparent(P, "Adi");//Mencari child dari semua data parent yang ada
    if (c == nil){
        cout << "Peserta Hilang"<<endl;
    }
    cout << endl;

    Pindahrelasi(P, "Futsal", "Basketball");
    //Menghapus relasi child dengan futsal kemudian membuat relasi baru dengan parent Basketball

    showPeserta(P, "Futsal");
    showPeserta(P, "Basketball");

    showSomeDataAll(P);

    return 0;
}
