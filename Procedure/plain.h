#ifndef TASK1_PLAIN_H
#define TASK1_PLAIN_H

#include <fstream>
using namespace std;

struct plain {
    int range, capacity;
};

void In(plain &p, ifstream &ifst);

void InRnd(plain &p);

void Out(plain &p, ofstream &ofst);

#endif //TASK1_PLAIN_H
