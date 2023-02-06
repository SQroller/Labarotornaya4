//
// Created by coola on 05.02.2023.
//

#ifndef UNTITLED2_ARTEDITION_H
#define UNTITLED2_ARTEDITION_H

#include "Edition.h"

using namespace std;

class ArtEdition : Edition {
private:
    string theme;
public:
    string returnTheme();
};


#endif //UNTITLED2_ARTEDITION_H
