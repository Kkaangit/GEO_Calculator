#include <stdio.h>
#include "main.h"

int main() {
    char GirilenDeger;
    printf("yapmak istediğiniz islem \n");
    printf("=================================\n");
    printf("|  Yeni hesaplamalar icin 'A'   |\n");
    printf("|   Dosya silmek icin 'S'       |\n");
    printf("|  Sifreleme icin 'W'           |\n");
    printf("=================================\n");
    scanf("%c",&GirilenDeger);
    if (GirilenDeger == 'S' || GirilenDeger == 's') {
        silme();
    }
    else if (GirilenDeger == 'A' || GirilenDeger == 'a') {
        hesaplama();
    }
    else if (GirilenDeger == 'W' || GirilenDeger == 'w') {
        sifreleme();
    }
    return 0;
}
