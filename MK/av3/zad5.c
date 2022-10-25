#include<stdio.h>

int main () {
    int cena, rati, kamatnaStapka;
    scanf("%d %d %d", &cena, &rati, &kamatnaStapka);
    int mesecnaRataOsnova = cena / rati;
    float mesecnaKamata = mesecnaRataOsnova / 100.0 * kamatnaStapka;
    float vkupnoMesecno = mesecnaRataOsnova + mesecnaKamata;
    float vkupnoCelosno = vkupnoMesecno * rati;
    printf("Mesecnata rata iznesuva %.2f, a na kraj ke se isplati %.2f", vkupnoMesecno, vkupnoCelosno);
    return 0;
}