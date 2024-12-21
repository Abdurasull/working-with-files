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

    // fayllardan barcha belgilarni o`qib olish un o`zgaruvchi yaratib oldik
    char n;
    int sum = 0, minus = 0, division = 0, sqr = 0, skob_1 = 0, skob_0 = 0;
    while (!feof(input))
    { // bilgilarni aniqlab olish un switch dan foydalanamiz
        fscanf(input, "%c", &n);
        switch (n)
        {
        case '+':
            sum++;
            break;
        case '*':
            sqr++;
            break;
        case '-':
            minus++;
            break;
        case '/':
            division++;
            break;
        case '(':
            skob_0++;
            break;
        case ')':
            skob_1++;
            break;
        default:
            break;
        }
    }
    if (skob_0 == skob_1)
    {
        fprintf(output1, "+ %d marta\n - %d marta\n / %d marta\n * %d marta\n ()) %d marta\n ", sum, minus, division, sqr, skob_1);
    }
    else if (skob_0 > skob_1)
    {
        fprintf(output1, "+ %d marta\n - %d marta\n / %d marta\n * %d marta\n () %d marta va ( %d ta ortiqcha\n ", sum, minus, division, sqr, skob_0, skob_0 - skob_1);
    }
    else
    {
        fprintf(output1, "+ %d marta\n - %d marta\n / %d marta\n * %d marta\n () %d marta va ) %d ta ortiqcha\n ", sum, minus, division, sqr, skob_0, skob_1 - skob_0);
    }
}