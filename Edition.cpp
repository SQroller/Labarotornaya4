//
// Created by coola on 05.02.2023.
//

#include "Edition.h"

#include <utility>

using namespace std;

void Edition::output() {
    cout << "Surname and Initials: " << family.surname << " ";
    cout << family.initialA << " " << family.initialB << "\n";
    cout << "Name of publish: " << name << "\n";
    cout << "Year and publishing: " << year.year << " , " << year.publish << "\n";
    cout << "Cout of publish: " << countOfPub << "\n";
}

int Edition::returnType() const {
    if(nameTag == 1){
        cout<<"Type of pub: Eucation!\n";
    }
    if(nameTag == 2){
        cout<<"Type of pub: Scientific!\n";
    }
    if(nameTag == 3){
        cout<<"Type of pub: Art!\n";
    }
    return nameTag;
}

int Edition::returnCountOfPub() const {
    cout << "CoutOfPublishing" << countOfPub << "\n";
    return countOfPub;
}

void Edition::changeCountOfPub() {
    cout << "Enter new count of publish: " << "\n";
    cin >> countOfPub;
}

Edition::Edition(int nameTag) {
    cout << "Write all elements of Edition";
    this->nameTag =  nameTag;
    string surname;
    char initialA;
    char initialB;
    cin >> surname >> initialA >> initialB;
    family.surname = surname;
    family.initialA = initialA;
    family.initialB = initialB;
    cin>>name;
    int year1;
    cin>>year1;
    string pub;
    cin>>pub;
    year.year = year1;
    year.publish = pub;
    cin>>countOfPub;
}

int Edition::getId() const {
    return id;
}

void Edition::setId(int id) {
    Edition::id = id;
}
