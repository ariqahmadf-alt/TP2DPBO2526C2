# class Media (Parent / level teratas)
class Media:
    def __init__(self, judul, tahun_rilis, durasi):
        self.judul = judul
        self.tahun_rilis = tahun_rilis
        self.durasi = durasi  # dalam menit

    # getter setter
    def get_judul(self):
        return self.judul

    def set_judul(self, judul):
        self.judul = judul

    def get_tahun_rilis(self):
        return self.tahun_rilis

    def set_tahun_rilis(self, tahun_rilis):
        self.tahun_rilis = tahun_rilis

    def get_durasi(self):
        return self.durasi

    def set_durasi(self, durasi):
        self.durasi = durasi
