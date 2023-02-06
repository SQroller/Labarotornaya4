//
// Created by coola on 05.02.2023.
//

#include "EduEdition.h"
#include "string"

using namespace std;

string EduEdition::returnNameOfCourse() {
    for (int i = 0; i < countNameOfCourse; ++i) {
        cout << "Name of course " << i + 1 << ": ";
        cout << nameOfCourse[i] << "\n";
    }
    return *nameOfCourse;
}

string EduEdition::addNameOfCourse() {
    if (countNameOfCourse < 3) {
        cout << "Enter new name of course: ";
        cin >> nameOfCourse[countNameOfCourse];
        countNameOfCourse++;
    }else{
        cout << "Maximum value of count of course!!!";
    }
    return *nameOfCourse;
}

string EduEdition::changeNameOfCourse() {
    cout<<"Write number of course for change\n";
    cout<<"1->"<<countNameOfCourse<<"\n";
    int n;
    cin>>n;
    if(n>=1||n<=countNameOfCourse){
        cout<<"Write new course\n";
        cin>>nameOfCourse[n-1];
    }
    return *nameOfCourse;
}

