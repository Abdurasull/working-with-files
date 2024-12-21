#include <stdio.h>
#include <string.h>

int main()
{
    // hotiradan input nomli pointer yaratib oldik
    FILE *input = fopen("input1.txt", "r");
    FILE *input1 = fopen("input2.txt", "r");
    FILE *output1 = fopen("output1.txt", "w");

    // agar  hotiradan olmoqchi bolgan manzilimizdan hatolik bolsa
    if (input == NULL)
    {
        perror("input file yuq");
        return 1;
    }

    // fayllardan so`zlarni ajratib olish uchun o`zgaruvchilar yaratib oldik
    char string1[50], string2[50];

    // qo`yidagi loopda fayllardagi so`zlarni boshqa bir faylda bir qatorda qo`shib olish uchun ishlatamiz
    while (!feof(input))
    {
        fscanf(input, "%s", string1);
        fscanf(input1, "%s", string2);
        fprintf(output1, "%s - %s\n", string1, string2);
    }
}