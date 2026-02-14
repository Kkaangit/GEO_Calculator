#ifndef MAIN_H
#define MAIN_H

typedef enum { alan = 1, hacim } cins;
typedef enum { dörtgen = 1, daire, küre_A, silindir_A } ikiBoyut;
typedef enum { küp = 1, dikdörtgen_prizma, küre_H, silindir_H } üçBoyut;
typedef enum { metre = 1, santimetre, milimetre } birim;

void hesaplama();
void silme();
void sifreleme();

void secenek(birim sayi);
const char *Cevir(birim tur);
float Talan(ikiBoyut ikiboyut, float a, float b);
float Thacim(üçBoyut ucboyut, float a, float b);
const char *Dosya_2D(ikiBoyut geometrik);
const char *Dosya_3D(üçBoyut geometrik);

#endif
