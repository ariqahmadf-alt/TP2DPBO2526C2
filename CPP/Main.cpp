#include <iostream>
#include <vector>
#include <iomanip>
#include "FilmAnimasi.cpp"
using namespace std;

// menampilkan seluruh data (gabungan atribut Media + Film + FilmAnimasi) dalam satu tabel
void tampilkanTabel(vector<FilmAnimasi> &daftarFilm) {
    cout << left;
    string garis(150, '-');
    cout << garis << endl;
    cout << setw(24) << "Judul" << setw(7) << "Tahun" << setw(8) << "Durasi"
         << setw(13) << "Genre" << setw(18) << "Sutradara" << setw(13) << "Harga Tiket"
         << setw(20) << "Studio Animasi" << setw(16) << "Teknik Animasi" << setw(8) << "Rating" << endl;
    cout << garis << endl;

    for (auto &f : daftarFilm) {
        cout << setw(24) << f.getJudul()
             << setw(7)  << f.getTahunRilis()
             << setw(8)  << f.getDurasi()
             << setw(13) << f.getGenre()
             << setw(18) << f.getSutradara()
             << setw(13) << f.getHargaTiket()
             << setw(20) << f.getStudioAnimasi()
             << setw(16) << f.getTeknikAnimasi()
             << setw(8)  << f.getRatingUsia()
             << endl;
    }
    cout << garis << endl;
}

int main() {
    vector<FilmAnimasi> daftarFilm;

    // wajib 5 objek awal, dibuat langsung di main SEBELUM ada input user
    daftarFilm.push_back(FilmAnimasi("Spirited Away", 2001, 125, "Fantasi", "Hayao Miyazaki", 35000,
                                      "Studio Ghibli", "2D Hand-drawn", "SU"));
    daftarFilm.push_back(FilmAnimasi("Doraemon: Stand By Me", 2014, 100, "Keluarga", "Ryuichi Yagi", 30000,
                                      "Shirogumi", "3D CGI", "SU"));
    daftarFilm.push_back(FilmAnimasi("Your Name", 2016, 106, "Romansa", "Makoto Shinkai", 40000,
                                      "CoMix Wave Films", "2D Digital", "13+"));
    daftarFilm.push_back(FilmAnimasi("Nimona", 2023, 108, "Aksi", "Nick Bruno", 45000,
                                      "Annapurna Animation", "3D CGI", "13+"));
    daftarFilm.push_back(FilmAnimasi("Suzume", 2022, 122, "Petualangan", "Makoto Shinkai", 42000,
                                      "CoMix Wave Films", "2D Digital", "13+"));

    int pilihan;
    do {
        cout << "\n=== MENU FILM ANIMASI (Media -> Film -> FilmAnimasi) ===" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            string judul, sutradara, genre, studio, teknik, rating;
            int tahun, durasi;
            double harga;

            cout << "Judul: "; getline(cin, judul);
            cout << "Tahun Rilis: "; cin >> tahun; cin.ignore();
            cout << "Durasi (menit): "; cin >> durasi; cin.ignore();
            cout << "Genre: "; getline(cin, genre);
            cout << "Sutradara: "; getline(cin, sutradara);
            cout << "Harga Tiket: "; cin >> harga; cin.ignore();
            cout << "Studio Animasi: "; getline(cin, studio);
            cout << "Teknik Animasi: "; getline(cin, teknik);
            cout << "Rating Usia: "; getline(cin, rating);

            daftarFilm.push_back(FilmAnimasi(judul, tahun, durasi, genre, sutradara, harga, studio, teknik, rating));
            cout << "Data berhasil ditambahkan!" << endl;
        } else if (pilihan == 2) {
            tampilkanTabel(daftarFilm);
        } else if (pilihan != 0) {
            cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 0);

    return 0;
}
