#include "mcd.h"

unsigned int mcd(unsigned int a, unsigned int b) {
    if (a == b){return a;}
    if (b>a){return mcd(b, a-b);}
    return mcd(a, b-a);
}
