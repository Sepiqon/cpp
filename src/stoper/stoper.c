#include "stoper.h"
void stoperStart(struct Stoper *stoper)
{
    gettimeofday(&(stoper->startv), NULL);
}
/*
 * Gets time in uS
 */
int stoperStop(struct Stoper *stoper)
{
    gettimeofday(&(stoper->stoptv), NULL);
    return (stoper->stoptv.tv_sec - stoper->startv.tv_sec) * 1000000 + stoper->stoptv.tv_usec - stoper->startv.tv_usec;
}