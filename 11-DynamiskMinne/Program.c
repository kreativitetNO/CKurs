#include <stdio.h>
#include <stdlib.h>

int funk(int tall)
{
    return tall;
}

/*
malloc fungerer fordi den holder av minne i free space
array fungerer ikke fordi den holder av minne i en begrenset stack space
*/

void funk2(int* tabell)
{
    tabell[1] = 1337;
}

int main()
{
    long sensorSierAntall = 100000000;
    //                  \/ er en cast (Google det)
    int* resultater = (int*)malloc(sensorSierAntall * sizeof(int));

//    int resultater[sensorSierAntall];
    resultater[0] = 4;
    resultater[1] = 10;
    resultater[2] = 2;

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", resultater[i]);
    }

    funk2(resultater);

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", resultater[i]);
    }

    int noeGikkGalt = 1;
    if (noeGikkGalt)
    {
        return -1;
    }

    free(resultater);

    return 0;
}

/*
int resultater
int sensorISier
--------------
sdafasfasfda
==============
*/