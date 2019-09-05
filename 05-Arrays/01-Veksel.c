#include <stdio.h>

int main()
{
    int skuff[5];
    skuff[0] = 5;
    skuff[1] = 3;
    skuff[2] = 1;
    skuff[3] = 5;
    skuff[4] = 9;

    int i = 0; // 0 er en god ide for i
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", skuff[i]); // Skriver ut verdien i skuff i
    }

/*
    int skuff0 = 434;
    int skuff1 = 434;
    int skuff2 = 434;
    int skuff3 = 434;
    int skuff4 = 434;
    */
}
