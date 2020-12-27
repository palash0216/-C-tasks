#include <iostream>

using namespace std;

int main()
{int n;
cout<<" enter the number to be checked"<<endl;
cin>>n;
for(int i=2;i<n;i++)
{
    if((n%i)==0)
    {cout<<"not a prime"<<endl;
    break;
    }
    if(i==n)
    {
        cout<<"prime"<<endl;
    }
    
}
   

    return 0;
}
/*................................................................................................
1.> n%i
2.> n/2 (by making half)
3.> i*i<n (by square root)
................................................................................................*/


