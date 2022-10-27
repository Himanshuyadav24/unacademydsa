#include <iostream>
using namespace std;

// class creation
class Human
{
// properties -> Data member
public:
    char gender;
    int age;

    // behaviour

    //constructor
    Human()
    {
        cout<<"I am in constructor"<<endl;
        age = 1; 
        gender = 'f';
    }

    //parameterised constructor
    Human(int age,char gender)
    {
        cout<<"I am in P constructor"<<endl;
        this -> age = age;
        this -> gender = gender;
    }

    //copy constructor
    Human(Human& temp)
    {
        cout<<"I am in copy constructor"<<endl;
        this->age =  temp.age;
        this->gender = temp.gender;
    }
    //getter
    char getGender()
    {
        return gender;
    }

    //setter
    //setter void hota hai qki isme kuch return nhi krre sirf set krre hai
    void setGender(char ch)
    {
        gender = ch;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int a)
    {
        age = a;
    }

    //destructor
    ~Human(){
        cout<<"Destructor called"<<endl;
    }
};

int main()
{

    // object creation
    // Human obj;
    // cout<<sizeof(obj)<<endl;

    // obj.age = 23;
    // // access
    // cout << obj.age << endl;
    
    //static
    Human ramesh;
    //access
    ramesh.age = 123;
    cout<<ramesh.age<<endl;


    //synamic
    Human*suresh = new Human();
    //access
    cout<<suresh->age<<endl;

    //parameterised 
    Human*mukesh = new Human(12,'f');
    cout<<mukesh -> gender <<endl;

    //copy constructor
    Human jignesh(ramesh);
    cout<<jignesh.age<<endl;

    return 0;
}