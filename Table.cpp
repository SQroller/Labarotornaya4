//
// Created by coola on 06.02.2023.
//

#include "Table.h"

void Table::add() {
    cout<<"Write new element of table:\n";
    int nameTag;
    Edition edition1(nameTag);
    Edition* p = &edition1;
    table.insert(edition1.returnType()+table.size()+1, p);
}

Edition *Table::found(int cipher) {
    cout<<table.find(cipher);
    return table.find(cipher);
}

void Table::remove(int cipher) {
    table.delete(cipher);
}

ostream &operator<<(ostream &, Table &) {
    return <#initializer#>;
}

Table::Table(int cipher, const Edition &edition) : cipher(cipher), edition(edition) {
    this->cipher = cipher;
    this->edition = edition;
    Edition* p = &edition;
    this->table = table.insert(cipher, p);
}
