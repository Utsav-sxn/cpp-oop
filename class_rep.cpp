#include<iostream>
using namespace std;

class Employee{
// everything inside class is private by default
    public:
        string Name;
        string Company;
        int age;

        void printDetails(){
            cout<<"name "<<Name<<" Comp "<<Company<<" Age "<<age<<endl;
        }

};

int main(){
    Employee e1 = Employee();
    e1.Name = "Utsav";
    e1.Company = "Google";
    e1.age = 23;
    e1.printDetails();
}