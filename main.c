#include <stdio.h>

void putexa(long n)
{
    char *buff = "0123456789abcdef";

    if (n > 15)
    {
        putexa(n / 16);
        putexa(n % 16);
    }
    else
        printf("%c", buff[n]);
}


int main(void)
{
    long i = 600;

    putexa(i);
}