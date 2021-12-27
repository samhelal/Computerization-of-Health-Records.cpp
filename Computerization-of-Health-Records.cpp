/*3.16 (Computerization of Health Records) A health-care
issue that has been in the news lately is the computerization of
health records. This possibility is being approached cautiously
because of sensitive privacy and security concerns, among
others. [We address such concerns in later exercises.](c++ how to program)*/
#include <iostream>
using namespace std ;
#include <string>
#include "Computerization-of-Health-Records.h"

int main(){

    HealthProfile jan ("Jan","Green","Male",5,5,2000,2,170) ;
    cout << " Enter Date " << endl ;
    int date (0) ;
    cin >> date ;
    jan.setDate(date) ;
    jan.setAge(jan.getAge()) ;
    jan.setMaximumHeartRate(jan.getMaximumHeartRate());
    cout << jan.displayHealthProfile() << endl ;
    cout << "The age is : " << jan.getAge() << endl ;
    cout << "The maximum heart rate is : " << jan.getMaximumHeartRate()<<endl;
    cout << "The minimum target rate is :" << jan.getMinimumTargetRate()<<endl;
    cout << "The Miximum target rate is :" << jan.gatMaximumTargetRate()<<endl;
    cout << "The BMI is :" << jan.getBMI() << endl ;
    if(jan.getBMI()<18.5){
        cout << "BMI VALUE  : Underweight" << endl ;
    }
    if(jan.getBMI()<24.9){
        cout << "BMI VALUE  : Normal " << endl ;
    }
    if(jan.getBMI()<29.9){
        cout << "BMI VALUE  : Overweight " << endl ;
    }

    if(jan.getBMI()>30){
        cout << "BMI VALUE  : Obese " << endl ;
    }



}