//Set A Question 2
#include <iostream>

using namespace std;

void isOperator(string str)
{
    string word = "";
    bool Flag = false;
    for (auto i : str)
    {
        if (i == 37 || i == 42 || i == 43 || i == 45 || i == 47)
        {
            Flag = true;
            cout << "Operator" << endl;
            break;
        }
    }
    if (Flag == false)
    {
        cout << "Not an Operator" << endl;
    }
}

int main()
{
    string input;
    getline(cin, input);
    isOperator(input);
    return 0;
}