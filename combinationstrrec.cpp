#include <iostream>
using namespace std;

void findCombination(string input, int index, string output)
{
    /// base case
    if (index == input.length())
    {
        cout << output << endl;
        return;
    }

    char ch = input[index];
    // nospace
    output.push_back(ch);
    findCombination(input, index + 1, output);

    // withspace
    output.push_back(' ');

    if(input[index+1] != '\0')
    {
    findCombination(input, index + 1, output);
    }
}

int main()
{
    string input = "123";
    int index = 0;
    string output = "";
    findCombination(input, index, output);

    return 0;
}