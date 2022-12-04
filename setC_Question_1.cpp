// SET C Question 1
#include <iostream>

using namespace std;

void findLowercase(string str)
{
    string lowerCaseWord = "";
        for (auto i : str)
        {
            if (i >= 97 && i <= 122)
            {
                lowerCaseWord += i;
            }
            else
            {
                continue;
            }
        }
        cout<<lowerCaseWord<<endl;
}

int main()
{
    string takeInput;
    getline(cin, takeInput);
    findLowercase(takeInput);
    return 0;
}

