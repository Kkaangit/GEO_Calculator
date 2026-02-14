# GEO_Calculator
Alan ve hacim hesaplamaları, dosya silme ve basit XOR şifreleme gibi işlevleri içeren C tabanlı çok amaçlı konsol uygulaması.
Bu proje, C dilinde geliştirilmiş; geometrik hesaplamalar, dosya yönetimi ve XOR tabanlı şifreleme işlemlerini bir araya getiren modüler bir araç setidir. Hem **Windows** hem de **Linux** sistemlerde yerel komutlarla uyumlu çalışacak şekilde tasarlanmıştır.

## Ozellikler
- Alan ve hacim hesaplamaları (Daire, Küre, Silindir, Kare Prizma vb.).
- Dinamik bellek kullanimi (realloc / free)
- Dosyaya sonuc kaydetme
- Platforma bagimli dizin listeleme (Windows / Linux)
- XOR tabanli basit dosya sifreleme
- Dosya silme islemleri
- Program boyunca kalıcı birim seçimi (m, cm, mm).

## Desteklenen Platformlar
- Windows
- Linux

## Build System

### CMake ile modern derleme
```bash
mkdir build
cd build
cmake ..
cmake --build veya sadece make
```

### Klasik derleme (GCC)
```bash
gcc main.c hesaplama.c sifreleme.c Dosya_Silme.c -o GeoCal
