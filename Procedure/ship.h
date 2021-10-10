//
// Created by pasha on 10.10.2021.
//

#ifndef PROCEDURE_SHIP_H
#define PROCEDURE_SHIP_H

#include <fstream>
using namespace std;

struct ship {
    int displacement;
    enum type {
        liner = 1,
        tug = 2,
        tanker = 3
    };
    type t;
};

void In(ship &sh, ifstream &ifst);

void InRnd(ship &sh);

void Out(ship &sh, ofstream &ofst);

#endif //PROCEDURE_SHIP_H
