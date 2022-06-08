#include <iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t-- > 0){
        int n;
        cin>>n;

        long long a[n];
        long long b[n];

        for(int i =0; i<n; i++){
            cin>>a[i];
        }
        for(int j =0; j<n; j++){
            cin>> b[j];
        }
        int diff = a[0] - b[0];
        string ans = "YES";
        if(n == 1){
            if(a[0]<b[0]){
                ans = "NO";
                cout<<"NO"<<"\n";
                continue;
            }
        }
       
        for(int k =0; k<n; k++)
        {
            long long temp= a[k] - b[k];
            if(temp == diff ){
                continue;
            }
            else if(a[k] == 0 && b[k] == 0){
                continue;
            }
            else if(b[k] == 0){
                if(temp <= diff){
                    continue;
                }
                else{
                    ans = "NO";
                    break;
                }
            }
            else{
                ans = "NO";
                break;
            }
        }

        cout<<ans<<"\n";
       

    }
    return 0;
}

