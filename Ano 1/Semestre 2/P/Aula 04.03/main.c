#include <stdio.h>
#include "ponto.h"
#include "retangulo.h"

int main(){

    ret r1 = {{2,3}, 10,20}, r2;
    ponto2D  a = {5,5};
    ponto2D p1 = {3, 5}, p2;

    printRet(r1);

    initRet(&r2);
    printRet(r2);

    printf("Area &d\n", areaR(r1));

    printPonto(p1);

    initPonto(&p2);
    printPonto(p2);

    movePonto(&p1, -4, -1);
    printPonto(p1);
    printf("Quadrante deste ponto: %d\n", quadrante(p1));


    return 0;
}
