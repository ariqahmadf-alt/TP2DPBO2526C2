<?php
require_once 'Film.php';

// FilmAnimasi adalah child dari Film, sekaligus cucu dari Media
// -> Media -> Film -> FilmAnimasi = Multilevel Inheritance
class FilmAnimasi extends Film {
    private $studioAnimasi;
    private $teknikAnimasi; // contoh: 2D Hand-drawn, 3D CGI, Stop Motion
    private $ratingUsia;    // contoh: SU, 13+, 17+

    public function __construct($judul, $tahunRilis, $durasi, $genre, $sutradara, $hargaTiket, $foto_produk,
                                 $studioAnimasi, $teknikAnimasi, $ratingUsia) {
        parent::__construct($judul, $tahunRilis, $durasi, $genre, $sutradara, $hargaTiket, $foto_produk);
        $this->studioAnimasi = $studioAnimasi;
        $this->teknikAnimasi = $teknikAnimasi;
        $this->ratingUsia = $ratingUsia;
    }

    public function getStudioAnimasi() {
        return $this->studioAnimasi;
    }
    public function setStudioAnimasi($studioAnimasi) {
        $this->studioAnimasi = $studioAnimasi;
    }

    public function getTeknikAnimasi() {
        return $this->teknikAnimasi;
    }
    public function setTeknikAnimasi($teknikAnimasi) {
        $this->teknikAnimasi = $teknikAnimasi;
    }

    public function getRatingUsia() {
        return $this->ratingUsia;
    }
    public function setRatingUsia($ratingUsia) {
        $this->ratingUsia = $ratingUsia;
    }
}
