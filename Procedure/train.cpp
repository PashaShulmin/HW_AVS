#include "train.h"

void In(train &t, ifstream &ifst) {
    ifst >> t.number_of_cars;
}

void InRnd(train &t) {
    t.number_of_cars = rand() % 100 + 1;
}

void  Out(train &t, ofstream &ofst) {
    ofst << "This is a train: number of cars = " << t.number_of_cars << ", ";
}

