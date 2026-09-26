#ifndef MEDIA_CPP
#define MEDIA_CPP

#include <iostream>
#include <string>
using namespace std;

// class Media (Parent / level teratas)
class Media {
    private: // atribut private
        string judul;
        int tahunRilis;
        int durasi; // dalam menit

    public: // akses modifier public
        // constructor kosong
        Media() {}

        // constructor dengan parameter
        Media(string judul, int tahunRilis, int durasi) {
            this->judul = judul;
            this->tahunRilis = tahunRilis;
            this->durasi = durasi;
        }

        // getter setter
        string getJudul() {
            return judul;
        }
        void setJudul(string judul) {
            this->judul = judul;
        }

        int getTahunRilis() {
            return tahunRilis;
        }
        void setTahunRilis(int tahunRilis) {
            this->tahunRilis = tahunRilis;
        }

        int getDurasi() {
            return durasi;
        }
        void setDurasi(int durasi) {
            this->durasi = durasi;
        }
};

#endif
