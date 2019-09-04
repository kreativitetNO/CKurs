#include <stdio.h>

int main()
{
    int i = 0x13372468;
    int pos = 1;
    unsigned char b = *((unsigned char*)&i + pos);
    printf("%d = %u\n", pos, (unsigned)b);
    return 0;
}
