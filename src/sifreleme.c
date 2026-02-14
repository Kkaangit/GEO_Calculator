#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#define D_Listesi system("dir")

#else

#include <unistd.h>
#define D_Listesi system("ls")

#endif

void sifrele(const char *girdi, const char *cikti, const char *anahtar);

void sifreleme(){

    char sifre[100];
    char fin[40];
    char fout[40];
    char anahtar[100];

    printf("Sifre girin: ");
    scanf("%99s", sifre); //Herkes şifreleme yapamasın diye kilit şifre 12345

    if (strcmp(sifre, "12345") == 0) {
        D_Listesi;
        printf("Dosya seciniz\n");
        scanf("%39s", fin);
        printf("cikti dosyasina uzantisi ile beraber ad veriniz:\t");
        scanf("%39s", fout);
        printf("Anahtar deger seciniz\n");
        scanf("%99s", anahtar);
        printf("Dogru sifre! Uygulama cozuluyor...\n");
        sifrele(fin, fout, anahtar);

        char cevap;
        printf("Onceki dosya silinsin mi evet ise E/e\n");
        getchar();
        scanf("%c", &cevap);
        if (cevap == 'E' || cevap == 'e') {
            remove(fin);
        }
    } else {
        printf("Yanlis sifre!\n");
    }

}

void sifrele(const char *girdi, const char *cikti, const char *anahtar) {
    FILE *fin = fopen(girdi, "rb");
    FILE *fout = fopen(cikti, "wb");
    if (!fin || !fout) {
        printf("Dosya acilamadi!\n");
        exit(1);
    }

    int k;
    int i = 0;
    int anahtar_uzunluk = strlen(anahtar);
    while ((k = fgetc(fin)) != EOF) {
        fputc(k ^ anahtar[i], fout);
        i++;
        i = i % anahtar_uzunluk;
    }

    fclose(fin);
    fclose(fout);
}
