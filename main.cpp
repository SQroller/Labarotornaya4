#include <iostream>
#include "Edition.h"
#include "ArtEdition.h"
#include "EduEdition.h"
#include "ScienEdition.h"

int main() {
    int nameTag;
    cout<<"Write number of Publish: \n";
    cout<<"0 - just Publish;\n"
          "1 - Eduacation Publish;\n"
          "2 - Scientific Publish;\n"
          "3 - Art Publish.\n";
    cin>>nameTag;
    if(nameTag == 0){
        Edition edition(nameTag);
    }else
    if(nameTag == 1){
        EduEdition eduedition();
    }else
    if(nameTag == 2){
        ScienEdition scienedition();
    }else
    if(nameTag == 3){
        ArtEdition artedition();
    }else{
        cout<<"Invalid value of number Publishing!!!"
    }
    return 0;
}
