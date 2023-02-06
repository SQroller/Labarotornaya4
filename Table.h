//
// Created by coola on 06.02.2023.
//

#ifndef UNTITLED2_TABLE_H
#define UNTITLED2_TABLE_H
#include "map"
#include "Edition.h"

using namespace std;

class Table {
private:
    map<int,Edition*> table;
    int cipher;
    Edition edition;
public:
    Table(int cipher, const Edition &edition);

    void add();
    Edition* found(int);
    void remove(int);
    friend ostream& operator<<(ostream&, Table&);
};


#endif //UNTITLED2_TABLE_H
