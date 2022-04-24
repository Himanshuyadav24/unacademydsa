#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << "value of a is : " << a << endl;

    bool b =0;
    cout<<"value of b is: "<<b<<endl;
    cout<<"The size of float is "<<sizeof(b)<<endl;


    float f = 1.23;
    cout<<"Value of f is : "<<f<<endl;
    cout<<"The size of float is "<<sizeof(f)<<endl;


    char ch = 'd';
    cout<<"value of ch is "<<ch<<endl;
    cout<<"The size of ch is "<<sizeof(ch)<<endl;


    float val1 =5.0;
    int val2 = 3;

    int ans = val1/val2;
    cout<<"ans is "<<ans<<endl;
    cout<<"ans is"<<(5.0/3)<<endl;

    char character = 'a';
    int num = int(character);

    cout<<"value of num is "<<num<<endl;

    return 0;
}