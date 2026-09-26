// class Media (Parent / level teratas)
public class Media {
    private String judul;
    private int tahunRilis;
    private int durasi; // dalam menit

    public Media() {
    }

    public Media(String judul, int tahunRilis, int durasi) {
        this.judul = judul;
        this.tahunRilis = tahunRilis;
        this.durasi = durasi;
    }

    // Getter dan Setter
    public String getJudul() {
        return judul;
    }

    public void setJudul(String judul) {
        this.judul = judul;
    }

    public int getTahunRilis() {
        return tahunRilis;
    }

    public void setTahunRilis(int tahunRilis) {
        this.tahunRilis = tahunRilis;
    }

    public int getDurasi() {
        return durasi;
    }

    public void setDurasi(int durasi) {
        this.durasi = durasi;
    }
}
