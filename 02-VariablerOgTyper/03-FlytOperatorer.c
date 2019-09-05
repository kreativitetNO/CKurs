#include <stdio.h>

int main()
{
    double tall1 = 5;
    double tall2 = 10;

    double tall3 = tall1 + tall2;

    printf("%f\n", tall3);

    tall3 = tall1 - tall2;

    printf("%f\n", tall3);

    tall3 = tall1 * tall2;

    printf("%f\n", tall3);

    tall3 = tall1 / tall2;

    printf("%.2f\n", tall3);

    return 0;
}
