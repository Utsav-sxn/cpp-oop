//Compile time - Function overloading , constructor overloading,operator overloading
//Run time - Function overriding


//Function Overriding

/*

#include<iostream>
using namespace std;

class AbstractPeople{
    virtual void setId(int id)=0;
};

class People:AbstractPeople{
    private:
        int id;
    protected:
        string name;
    public:
        //Name Setter
        void setName(string name){
            this->name = name;
        }
        //Id Setter
        void setId(int id)override{
            this->id = id;
            cout<<"ID "<<this->id<<endl;
        }
        void hello(){
            cout<<"Hello "<<name<<endl;
        }
};

class Developer:public People{
    public:
        void hello(){
            cout<<"Hello "<<name<<" You are a Developer"<<endl;
        }
};

class Teacher:public People{
    public:
        void hello(){
            cout<<"Hello "<<name<<" you are a Teacher"<<endl;
        }
};

int main(){
    People p1;
    p1.setName("Mukesh");
    p1.hello();
    p1.setId(909);
    Teacher t1;
    t1.setName("Shubh");
    t1.hello();
    Developer d1;
    d1.setName("Utsav");
    d1.hello();
}
*/


//Dynamic Method Dispatch

#include<iostream>

class Apple{
    public:
        virtual void name(){
            std::cout<<"An Apple"<<std::endl;
        }
};

class Banana:public Apple{
    public:
        void name(){
            std::cout<<"A Banana"<<std::endl;
        }
};

class Cherry:public Apple{
    public:
        void name(){
            std::cout<<"A Cherry"<<std::endl;
        }
};

int main(){
    Banana b;
    Cherry c;
    
    Apple *ref1 = &b;
    Apple *ref2 = &c;
    ref1->name();
    ref2->name();
}

