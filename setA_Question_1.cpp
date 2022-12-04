// Set A Question 1

#include <iostream>

using namespace std;

void OnlyInsideHash(string str)
{
    string InsideHashWord = "";
    int count = 0;
    for (auto i : str)
    {
        if (i == 35)
        {
            count++;
            if (count == 2)
            {
                cout << InsideHashWord << endl;
                break;
            }
            InsideHashWord = "";
        }
        else
        {
            InsideHashWord = InsideHashWord + i;
        }
    }
}

int main()
{
    string strInput;
    getline(cin, strInput);
    OnlyInsideHash(strInput);
    return 0;
}

