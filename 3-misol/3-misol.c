#include <stdio.h>
#include <string.h> //string lar bilan ishlash kutubxonasini chaqirdik

int main()
{
    // so`zlarni uzunligini aniqlash uchun o`zgaruvchi yartdik
    char word[200];

    // input.txt fayi bn ishlash un ram hotiradan(head) joy ajratamiz
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    // agar head hotiradan olmoqchi bolgan manzilimizdan hatolik bolsa
    if (input == NULL)
    {
        perror("input file yuq");
    }
    //
    int count = 0, countnext;
    
    printf("nechanchi qatordagi so`zni tashlab ketmoqchisiz?\nIltimos bu erga kiriting: ");
    scanf("%d", &countnext);
    // feof() function yordamida fayl oxiriga yetganligini ifodalashimiz mn
    while (fgets(word, sizeof(word), input))
    {
        count++;
        if (count != countnext)
        {
            fprintf(output, "%s\n", word);
            printf("%s\n", word);
        }
    }
    
}