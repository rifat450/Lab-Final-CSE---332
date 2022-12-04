//Set B Question 2
#include <iostream>

using namespace std;

void isOperator(string str)
{
    string word = "";
    bool enter = false;
    for (auto x : str)
    {
        if (x == 37 || x == 42 || x == 43 || x == 45 || x == 47)
        {
            enter = true;
            cout << "Operator" << endl;
            break;
        }
    }
    if (enter == false)
    {
        cout << "Not an Operator" << endl;
    }
}

int main()
{
    string sample;
    getline(cin, sample);
    isOperator(sample);
    return 0;
}