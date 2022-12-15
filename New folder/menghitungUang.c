#include <stdio.h>
#include <stdlib.h>

int main(){
int i, jumlah, uang;
int pecahan[16] = {
    500000, 200000, 100000, 50000,  20000,  10000,
    5000  ,   2000,   1000,   500,    200,
    100   ,    50 ,     10,     5,      1
};

printf("Jumlah uang: ");
scanf("%i", &uang);
printf("-----------------------\n");
printf("Pecahan\t\tJumlah\n");
printf("-----------------------\n");

    //Pengulangan setiap pecahan 
for (i = 0; i <= 15; i++)
{
    //Rumus jumlah pecahan uang 
    jumlah = uang / pecahan[i];
    //Rumus sisa uang setelah dikurangi pecahan sebelumnya
    uang %= pecahan[i];
    printf("%6i\t\t%3i\n", pecahan[i], jumlah);
}

printf("-----------------------\n");

return 0;
}