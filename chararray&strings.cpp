#include <iostream>
using namespace std;

int checkAnagram( string a , string b ) 
{
int freq[] = {0};
// increment count for string a 
for (int i=0; i<a.length(); i++)
{
char ch = a[i];
int index = ch - 'a';
freq[index]++;
}

// decrement count for string b
for( int i=0 ; i<b.length(); i++) {
char ch = b[i];
int index = ch - 'a';
freq[index]--;
}

for(int i=0 ; i<26 ; i++ ){
if(freq[i] != 0 )
{
    cout<<"yaha aagya"<<endl;
    return false;
}
}
return true;
}


int main() {

string a = "babbar";
string b = "rbbbaa";

cout << checkAnagram(a,b) << endl;

}