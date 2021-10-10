#include "shape.h"

shape* In(ifstream &ifst) {
    auto *s = new shape;
    int k;
    ifst >> k >> s->speed >> s->distance;
    switch (k) {
        case 1:
            s->k = shape::PLAIN;
            In(s->p, ifst);
            return s;
        case  2:
            s->k = shape::TRAIN;
            In(s->t, ifst);
            return s;
        case 3:
            s->k = shape::SHIP;
            In(s->sh, ifst);
            return s;
        default:
            return  0;
    }
}

shape* InRnd() {
    auto *s = new shape;
    int k = rand() % 3 + 1;
    s->speed = rand() % 10 + 1;
    s->distance = 100 + (rand() % 900 + 1);
    switch (k) {
        case 1:
            s->k = shape::PLAIN;
            InRnd(s->p);
            return s;
        case  2:
            s->k = shape::TRAIN;
            InRnd(s->t);
            return s;
        case 3:
            s->k = shape::SHIP;
            InRnd(s->sh);
            return s;
        default:
            return  0;
    }
}

void Out(shape &s, ofstream &ofst) {
    switch (s.k) {
        case shape::PLAIN:
            Out(s.p, ofst);
            ofst << "speed = " << s.speed <<
                    ", distance = " << s.distance <<
                    ", ideal time = " << Time(s);
            break;
        case shape::TRAIN:
            Out(s.t, ofst);
            ofst << "speed = " << s.speed <<
                 ", distance = " << s.distance <<
                 ", ideal time = " << Time(s);
            break;
        case shape::SHIP:
            Out(s.sh, ofst);
            ofst << "speed = " << s.speed <<
                 ", distance = " << s.distance <<
                 ", ideal time = " << Time(s);
            break;
    }
}

double Time(shape &s) {
    return s.distance / s.speed;
}

