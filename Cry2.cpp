#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i;
    char c;
    string s;
    cout << "Input: "; 
    cin >> s;
    int j = strlen(s);
    for(i=0;i<j;i++)
    {
        cout << int(s[i]);
    }
}