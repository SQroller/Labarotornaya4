//
// Created by coola on 05.02.2023.
//

#ifndef UNTITLED2_SCIENEDITION_H
#define UNTITLED2_SCIENEDITION_H

#include "Edition.h"

using namespace std;

class ScienEdition : Edition{
private:
    int countNameOfCourse;
    string nameOfCourse[3];
public:
    string returnNameOfCourse();
    string addNameOfCourse();
    string changeNameOfCourse();
};


#endif //UNTITLED2_SCIENEDITION_H
