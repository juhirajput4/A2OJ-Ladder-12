#include<bits/stdc++.h>
using namespace std;
int main(){
    long tc;
    cin>>tc;
    while(tc--){
        long no,ko,andr,lo,po=0,sita;
        int janch=0;
        cin>>no>>ko;
        for(andr=0;andr<no;andr++){
            cin>>lo;
            po=po+lo-ko;
            if(po<0 && janch==0){
                sita=andr;
                janch=1;
            }
        }
        if(po>0 &&janch==0){
            sita=andr+(po/ko);
        }
        cout<<sita+1<<endl;

    }
}
