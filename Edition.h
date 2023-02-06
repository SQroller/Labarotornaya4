//
// Created by coola on 05.02.2023.
//

#ifndef UNTITLED2_EDITION_H
#define UNTITLED2_EDITION_H

#include "iostream"

using namespace std;

class Edition {
private:
    int nameTag{};
    struct Family{
         string surname;
         char initialA;
         char initialB;
    };
    Family family;
    string name;
    struct yearAndPub{
         int year;
         string publish;
    };
    yearAndPub year;
    int countOfPub{};
public:
    explicit Edition(int);
    void output();
    [[nodiscard]]//Появляется в объявлении функции, объявлении перечисления или объявлении класса.
    int returnType() const;
    [[nodiscard]]//Если объявленная функция nodiscardили функция, возвращающая перечисление или класс, объявленный nodiscardпо значению
    int returnCountOfPub() const;
    void changeCountOfPub();
};


#endif //UNTITLED2_EDITION_H
