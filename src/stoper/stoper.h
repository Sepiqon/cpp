#include <sys/time.h>
typedef struct Stoper
{
    struct timeval startv;
    struct timeval stoptv;
} Stoper;
void stoperStart(struct Stoper *stoper);
int stoperStop(struct Stoper *stoper);
