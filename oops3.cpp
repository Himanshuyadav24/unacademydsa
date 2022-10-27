#include <iostream>
using namespace std;

class Demo
{
    public:
    int first;
    int second;
    static int total;


    // urinary operator overloading
    void operator++()
    {
        cout << "urinary operator overloaded" << endl;
    }

    // Binary operator overloading
    Demo operator+(Demo &temp)
    {

        Demo result;
        result.first = this->first + temp.first;
        result.second = this->second + temp.second;
        return result;
    }
};

class Human
{
    public:
    int hand;
    int legs;
};

void operator<<(ostream &os, Human& obj)
    {
        cout << obj.hand << " ";
        cout << obj.legs <<" " << endl;
    }

//Definition of static is important
int Demo::total=0;


class Base{
    public:
    virtual void speak()
    {
        cout<<"I am in base class"<<endl;
    }
};


class derived : public Base{
    public:
    void speak()
    {
        cout<<"I am in derived class"<<endl;
    }
};

class a{
    private:
    int a;
    friend class b;
};

class b{
    void show(a&obj)
    {
        cout<<obj.a;
    }
};


int main()
{
    // Demo a;
    // Demo b;

    // Demo c = a+b;

    // ++b;

    Demo obj; 
    // cout << obj;
    //Define is imp
    cout<<obj.total;

    Human h;
    cout<<h;
    // cout<<obj.total<<endl;
    Base*bptr;
    derived d;
    bptr = &d;
    bptr->speak();

    return 0;
}