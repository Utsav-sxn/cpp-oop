// data members and member functions are grouped together so that no other class can access and modify the data of that class directly

// we can access the data using methods 

#include<iostream>
using namespace std;

class People{
    private:
        string name;
        string comp;
        int age;
    public:
        //constructors
        People(){}

        People(string Name,string Comp,int Age){}

        //methods
        void Intro(){}
            //setters
        void setName(string name){
            if(name.length() > 5)
                cout<<"Nope"<<endl;
            else
            this->name = name;
            }
            //getters
        void getName(){cout<<name;}
};

int main(){
    People p1;
    p1.setName("Mukesh");
    p1.getName();
}