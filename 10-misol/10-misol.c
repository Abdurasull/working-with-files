#include <stdio.h>
#include <string.h>

int main()
{
    // hotiradan input nomli pointer yaratib oldik
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    // agar  hotiradan olmoqchi bolgan manzilimizdan hatolik bolsa
    if (input == NULL)
    {
        perror("input file yuq");
        return 1;
    }

    // fayllardan barcha belgilarni o`qib olish un o`zgaruvchi yaratib oldik
    int number[100], count = 0;

    while (!feof(input))
    {
        fscanf(input, "%d", &number[count]);
        count++;
    }

    fprintf(output, "%d  %d", number[0], number[count - 1]);
}