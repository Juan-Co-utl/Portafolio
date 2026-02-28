#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls"); system("COLOR 20");
/*
    //system("COLOR P");  //mostrar el menu de colores.
    system("COLOR 02");
    printf("WELCOME MARIA \n\n");
    system("PAUSE");
    system("cls");
    system("COLOR 05");
    printf("WELCOME VICTORIA");

*/
const char *const titulo="\033[8;40;32m";
const char *const normal="\033[0m";
const char *const subtitulo="\033[4;43;1;32m";

printf("WEALCOME %sMARIA%s \n\n",titulo,subtitulo);

return 0;
}
