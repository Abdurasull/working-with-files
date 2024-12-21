#include <stdio.h>
#include <string.h>

int main()
{
    // hotiradan input nomli pointer yaratib oldik
    FILE *input = fopen("input.txt", "r");
    FILE *output1 = fopen("output.txt", "w");

    // agar  hotiradan olmoqchi bolgan manzilimizdan hatolik bolsa
    if (input == NULL)
    {
        perror("input file yuq");
        return 1;
    }

    // fayllardan butun  son;arni ajratib olish uchun o`zgaruvchilar yaratib oldik
    int number;

    while (!feof(input))
    {
        fscanf(input, "%d", &number);
        fprintf(output1, "%c", number);
    }
}