#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int T,N,B;
    cin>>T;

    while(T--)
    {
        cin>>N>>B;
        int A[N];
       for(int i = 0;i<N;i++)
       {
           cin>>A[i];
       }     
       
       sort(A,A+N);
       int i = 0;
       while(B>A[i])
       {
           B-=A[i];
           i++;
       }
       cout<<i<<endl;
    }

}
