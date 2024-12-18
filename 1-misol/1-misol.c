
#include <stdio.h>

int main()
{
    FILE *input_txt = fopen("input_txt.txt", "r");
    FILE *output_txt = fopen("output_txt.txt", "w");

    if (input_txt == NULL)
    {
        perror("input file yuq");
        return 1;
    }

    int number; 
    float s = 0;

    for (int i = 0; i < 10; i++)
    {
        fscanf(input_txt, "%d", &number);
        s += number;
    }

    fprintf(output_txt, " result %f", s/10);

    fclose(input_txt);
    fclose(output_txt);
}