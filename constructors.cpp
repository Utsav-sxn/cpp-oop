#include<iostream>

using namespace std;

//Default constructor is provided by compiler if no constructor is created by us

// constructor doesnt have any return type

class People{
    public:
        int id;
        string Name;
        int age;
        int phno;

        People(int id, string name,int age,int phno){
            id = id;
            Name = name;
            age = age;
            phno =phno;
        }

        void show(){
            cout<<"details: "<<Name<<endl;
            
        }
        
};

int main(){
    People p1 = People(1,"Utsav",20,930139999);
    p1.show();
}