//
// Created by coola on 05.02.2023.
//

#ifndef UNTITLED2_EDUEDITION_H
#define UNTITLED2_EDUEDITION_H

#include "Edition.h"
#include "string"

using namespace std;

class EduEdition : Edition {
private:
    int countNameOfCourse;
    string nameOfCourse [3];
    int indexOfGroup[8];
public:
    string returnNameOfCourse();
    string addNameOfCourse();
    string changeNameOfCourse();
};


#endif //UNTITLED2_EDUEDITION_H
