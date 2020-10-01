#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int p,h;
        cin>>p>>h;
        while(p>0 && h>0){
            p=p-h;
            h=h/2;
        }
        cout<<(p<=0?1:0)<<endl;
        
    }

    return 0;
}
