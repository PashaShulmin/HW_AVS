#include "ship.h"

void In(ship &sh, ifstream &ifst) {
    ifst >> sh.displacement;
    int t;
    ifst >> t;
    switch (t) {
        case 1:
            sh.t = sh.liner;
            break;
        case 2:
            sh.t = sh.tug;
            break;
        case 3:
            sh.t = sh.tanker;
            break;
    }
}

void InRnd(ship &sh) {
    sh.displacement = rand() % 1000 + 1;
    int t = rand() % 3 + 1;
    switch (t) {
        case 1:
            sh.t = ship::liner;
            break;
        case 2:
            sh.t = ship::tug;
            break;
        case 3:
            sh.t = ship::tanker;
            break;
    }
}

void Out(ship &sh, ofstream &ofst) {
    int t = sh.t;
    string t_to_string;
    switch (t) {
        case 1:
            t_to_string = "liner";
            break;
        case 2:
            t_to_string = "tug";
            break;
        case 3:
            t_to_string = "tanker";
            break;
    }
    ofst << "This is a ship: displacement = " <<
            sh.displacement << ",type is " << t_to_string << ", ";
}
