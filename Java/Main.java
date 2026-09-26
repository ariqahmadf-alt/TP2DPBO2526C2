import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    // menampilkan seluruh data (gabungan atribut Media + Film + FilmAnimasi) dalam satu tabel
    public static void tampilkanTabel(ArrayList<FilmAnimasi> daftarFilm) {
        String format = "%-24s%-7s%-8s%-13s%-18s%-13s%-20s%-16s%-8s%n";
        String garis = "-".repeat(125);

        System.out.println(garis);
        System.out.printf(format, "Judul", "Tahun", "Durasi", "Genre", "Sutradara",
                "Harga Tiket", "Studio Animasi", "Teknik Animasi", "Rating");
        System.out.println(garis);

        for (FilmAnimasi f : daftarFilm) {
            System.out.printf(format, f.getJudul(), f.getTahunRilis(), f.getDurasi(), f.getGenre(),
                    f.getSutradara(), f.getHargaTiket(), f.getStudioAnimasi(), f.getTeknikAnimasi(), f.getRatingUsia());
        }
        System.out.println(garis);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<FilmAnimasi> daftarFilm = new ArrayList<>();

        // wajib 5 objek awal, dibuat langsung di main SEBELUM ada input user
        daftarFilm.add(new FilmAnimasi("Spirited Away", 2001, 125, "Fantasi", "Hayao Miyazaki", 35000,
                "Studio Ghibli", "2D Hand-drawn", "SU"));
        daftarFilm.add(new FilmAnimasi("Doraemon: Stand By Me", 2014, 100, "Keluarga", "Ryuichi Yagi", 30000,
                "Shirogumi", "3D CGI", "SU"));
        daftarFilm.add(new FilmAnimasi("Your Name", 2016, 106, "Romansa", "Makoto Shinkai", 40000,
                "CoMix Wave Films", "2D Digital", "13+"));
        daftarFilm.add(new FilmAnimasi("Nimona", 2023, 108, "Aksi", "Nick Bruno", 45000,
                "Annapurna Animation", "3D CGI", "13+"));
        daftarFilm.add(new FilmAnimasi("Suzume", 2022, 122, "Petualangan", "Makoto Shinkai", 42000,
                "CoMix Wave Films", "2D Digital", "13+"));

        int pilihan;
        do {
            System.out.println("\n=== MENU FILM ANIMASI (Media -> Film -> FilmAnimasi) ===");
            System.out.println("1. Tambah Data");
            System.out.println("2. Tampilkan Data");
            System.out.println("0. Keluar");
            System.out.print("Pilihan: ");
            pilihan = Integer.parseInt(sc.nextLine().trim());

            if (pilihan == 1) {
                System.out.print("Judul: ");
                String judul = sc.nextLine();
                System.out.print("Tahun Rilis: ");
                int tahun = Integer.parseInt(sc.nextLine().trim());
                System.out.print("Durasi (menit): ");
                int durasi = Integer.parseInt(sc.nextLine().trim());
                System.out.print("Genre: ");
                String genre = sc.nextLine();
                System.out.print("Sutradara: ");
                String sutradara = sc.nextLine();
                System.out.print("Harga Tiket: ");
                double harga = Double.parseDouble(sc.nextLine().trim());
                System.out.print("Studio Animasi: ");
                String studio = sc.nextLine();
                System.out.print("Teknik Animasi: ");
                String teknik = sc.nextLine();
                System.out.print("Rating Usia: ");
                String rating = sc.nextLine();

                daftarFilm.add(new FilmAnimasi(judul, tahun, durasi, genre, sutradara, harga, studio, teknik, rating));
                System.out.println("Data berhasil ditambahkan!");
            } else if (pilihan == 2) {
                tampilkanTabel(daftarFilm);
            } else if (pilihan != 0) {
                System.out.println("Pilihan tidak valid.");
            }
        } while (pilihan != 0);

        sc.close();
    }
}
