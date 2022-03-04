
#include <iostream>

using namespace std;

int F[50];

int mfib(int n)
{
    int sum =0;
    if(n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
    if(F[n-2]==-1)
    {
        F[n-2]=mfib(n-2);
    
    }

   if(F[n-1]==-1)
    {
        F[n-1]=mfib(n-1);
    }
    F[n]=F[n-2]+F[n-1];
   // return F[n];
    }
    for(int i=0;i<n;i++)
    {
        sum=F[i] + F[i+1];   
        cout<< F[i]<<" ";
        }
    int ld=sum%10;
    return 0;

}




int main()
{
    int n;
    cin>> n;
   // int F[50]
    for(int i=0;i<50;i++)
    {
        F[i]=-1;
    }
    
    
    cout<<mfib(n);

    return 0;
}