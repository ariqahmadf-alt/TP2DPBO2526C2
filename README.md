# TP2 DPBO - Manajemen Data Film Animasi (Multilevel Inheritance)

Nama : Ariq Ahmad Fathir
NIM  : 2506752
Kelas : C2

## Janji

Saya Ariq Ahmad Fathir dengan NIM 2506752 mengerjakan TP 2 DPBO 2026 C2 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya, maka saya tidak melakukan
kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Tentang Programnya

Program ini mengembangkan tema TP1 (manajemen data film bioskop) menjadi kasus
**Multilevel Inheritance** dengan 3 tingkat class:

```
Media -> Film -> FilmAnimasi
```

Konsepnya dibuat make sense dengan dunia nyata: setiap **Film Animasi** pasti sebuah **Film**,
dan setiap **Film** pasti sebuah **Media** (hubungan *is-a*). Semakin ke bawah levelnya, atributnya
semakin spesifik.

Dibuat di 4 bahasa: C++, Java, Python (CLI/menu di terminal), dan PHP (web).

## Penjelasan Atribut dan Method

### Class `Media` (Parent paling atas)
Atribut umum yang dimiliki semua jenis media:
| Atribut | Tipe | Keterangan |
|---|---|---|
| `judul` | String | Judul media |
| `tahunRilis` | int | Tahun media dirilis |
| `durasi` | int | Durasi dalam menit |

Method: `getJudul/setJudul`, `getTahunRilis/setTahunRilis`, `getDurasi/setDurasi`, dan constructor.

### Class `Film` (Child dari `Media`)
Menambahkan atribut yang spesifik untuk film bioskop:
| Atribut | Tipe | Keterangan |
|---|---|---|
| `genre` | String | Genre film |
| `sutradara` | String | Nama sutradara |
| `hargaTiket` | double | Harga tiket bioskop |
| `foto_produk` *(khusus PHP)* | String | Nama file poster film (file gambarnya ada di folder `PHP/posters/`) |

Constructor `Film` memanggil constructor `Media` (`super()` / `parent::__construct()` / `: Media(...)`
tergantung bahasa) untuk mengisi atribut yang diwarisi.

### Class `FilmAnimasi` (Child dari `Film`, cucu dari `Media`)
Menambahkan atribut yang spesifik untuk film animasi:
| Atribut | Tipe | Keterangan |
|---|---|---|
| `studioAnimasi` | String | Studio yang memproduksi animasi |
| `teknikAnimasi` | String | Teknik animasi (2D Hand-drawn / 3D CGI / Stop Motion) |
| `ratingUsia` | String | Rating usia penonton (SU / 13+ / 17+) |

Constructor `FilmAnimasi` memanggil constructor `Film`, yang otomatis juga memanggil constructor
`Media` di dalamnya — inilah yang membuatnya **Multilevel Inheritance**.

Setiap object `FilmAnimasi` otomatis memiliki **seluruh atribut dari ketiga level**
(`Media` + `Film` + `FilmAnimasi`) berkat pewarisan, tanpa perlu menulis ulang atribut
`judul`, `tahunRilis`, `durasi`, `genre`, `sutradara`, dan `hargaTiket`.

## Design Diagram

```mermaid
classDiagram
    class Media {
        -judul : String
        -tahunRilis : int
        -durasi : int
        +getJudul()
        +setJudul()
        +getTahunRilis()
        +setTahunRilis()
        +getDurasi()
        +setDurasi()
    }

    class Film {
        -genre : String
        -sutradara : String
        -hargaTiket : double
        -foto_produk : String
        +getGenre()
        +setGenre()
        +getSutradara()
        +setSutradara()
        +getHargaTiket()
        +setHargaTiket()
        +getFotoProduk()
        +setFotoProduk()
    }

    class FilmAnimasi {
        -studioAnimasi : String
        -teknikAnimasi : String
        -ratingUsia : String
        +getStudioAnimasi()
        +setStudioAnimasi()
        +getTeknikAnimasi()
        +setTeknikAnimasi()
        +getRatingUsia()
        +setRatingUsia()
    }

    Media <|-- Film
    Film <|-- FilmAnimasi
```

## Cara Menjalankan / Kompilasi

Perintah kompilasinya sama di semua OS. Yang beda cuma cara **memanggil hasil compile**
(khusus C++) dan nama perintah Python.

