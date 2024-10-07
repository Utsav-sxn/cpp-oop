// Hiding complexity and showing only essential details

#include <iostream>
using namespace std;

class abstractPeople
{
    virtual void updateAge(int age) = 0;
};

class People : abstractPeople
{
private:
    // data members
    int age = 18;
    string name;
    string city;

public:
    // constructors
    People() {}

    People(string name, string city) {}

    // member functions (methods)

    // Name
        // setter
    void setName(string name)
    {
        this->name = name;
    }
        // getter
    void getName()
    {
        cout << name << endl;
    }

    // Age
        //  setter
    int inputAge()
    {
        cout << "Enter Age:" << endl;
        int age;
        cin >> age;
        if (age < 18)
        {
            cout << "Rejected :D" << endl;
            return 18;
        }
        else
            return age;
    }

    // overridding abstract method
    void updateAge(int age) override
    {
        if (age > -this->age)
            this->age = age;
        else
        {
            cout << "you can't age backward.can you? ;)" << endl;
        }
        cout << "Age: " << this->age;
    }
};

int main()
{
    People p1;
    p1.setName("Jethalal");
    p1.getName();
    int age = p1.inputAge();
    p1.updateAge(age);
}