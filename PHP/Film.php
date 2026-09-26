<?php
require_once 'Media.php';

class Film extends Media {
    private $genre;
    private $sutradara;
    private $hargaTiket;
    private $foto_produk; // atribut KHUSUS BAHASA PHP: nama/path file poster film

    public function __construct($judul, $tahunRilis, $durasi, $genre, $sutradara, $hargaTiket, $foto_produk) {
        // parent:: digunakan untuk memanggil constructor dari class induk (Media)
        parent::__construct($judul, $tahunRilis, $durasi);
        $this->genre = $genre;
        $this->sutradara = $sutradara;
        $this->hargaTiket = $hargaTiket;
        $this->foto_produk = $foto_produk;
    }

    // Getter dan Setter
    public function getGenre() {
        return $this->genre;
    }
    public function setGenre($genre) {
        $this->genre = $genre;
    }

    public function getSutradara() {
        return $this->sutradara;
    }
    public function setSutradara($sutradara) {
        $this->sutradara = $sutradara;
    }

    public function getHargaTiket() {
        return $this->hargaTiket;
    }
    public function setHargaTiket($hargaTiket) {
        $this->hargaTiket = $hargaTiket;
    }

    public function getFotoProduk() {
        return $this->foto_produk;
    }
    public function setFotoProduk($foto_produk) {
        $this->foto_produk = $foto_produk;
    }
}
