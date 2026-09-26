#ifndef FILM_CPP
#define FILM_CPP

#include <iostream>
#include "Media.cpp"
using namespace std;

// class Film (Child) dari class Media (Parent)
class Film : public Media {
    private: // atribut private
        string genre;
        string sutradara;
        double hargaTiket;

    public:
        Film() {}

        // saat membuat constructor pada class child,
        // maka harus memanggil constructor pada class parent
        Film(string judul, int tahunRilis, int durasi, string genre, string sutradara, double hargaTiket)
            : Media(judul, tahunRilis, durasi) {
            this->genre = genre;
            this->sutradara = sutradara;
            this->hargaTiket = hargaTiket;
        }

        // getter setter
        string getGenre() {
            return genre;
        }
        void setGenre(string genre) {
            this->genre = genre;
        }

        string getSutradara() {
            return sutradara;
        }
        void setSutradara(string sutradara) {
            this->sutradara = sutradara;
        }

        double getHargaTiket() {
            return hargaTiket;
        }
        void setHargaTiket(double hargaTiket) {
            this->hargaTiket = hargaTiket;
        }
};

#endif
