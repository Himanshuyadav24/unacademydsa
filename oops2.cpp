#include<iostream>
using namespace std;

// class Human
// {
//     //properties
//     protected:
//     int age;
//     int weight;
//     string name;

//     public:
//     int getAge()
//     {
//         return this->age;
//     }
// };

// class female: protected Human{
//     //inherit
//     void util()
//     {
//         cout<<this->age;
//     }

// };


//single level inheritance
// class animal
// {
//     public:
//     int age;
//     int weight;


//     public:
//     void speak()
//     {
//         cout<<"Animal is speaking"<<endl;
//     }

// };

// class dog: public animal{

// };

// class lebra: public dog{

// };


class maruti{

    public:
    string name;
};

class suzuki{
    public:
    int value;
};

//multiple inheritance
class swift: public maruti, public suzuki{


};

class math{

    public:
    int add(int a,int b)
    {
        return a+b;
    }
    //overloading
    int add(int a,int b, int c)
    {
        return a+b+c;
    }
};


int main()
{
    // Human a;
    // // a.age;
    // // a.weight;
    // // a.name;

    // female firstFemale;
    // // cout<<firstFemale.age;

    // dog d;
    // d.age;
    // d.speak();
    // lebra goldy;
    // goldy.age;
    // goldy.speak();

    swift* mc = new swift();
    mc->name = "vxi";
    cout<<mc->name<<endl;
    cout<<mc->value<<endl;


    return 0;
}