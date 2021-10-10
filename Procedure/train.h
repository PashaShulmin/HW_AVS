//
// Created by pasha on 10.10.2021.
//

#ifndef PROCEDURE_TRAIN_H
#define PROCEDURE_TRAIN_H

#include <fstream>
using namespace std;

struct train {
    int number_of_cars;
};

void In(train &t, ifstream &ifst);

void InRnd(train &t);

void Out(train &t, ofstream &ofst);

#endif //PROCEDURE_TRAIN_H
