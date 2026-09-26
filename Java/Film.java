// penulisan inheritance pada Java
// keyword yang digunakan adalah extends
public class Film extends Media {
    private String genre;
    private String sutradara;
    private double hargaTiket;

    public Film() {
    }

    public Film(String judul, int tahunRilis, int durasi, String genre, String sutradara, double hargaTiket) {
        // super digunakan untuk memanggil
        // konstruktor dari kelas induk (Media)
        super(judul, tahunRilis, durasi);
        this.genre = genre;
        this.sutradara = sutradara;
        this.hargaTiket = hargaTiket;
    }

    public String getGenre() {
        return genre;
    }

    public void setGenre(String genre) {
        this.genre = genre;
    }

    public String getSutradara() {
        return sutradara;
    }

    public void setSutradara(String sutradara) {
        this.sutradara = sutradara;
    }

    public double getHargaTiket() {
        return hargaTiket;
    }

    public void setHargaTiket(double hargaTiket) {
        this.hargaTiket = hargaTiket;
    }
}
