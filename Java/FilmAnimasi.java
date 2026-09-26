// FilmAnimasi adalah child dari Film, sekaligus cucu dari Media
// -> Media -> Film -> FilmAnimasi = Multilevel Inheritance
public class FilmAnimasi extends Film {
    private String studioAnimasi;
    private String teknikAnimasi; // contoh: 2D Hand-drawn, 3D CGI, Stop Motion
    private String ratingUsia;    // contoh: SU, 13+, 17+

    public FilmAnimasi() {
    }

    public FilmAnimasi(String judul, int tahunRilis, int durasi, String genre, String sutradara, double hargaTiket,
                        String studioAnimasi, String teknikAnimasi, String ratingUsia) {
        // saat membuat constructor pada class child,
        // maka harus memanggil constructor pada class parent langsungnya (Film),
        // yang otomatis akan memanggil constructor Media di dalamnya
        super(judul, tahunRilis, durasi, genre, sutradara, hargaTiket);
        this.studioAnimasi = studioAnimasi;
        this.teknikAnimasi = teknikAnimasi;
        this.ratingUsia = ratingUsia;
    }

    public String getStudioAnimasi() {
        return studioAnimasi;
    }

    public void setStudioAnimasi(String studioAnimasi) {
        this.studioAnimasi = studioAnimasi;
    }

    public String getTeknikAnimasi() {
        return teknikAnimasi;
    }

    public void setTeknikAnimasi(String teknikAnimasi) {
        this.teknikAnimasi = teknikAnimasi;
    }

    public String getRatingUsia() {
        return ratingUsia;
    }

    public void setRatingUsia(String ratingUsia) {
        this.ratingUsia = ratingUsia;
    }
}
