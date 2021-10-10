#include "plain.h"

void In(plain &p, ifstream &ifst) {
    ifst >> p.range >> p.capacity;
}

void InRnd(plain &p) {
    p.range = rand() % 500 + 501;
    p.capacity = rand() % 20 + 1;
}

void Out(plain &p, ofstream &ofst) {
    ofst << "It is a plane: range = " <<
            p.range << ", capacity = " <<
            p.capacity << ", ";
}