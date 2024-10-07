#include<iostream>
#include<memory>
class MyClass{
    public:
        MyClass(){
            std::cout<<"Constructor"<<std::endl;
        }
        ~MyClass(){
            std::cout<<"Destructor"<<std::endl;
        }
};

int main(){
    { //SCOPE
        //constructor invoked
        std::unique_ptr<MyClass>ptr  = std::make_unique<MyClass>();
        //destructor invoked
    }
    system("pause>nul");//seems like pressing a key to continue in the terminal
}
