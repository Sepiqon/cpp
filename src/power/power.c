#include <stdio.h>
#include "../stoper/stoper.c"
char power2(unsigned int base, unsigned int expression)
{
    char e1 = 0;
    if (expression)
    {
        e1 = expression % 4;
        if (e1 == 0)
            e1 = 4;
    }
    else
    {
        return 1;
    }
    char b1 = base % 10;

    char temp = 1;
    for (int i = 0; i < e1; i++)
    {
        temp *= b1;
        temp = temp % 10;
    }
    return temp;
}
void powerMain()
{
    struct Stoper stoper;

    int p = 0;
    printf("Podaj liczbe razy: ");
    scanf("%d", &p);
    unsigned int b, e;
    for (int i = 0; i < p; i++)
    {

        printf("Podaj {podstawe} {wykladnik}: ");
        scanf("%d %d", &b, &e);

        // stoper start
        stoperStart(&stoper);
        // stuff
        char t1 = power2(b, e);
        // stoper stop
        int time = stoperStop(&stoper);

        printf("Cyfra jednosci wyniku: %d (wykonano w %d uS)\n", t1, time);
    }
}