// Set B Question 1

#include <iostream>

using namespace std;

void takeOnlyInsidePercentage(string str)
{
    string word = "";
    int count = 0;
    for (auto x : str)
    {
        if (x == 37)
        {
            count++;
            if (count == 2)
            {
                cout << word << endl;
                break;
            }
            word = "";
        }
        else
        {
            word = word + x;
        }
    }
}

int main()
{
    string sample;
    getline(cin, sample);
    takeOnlyInsidePercentage(sample);
    return 0;
}

