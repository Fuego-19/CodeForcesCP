#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t-->0){
	    string s1, s2;
	    
	    cin>>s1;
	    cin>>s2;
	    if(s1.size() < s2.size()){
	        cout<<"NO\n";
	        break;
	    }
	    int j= 0;
	    for(int i = 0; i<s1.size(); i++){
	        if(j<s1.size() && s2[j] == s1[i]){
	            j++;
	        }
	    }
	    if(j == s2.size()){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
