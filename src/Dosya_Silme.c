#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <windows.h>
#define D_Listesi system("dir")

#else

#include <unistd.h>
#define D_Listesi system("ls")

#endif

void silme(){
    char silinen[100];
    system("date /T && time /t");
    system("color b");
    D_Listesi;
    printf("silmek icin dosya sec\n");
    scanf("%99s",silinen);
    remove(silinen);
}
