#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
int i,t,n;
cin>>t;
while(t--){
	cin>>n;
	int arr[n];
		for(i=0;i<n;i++)
	    	{
	        	cin>>arr[i];
	    	}
	  	sort(arr,arr+n);
	    	int temp=-1;
	     	int count=0;
	    	for(i=0;i<n;i++)
	   	{
	        	if(arr[i]>0 && arr[i]>temp){
	            		temp = arr[i];
	            		count++;
	        	}
	    	}
	    	cout<<count<<"\n";
	}
return 0;
}
