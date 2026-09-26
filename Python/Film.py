from Media import Media

# penulisan class turunan menggunakan nama class induk di dalam kurung
class Film(Media):
    def __init__(self, judul, tahun_rilis, durasi, genre, sutradara, harga_tiket):
        # super() digunakan untuk mengakses constructor dari class induk
        super().__init__(judul, tahun_rilis, durasi)
        self.genre = genre
        self.sutradara = sutradara
        self.harga_tiket = harga_tiket

    # getter setter
    def get_genre(self):
        return self.genre

    def set_genre(self, genre):
        self.genre = genre

    def get_sutradara(self):
        return self.sutradara

    def set_sutradara(self, sutradara):
        self.sutradara = sutradara

    def get_harga_tiket(self):
        return self.harga_tiket

    def set_harga_tiket(self, harga_tiket):
        self.harga_tiket = harga_tiket
