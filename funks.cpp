#include "funks.h"

/*

int tipo;
int inum1;
double dnum1;
int inum2;
double dnum2;

*/

funks::funks(int _tipo, int _num1, int _num2) {
    tipo = _tipo;
    inum1 = _num1;
    inum2 = _num2;
}

funks::~funks() {
    //dtor
}

funks::funks(const funks& other) {
    //copy ctor
}

funks::sumarInt() {

    return inum1 + inum2;

}
