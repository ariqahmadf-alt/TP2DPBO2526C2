from Film import Film

# FilmAnimasi adalah child dari Film, sekaligus cucu dari Media
# -> Media -> Film -> FilmAnimasi = Multilevel Inheritance
class FilmAnimasi(Film):
    def __init__(self, judul, tahun_rilis, durasi, genre, sutradara, harga_tiket,
                 studio_animasi, teknik_animasi, rating_usia):
        super().__init__(judul, tahun_rilis, durasi, genre, sutradara, harga_tiket)
        self.studio_animasi = studio_animasi
        self.teknik_animasi = teknik_animasi  # contoh: 2D Hand-drawn, 3D CGI, Stop Motion
        self.rating_usia = rating_usia        # contoh: SU, 13+, 17+

    # getter setter
    def get_studio_animasi(self):
        return self.studio_animasi

    def set_studio_animasi(self, studio_animasi):
        self.studio_animasi = studio_animasi

    def get_teknik_animasi(self):
        return self.teknik_animasi

    def set_teknik_animasi(self, teknik_animasi):
        self.teknik_animasi = teknik_animasi

    def get_rating_usia(self):
        return self.rating_usia

    def set_rating_usia(self, rating_usia):
        self.rating_usia = rating_usia
