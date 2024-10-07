// Derived/child class inherites from the base/parent/super class.inheritance leads to specialization

#include<iostream>
using namespace std;

class fruits{
    protected:
        int price=19;
    public:
        //constructor
        fruits(){}

        //member functions(methods)
        //price
            //setter
        int setPrice(int price){
            this->price = price;
            cout << price;
        }
};

class mango:public fruits{
    private:
        string color;
    public:
        void setColor(string color){
            this->color = color;
            cout<<"color:"<<color<<endl;
        }
};


int main(){
    mango m1;
    m1.setColor("Yellow");
    m1.setPrice(180);
}
