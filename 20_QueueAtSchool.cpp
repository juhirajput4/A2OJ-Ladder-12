#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int ty;
   cin>>ty;
   while(ty--)
   {
       long long n,h,naman,klpd,wepm=0,f=0;
       cin>>n>>h>>naman>>klpd;
       long long upes[n];
       for(long long i=0;i<n;i++)
        cin>>upes[i];
        sort(upes,upes+n);
        if(upes[naman-1]==h)
        {
            cout<<"0"<<endl;
        }
        else{
            if(upes[naman-1]<h&&naman<klpd)
                cout<<"-1"<<endl;
            else if(upes[naman-1]>h&&naman>klpd)
                cout<<"-1"<<endl;
            else
            {
                 if(upes[naman-1]>h&&naman<=klpd){
                    int aaram=naman-1;
                    while(upes[aaram]>h&&aaram>=0){
                        aaram--;wepm++;}
                        cout<<wepm<<endl;
                }
                else if(upes[naman-1]<h&&naman>=klpd)
                {
                    int aaram=naman-1;
                    while(upes[aaram]<h&&aaram<n){
                        aaram++;wepm++;}
                        cout<<wepm<<endl;
                }
            }
        }
   }
   return 0;
}
