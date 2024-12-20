#include<stdio.h>
#include<string.h>//string lar bilan ishlash kutubxonasini chaqirdik

int main(){
    // so`zlarni uzunligini aniqlash uchun o`zgaruvchi yartdik
    char  word[50], minword[50], maxword[50];

    //input.txt fayi bn ishlash un ram hotiradan(head) joy ajratamiz 
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    //agar head hotiradan olmoqchi bolgan manzilimizdan hatolik bolsa
    if (input == NULL)
    {
        perror("input file yuq");
    }
    //1-sozni input.txt faylidan chaqirib olamiz
    fscanf(input, "%s", word);
    strcpy(minword, word);
    strcpy(maxword, word);

    //feof() function yordamida fayl oxiriga yetganligini ifodalashimiz mn
    while (!feof(input)){
        fscanf(input, "%s", word);
        
        if (strlen(minword) > strlen(word))
        {
            strcpy(minword, word);
        }
        if (strlen(maxword) < strlen(word))
        {
            strcpy(maxword, word);
        }
    }
    fprintf(output, "Eng kalta so`z: %s\nEng uzun so`z: %s", minword, maxword);
}