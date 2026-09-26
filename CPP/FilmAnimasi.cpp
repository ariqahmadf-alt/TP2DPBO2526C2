#ifndef FILMANIMASI_CPP
#define FILMANIMASI_CPP

#include <iostream>
#include "Film.cpp"
using namespace std;

// class FilmAnimasi (Child) dari class Film,
// sekaligus cucu (grandchild) dari class Media
// -> ini yang bikin Media -> Film -> FilmAnimasi jadi Multilevel Inheritance
class FilmAnimasi : public Film {
    private:
        string studioAnimasi;
        string teknikAnimasi; // contoh: 2D Hand-drawn, 3D CGI, Stop Motion
        string ratingUsia;    // contoh: SU, 13+, 17+

    public:
        FilmAnimasi() {}

        // constructor child harus memanggil constructor Film (parent langsungnya),
        // yang otomatis juga akan memanggil constructor Media di dalamnya
        FilmAnimasi(string judul, int tahunRilis, int durasi, string genre, string sutradara, double hargaTiket,
                    string studioAnimasi, string teknikAnimasi, string ratingUsia)
            : Film(judul, tahunRilis, durasi, genre, sutradara, hargaTiket) {
            this->studioAnimasi = studioAnimasi;
            this->teknikAnimasi = teknikAnimasi;
            this->ratingUsia = ratingUsia;
        }

        // getter setter
        string getStudioAnimasi() {
            return studioAnimasi;
        }
        void setStudioAnimasi(string studioAnimasi) {
            this->studioAnimasi = studioAnimasi;
        }

        string getTeknikAnimasi() {
            return teknikAnimasi;
        }
        void setTeknikAnimasi(string teknikAnimasi) {
            this->teknikAnimasi = teknikAnimasi;
        }

        string getRatingUsia() {
            return ratingUsia;
        }
        void setRatingUsia(string ratingUsia) {
            this->ratingUsia = ratingUsia;
        }
};

#endif
