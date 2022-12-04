//Set C question 2
#include <iostream>
#include<cstring>
using namespace std;

void isValid(string str)
{
    int len = str.length();
    string check = "";
    char previouChar = 'a';
    bool notValid = true;
    for (auto i : str)
    {
        len--;
        if (i == 98 || i == 107 || i == 111)
        {
            if (previouChar != i)
            {
                check += i;
            }
            notValid = false;
            previouChar = i;
            if (check=="bok")
            {
                cout<<"Valid"<<endl;
            }
            else if (len == 0 && check!="bok" )
            {
                notValid = true;
            }
            
        }
        else
        {
            check = "";
            notValid = true;
        }
    }
    if (notValid == true)
    {
        cout<<"invalid"<<endl;
    }
    
}

int main()
{
    string strInput;
    getline(cin, strInput);
    isValid(strInput);
    return 0;
}