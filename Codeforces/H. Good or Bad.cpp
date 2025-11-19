#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        string str;
        cin>>str;
        for(int i=0; i< str.length(); i++)
        {
            if((str[i]=='0' && str[i+1]=='1' &&str[i+2]=='0')||(str[i]=='1' && str[i+1]=='0' &&str[i+2]=='1'))
            {
                cout<<"Good"<<endl;
                break;
            }
            else if(i==str.length()-3)cout<<"Bad"<<endl;

        }

        n--;
    }
}
