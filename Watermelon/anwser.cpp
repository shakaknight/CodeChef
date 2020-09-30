#include <iostream>
using namespace std;

int main() {
// your code goes here
int t;
cin>>t;
while(t--){
    int sum=0,n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        sum+=val;
    }
 cout << (sum < 0 ? "NO" : "YES") << '\n';
    
}
	return 0;
}
