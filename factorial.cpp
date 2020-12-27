#include <iostream>

using namespace std;
int main()
{
    int n,ans=1;
cout<<"enter the number to find the factorial"<<endl;
cin>>n;
for(int  i=n;i>=1;i--)
{ans=ans*i;
    
}cout<<n<<"! ="<<ans;

    return 0;
}
