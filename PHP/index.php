<?php
require_once 'Media.php';
require_once 'Film.php';
require_once 'FilmAnimasi.php';

// wajib 5 objek awal, dibuat hardcode langsung di sini
// (versi PHP ini tidak punya fitur Tambah Data, sesuai permintaan - hanya menampilkan data)
$daftarFilm = [
    new FilmAnimasi("Spirited Away", 2001, 125, "Fantasi", "Hayao Miyazaki", 35000, "spirited_away.jpg", "Studio Ghibli", "2D Hand-drawn", "SU"),
    new FilmAnimasi("Doraemon: Stand By Me", 2014, 100, "Keluarga", "Ryuichi Yagi", 30000, "doraemon.jpg", "Shirogumi", "3D CGI", "SU"),
    new FilmAnimasi("Your Name", 2016, 106, "Romansa", "Makoto Shinkai", 40000, "your_name.jpg", "CoMix Wave Films", "2D Digital", "13+"),
    new FilmAnimasi("Nimona", 2023, 108, "Aksi", "Nick Bruno", 45000, "nimona.jpg", "Annapurna Animation", "3D CGI", "13+"),
    new FilmAnimasi("Suzume", 2022, 122, "Petualangan", "Makoto Shinkai", 42000, "suzume.jpg", "CoMix Wave Films", "2D Digital", "13+"),
];
?>
<!DOCTYPE html>
<html lang="id">
<head>
<meta charset="UTF-8">
<title>TP2 DPBO - Film Animasi</title>
<style>
    body { font-family: Arial, sans-serif; margin: 20px; background:#f7f7f7; }
    h1 { color:#222; }
    table { border-collapse: collapse; width: 100%; margin-top: 15px; background:#fff; }
    th, td { border: 1px solid #999; padding: 6px 10px; text-align: left; font-size: 13px; vertical-align: middle; }
    th { background: #333; color: #fff; }
    td img { display:block; width: 70px; height: auto; border-radius: 4px; }
</style>
</head>
<body>
    <h1>Data Film Animasi</h1>
    <p>Multilevel Inheritance: <b>Media</b> -&gt; <b>Film</b> -&gt; <b>FilmAnimasi</b></p>

    <table>
        <tr>
            <th>Poster</th>
            <th>Judul</th><th>Tahun Rilis</th><th>Durasi</th>
            <th>Genre</th><th>Sutradara</th><th>Harga Tiket</th>
            <th>Studio Animasi</th><th>Teknik Animasi</th><th>Rating Usia</th>
        </tr>
        <?php foreach ($daftarFilm as $f): ?>
        <tr>
            <td><img src="posters/<?= htmlspecialchars($f->getFotoProduk()) ?>" alt="Poster <?= htmlspecialchars($f->getJudul()) ?>"></td>
            <td><?= htmlspecialchars($f->getJudul()) ?></td>
            <td><?= htmlspecialchars($f->getTahunRilis()) ?></td>
            <td><?= htmlspecialchars($f->getDurasi()) ?></td>
            <td><?= htmlspecialchars($f->getGenre()) ?></td>
            <td><?= htmlspecialchars($f->getSutradara()) ?></td>
            <td><?= htmlspecialchars($f->getHargaTiket()) ?></td>
            <td><?= htmlspecialchars($f->getStudioAnimasi()) ?></td>
            <td><?= htmlspecialchars($f->getTeknikAnimasi()) ?></td>
            <td><?= htmlspecialchars($f->getRatingUsia()) ?></td>
        </tr>
        <?php endforeach; ?>
    </table>
</body>
</html>
