#include <iostream>
using namespace std;


int main(void){

cout << "======================\n";
cout << "==calculate your age==\n";
cout << "======================\n";

int age;
cout <<"how old are you? :";
cin >> age;
int age_in_mounths = age * 12;
int age_in_days = age * 365;
int age_in_hours = age_in_days * 24;
int age_in_minuts = age_in_hours * 60;
int age_in_seconds = age_in_minuts * 60;

cout << "age in mounths :" <<age_in_mounths <<" mounth\n";
cout << "age in days :" <<age_in_days <<" day\n";
cout << "age in hours :" <<age_in_hours <<" hour\n";
cout << "age in minuts :" <<age_in_minuts <<" minut\n";
cout << "age in seconds :" <<age_in_seconds <<" second";



}
