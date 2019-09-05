#include <stdio.h>

int main()
{
    char* navn = "Christian";
    int alder = 10;
    double hoyde = 1.82;

    char etternavn[50] = "Scott";

    printf("Hei, mitt navn er %s og jeg er %x år. Jeg er %.2f\n", navn, alder, hoyde);
    printf("Etternavn: %s\n", etternavn);

    // What is difference between char* and char[]
    // navn[1] = 'M';
    etternavn[2] = 'i';

    printf("Etternavn: %s\n", etternavn);

    return 0;
}