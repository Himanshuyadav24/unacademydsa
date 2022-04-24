#include<iostream>
using namespace std;



//call stacking 

void suresh(int k)
{
    cout<<"suresh interger "<<k<<endl;
}
void rahul(int m)
{
    cout<<"rahul interger "<<m<<endl;
    m++;
    suresh(m);
}

void ramesh(int n )
{
    cout<<"ramesh interger "<<n<<endl;
    n++;
    rahul(n);
}

int main()
{
    int n = 21;
    ramesh(n);

    cout << "wapas in main function " << n <<endl;


//pass by value
// void printNum(int num)
// {
//     int n = 0;
//     n++;
//     cout<<n<<endl;
// }

// void main()
// {
//     int n = 5;
//     printNum(n);
//     --n;
//     cout<<n<<endl;

return 0;

}