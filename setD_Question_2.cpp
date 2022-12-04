//Set D Question 2

#include <iostream>
#include<cstring>
using namespace std;

void isValid(string str)
{
    int length = str.size();
    string desiredWord = "";
    bool invalid = true;
    char prevChar = 'a';
    for (int i = 0; i < str.size(); i++)
    
    {
        length--;
        if (str[i] == 110|| str[i] == 111 || str[i] == 115)
        {
            if (prevChar != str[i])
            {
                desiredWord+= str[i];
            }
            invalid = false;
            prevChar = str[i];
            if (desiredWord=="son")
            {
                cout<<"Valid"<<endl;
            }
            else if (desiredWord!="son" && length == 0)
            {
                invalid = true;
            }
            
        }
        else
        {
            desiredWord = "";
            invalid = true;
        }
    }
    if (invalid == true)
    {
        cout<<"Invalid"<<endl;
    }
    
}

int main()
{
    string str;
    getline(cin, str);
    isValid(str);
    return 0;
}