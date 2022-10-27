#include<iostream>
using namespace std;

void reverse(int i, int j, string &name)
{

    cout<<"Call received for "<< name <<endl;

    //base case
    if(i>j)
    return;

    swap(name[i],name[j]);
    i++;
    j--;

    //recursive call
    reverse(i,j,name);
}

int main()
{
    string name = "himanshu";
 
    reverse(0,name.length()-1, name);

    cout<<name<<endl;

    return 0;
}