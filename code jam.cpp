#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int>m;
int main(){
 int test;
 cin>>test;
 while(test--){
	 int p;
	 cin>>p;
	 while(p--){
		 string s;
		 cin>>s;
		 if(s[0]=='*'){
		 int n=s.size();
		 string temp="";
		 for(int i=n-1;i>=0;i++){
			  temp+=s[i];
		      m[temp]++;
		  }
	  }
   }
   for(auto k:m){
	   if(k.second==p){
		   cout<<k.first<<endl;
     }
  }
 }
}
			 
	     
