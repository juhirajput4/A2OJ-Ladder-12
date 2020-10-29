#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,temp=0,ans=0;
    cin>>n;
    int up[n][2];
    for(i=0;i<n;i++){
        cin>>up[i][0]>>up[i][1];#include <bits/stdc++.h>
using namespace std;
// Jai Jai Mahakaal
long answer(vector<vector<int> > &anoop,int v)
 {
     int aeray[v];
     long ans=0;
     fill(aeray,aeray+v,INT_MIN);
     aeray[0]=0;
     bool frustrate[v]={false};
     for(int i=0;i<v;i++)
     {
         int u=-1;
         for(int j=0;j<v;j++)
         {
             if(!frustrate[j]&&(u==-1||aeray[j]>aeray[u]))
                u=j;
         }

         frustrate[u]=true;
         ans=ans+aeray[u];
         for(int k=0;k<v;k++)
         {
             if(anoop[u][k]!=0&&!frustrate[k])
             {
                 aeray[k]=max(aeray[k],anoop[u][k]);
             }
         }
     }
     return ans;
 }

int main()
{
    int n,chotechand;
    int zeetv=0;
    cin>>n>>chotechand;
    int Pubg[n][chotechand];
    vector<vector<int> > anoop;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<chotechand;j++)
        {
            int jerry;
            cin>>jerry;
            Pubg[i][j]=jerry;
        }
        vector<int> eek(n,0);
        anoop.push_back(eek);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int w=0;
            for(int k=0;k<chotechand;k++)
            {
                w=w+abs(Pubg[i][k]-Pubg[j][k]);
            }
            anoop[i][j]=w;
            anoop[j][i]=w;
        }
    }
    long terweeaa=answer(anoop,n);
    cout<<terweeaa<<endl;

   return 0;
}

    }
    for(i=0;i<n;i++){
        temp=temp-up[i][0]+up[i][1];
        if(temp>ans)
            ans=temp;
    }
    cout<<ans;

}
