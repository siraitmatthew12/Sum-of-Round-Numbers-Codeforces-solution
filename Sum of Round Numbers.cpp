#include<bits/stdc++.h> 

using namespace std;

int main(){
	int t;
	cin>>t;
	
	int i;
	for(i=0;i<t;i++){
		int n, count=0;
		cin>>n;
		int a,b,c,d;
		a=(n/1000)*1000;
		b=((n/100)%10)*100;
		c=((n/10)%10)*10;
		d=n%10;
		
		if(a!=0){
			count++;
		}
		if(b!=0){
			count++;
		}
		if(c!=0){
			count++;
		}
		if(d!=0){
			count++;
		}
		
		cout<<count<<endl;
		
		if(a!=0){
			cout<<a<<" ";
		}
		if(b!=0){
			cout<<b<<" ";
		}
		if(c!=0){
			cout<<c;
		}
		if(d!=0){
			cout<<" "<<d<<" ";
		}
		cout<<endl;
	}
	return 0;
}
