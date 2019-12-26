#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    int input = 0;
    cout<<"Enter the positive number in decimal: ";
    cin>>input;
    if(input < 0)
    {
        cout<<"Invalid input!!"<<endl;
        return -1;
    }
    if(input == 0)
    {
        cout<<"Binary value:: "<<0<<endl;
        return 0;
    }
    vector<int> ans;
    while(input != 0)
    {
        ans.push_back(input % 2);
        input /= 2;
    }
    cout<<"Binary value:: ";
    for(vector<int>::reverse_iterator end = ans.rbegin(); end != ans.crend(); ++end)
    {
        cout<<*end;
    }
    cout<<endl;
}