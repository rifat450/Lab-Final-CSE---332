// Set D Question 1
#include <iostream>

using namespace std;

void countLowercase(string str)
{
    int count = 0;
        for (auto i : str)
        {
            if (i >= 97 && i <= 122)
            {
                count++;
            }
        }
        cout<<count<<endl;
}

int main()
{
    string str;
    getline(cin, str);
    countLowercase(str);
    return 0;
}

