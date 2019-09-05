#include <stdio.h>

int main()
{
    int i = 3;

    while (i > 0)
    {
        printf("Gjør dette 3 ganger\n");
        i -= 1;
    }

    i = 3;
    do {
        printf("Gjør dette 3 ganger\n");
        i--;
    } while (i > 0);

    for (int i = 0; i < 3;i++)
    {
        printf("Gjør dette 3 ganger\n");
    }

    return 0;
}
