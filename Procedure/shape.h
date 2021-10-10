//
// Created by pasha on 10.10.2021.
//

#ifndef PROCEDURE_SHAPE_H
#define PROCEDURE_SHAPE_H

#include "plain.h"
#include "train.h"
#include "ship.h"

struct shape {
    int speed;
    double distance;
    enum key {PLAIN, TRAIN, SHIP};
    key k;
    union {
        plain p;
        train t;
        ship sh;
    };
};

shape *In(ifstream &ifdt);

shape *InRnd();

void Out(shape &s, ofstream &ofst);

double Time(shape &s);

#endif //PROCEDURE_SHAPE_H
