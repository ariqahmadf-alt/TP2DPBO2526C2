<?php
// class Media (Parent / level teratas)
class Media {
    private $judul;       // atribut judul
    private $tahunRilis;  // atribut tahunRilis
    private $durasi;      // atribut durasi (menit)

    public function __construct($judul, $tahunRilis, $durasi) {
        $this->judul = $judul;
        $this->tahunRilis = $tahunRilis;
        $this->durasi = $durasi;
    }

    // Getter dan Setter
    public function getJudul() {
        return $this->judul;
    }
    public function setJudul($judul) {
        $this->judul = $judul;
    }

    public function getTahunRilis() {
        return $this->tahunRilis;
    }
    public function setTahunRilis($tahunRilis) {
        $this->tahunRilis = $tahunRilis;
    }

    public function getDurasi() {
        return $this->durasi;
    }
    public function setDurasi($durasi) {
        $this->durasi = $durasi;
    }
}
