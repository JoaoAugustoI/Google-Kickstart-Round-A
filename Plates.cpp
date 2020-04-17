#include <bits/stdc++.h>

using namespace std;

int N,P,K;
int sum[60][40];
int PD[60][40];

int rec(int idx,int qtd)
{
    if(qtd == P)
        return 0;
    if(idx > N or qtd > P)
        return -1e9;
    if(PD[idx][qtd]!=-1)
        return PD[idx][qtd];

    int valor = -1e9;
    for(int i = 0;i<=K;i++)
    {
        valor = max(valor,sum[idx][i]+rec(idx+1,qtd+i));
    }
    return PD[idx][qtd] = valor;
}
int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        cin>>N>>K>>P;
       for(int i = 1;i<=N;i++)
       {
           for(int j = 1;j<=K;j++)
           {
               int aux;cin>>aux;
               sum[i][j] = sum[i][j-1]+aux;
           }
       }     
       memset(PD,-1,sizeof(PD));
       cout<<rec(1,0)<<endl;
    }

}
