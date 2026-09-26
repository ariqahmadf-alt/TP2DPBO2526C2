from Media import Media
from Film import Film
from FilmAnimasi import FilmAnimasi


def tampilkan_tabel(daftar_film):
    header = (f"{'Judul':<24}{'Tahun':<7}{'Durasi':<8}{'Genre':<13}{'Sutradara':<18}"
              f"{'Harga Tiket':<13}{'Studio Animasi':<20}{'Teknik Animasi':<16}{'Rating':<8}")
    garis = "-" * len(header)
    print(garis)
    print(header)
    print(garis)
    for f in daftar_film:
        print(f"{f.get_judul():<24}{f.get_tahun_rilis():<7}{f.get_durasi():<8}{f.get_genre():<13}"
              f"{f.get_sutradara():<18}{f.get_harga_tiket():<13}{f.get_studio_animasi():<20}"
              f"{f.get_teknik_animasi():<16}{f.get_rating_usia():<8}")
    print(garis)


def main():
    daftar_film = []

    # wajib 5 objek awal, dibuat langsung di main SEBELUM ada input user
    daftar_film.append(FilmAnimasi("Spirited Away", 2001, 125, "Fantasi", "Hayao Miyazaki", 35000,
                                    "Studio Ghibli", "2D Hand-drawn", "SU"))
    daftar_film.append(FilmAnimasi("Doraemon: Stand By Me", 2014, 100, "Keluarga", "Ryuichi Yagi", 30000,
                                    "Shirogumi", "3D CGI", "SU"))
    daftar_film.append(FilmAnimasi("Your Name", 2016, 106, "Romansa", "Makoto Shinkai", 40000,
                                    "CoMix Wave Films", "2D Digital", "13+"))
    daftar_film.append(FilmAnimasi("Nimona", 2023, 108, "Aksi", "Nick Bruno", 45000,
                                    "Annapurna Animation", "3D CGI", "13+"))
    daftar_film.append(FilmAnimasi("Suzume", 2022, 122, "Petualangan", "Makoto Shinkai", 42000,
                                    "CoMix Wave Films", "2D Digital", "13+"))

    while True:
        print("\n=== MENU FILM ANIMASI (Media -> Film -> FilmAnimasi) ===")
        print("1. Tambah Data")
        print("2. Tampilkan Data")
        print("0. Keluar")
        pilihan = input("Pilihan: ")

        if pilihan == "1":
            judul = input("Judul: ")
            tahun_rilis = int(input("Tahun Rilis: "))
            durasi = int(input("Durasi (menit): "))
            genre = input("Genre: ")
            sutradara = input("Sutradara: ")
            harga_tiket = float(input("Harga Tiket: "))
            studio_animasi = input("Studio Animasi: ")
            teknik_animasi = input("Teknik Animasi: ")
            rating_usia = input("Rating Usia: ")

            daftar_film.append(FilmAnimasi(judul, tahun_rilis, durasi, genre, sutradara, harga_tiket,
                                            studio_animasi, teknik_animasi, rating_usia))
            print("Data berhasil ditambahkan!")
        elif pilihan == "2":
            tampilkan_tabel(daftar_film)
        elif pilihan == "0":
            break
        else:
            print("Pilihan tidak valid.")


if __name__ == "__main__":
    main()
