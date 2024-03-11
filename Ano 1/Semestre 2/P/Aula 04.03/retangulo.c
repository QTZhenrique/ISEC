#include <stdio.h>
#include "retangulo.h"

void printRet(ret r){
    printf("\nC1: (%d %d)", r.canto.x,r.canto.y);
    printf("\nC2: (%d %d)",  r.canto.x + r.larg, r.canto.y);
    printf("\nC2: (%d %d)",  r.canto.x + r.larg, r.canto.y + r.alt);
    printf("\nC1: (%d %d)", r.canto.x,r.canto.y + r.alt);
}

void initRet(ret* p){

}

int areaR(ret r){
    return 0;
}

int dentroR(ponto2D a){
    return 0;
}

void moveR(ret* p, int dx, int dy){

}