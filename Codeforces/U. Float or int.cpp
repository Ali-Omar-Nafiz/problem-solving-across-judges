#include<iostream>
using namespace std;
int main()
{
    float n;
    cin>>n;
   int m=n;
   if(m==n)cout<<"int "<<m;
   else
   {
       cout<<"float "<<(int)n<<" "<<(n-m);
   }
    return 0;
}