### C++

Compile (sama di semua OS):
```
cd CPP
g++ -std=c++17 -o awawa Main.cpp
```

Jalankan:
| OS | Perintah |
|---|---|
| Windows (CMD) | `awawa` atau `awawa.exe` |
| Mac / Linux | `./awawa` |

### Java

Compile & jalankan (sama persis di semua OS):
```
cd Java
javac Main.java Media.java Film.java FilmAnimasi.java
java Main
```

### Python

Jalankan:
| OS | Perintah |
|---|---|
| Windows | `python main.py` |
| Mac / Linux | `python3 main.py` |

### PHP

Harus lewat server, tidak bisa dibuka langsung dari file (perintahnya sama di semua OS,
asal PHP sudah terinstall dan ada di PATH):
```
cd PHP
php -S localhost:8000
```
lalu buka `http://localhost:8000/index.php` di browser.

### Menjalankan dengan Testcase

Testcase input otomatis (untuk C++/Java/Python) tersedia di masing-masing folder bahasa
(`testcase_cpp.txt`, `testcase_java.txt`, `testcase_python.txt`) — isinya cuma baris-baris input
mentah (tanpa komentar), urutannya: pilih menu Tambah (1) -> isi 9 field data film animasi baru
-> pilih Tampilkan Data (2) -> Keluar (0).

| Bahasa | Windows | Mac / Linux |
|---|---|---|
| C++ | `awawa < testcase_cpp.txt` | `./awawa < testcase_cpp.txt` |
| Java | `java Main < testcase_java.txt` | `java Main < testcase_java.txt` |
| Python | `python main.py < testcase_python.txt` | `python3 main.py < testcase_python.txt` |

## Flow Programnya

Untuk versi CLI (C++/Java/Python), semuanya mirip:

1. Program mulai dengan **5 objek `FilmAnimasi` awal** yang sudah dibuat langsung di `main`
   sebelum ada input apapun dari user, supaya tabel langsung terisi saat program pertama kali jalan.
2. Muncul menu looping terus sampai user pilih Keluar:
   - **1. Tambah Data** -> user input 9 field (judul, tahun rilis, durasi, genre, sutradara,
     harga tiket, studio animasi, teknik animasi, rating usia), lalu dibuatkan object `FilmAnimasi`
     baru lewat constructor-nya (yang otomatis memanggil constructor `Film` dan `Media`), lalu
     dimasukkan ke list/array.
   - **2. Tampilkan Data** -> looping semua isi list, ditampilkan dalam **satu tabel** yang berisi
     gabungan atribut dari ketiga level class (Media + Film + FilmAnimasi) secara lengkap.
   - **0. Keluar** -> program berhenti.

Untuk versi PHP (web):

- `Media.php`, `Film.php`, `FilmAnimasi.php` isi class-nya saja (constructor + getter/setter),
  strukturnya sama persis dengan versi lain (Multilevel Inheritance 3 level).
- `index.php` yang jadi "otaknya": inisialisasi **5 objek awal secara hardcode** (bukan dari
  form/input user), lalu langsung menampilkannya dalam satu tabel — sekaligus nampilin HTML-nya
  di file yang sama.
- Versi PHP ini **tidak punya fitur Tambah Data** (beda dari C++/Java/Python yang wajib bisa
  menerima input user) — sesuai requirement TP2 yang membolehkan PHP hanya hardcode.
- Setiap baris tabel menampilkan poster film (`<img src="posters/...">`), diambil dari atribut
  `foto_produk` yang isinya nama file gambar di folder `posters/`.

## Dokumentasi

### C++

**run+add**

![run+add CPP](Dokumentasi/CPP/run+add.png)

**tampil**

![tampil CPP](Dokumentasi/CPP/tampil.png)

### Java

**run+add**

![run+add Java](Dokumentasi/Java/run+add.png)

**tampil**

![tampil Java](Dokumentasi/Java/tampil.png)

### Python

**run+add**

![run+add Python](Dokumentasi/Python/run+add.png)

**tampil**

![tampil Python](Dokumentasi/Python/tampil.png)

### PHP

**run**

![run PHP](Dokumentasi/PHP/run.png)

**tampil**

![tampil PHP](Dokumentasi/PHP/tampil.png)
