#include "nod.h"
int Nod::findNod(int a, int b) {
    if (b==0){
        return a;

    }else {
        return findNod(b, a%b);
    }
}
