// #include <iostream>
// using namespace std;

// inculsion exculsion
// void printPowerset(string input, int index, string output)
// {
//     if (index == input.length())
//     {
//         cout << output << endl;
//         return;
//     }

//     char ch = input[index];

//     // exclude ch
//     printPowerset(input, index + 1, output);

//     // include ch
//     output.push_back(ch);
//     printPowerset(input, index + 1, output);
// }
// int main()
// {
//     string str;
//     cout << "enter the string " << endl;
//     cin >> str;
//     string output = " ";
//     printPowerset(str, 0, output);

//     return 0;
// }

// combination in a string of digit
#include <iostream>
using namespace std;

void findCombination(string input, int i, string output)
{
    if (i == input.length())
    {
        cout << output << endl;
        return;
    }
    char ch = input[i];

    // no space put character without space
    output.push_back(ch);
    findCombination(input, i + 1, output);

    // with space put character with space
    output.push_back(' ');

    if (input[i + 1] != '\0')
    {
    findCombination(input, i + 1, output);
    }
}

int main()
{
    string str = "123";
    string output = "";
    int index = 0;

    findCombination(str, index, output);

    return 0;
}

