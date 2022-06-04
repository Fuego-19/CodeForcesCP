#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        long int arr[n];
        for(int i =0; i<n; i++){
            cin>>arr[i];
        }

        int e = 0;
        for(int j =0; j<n; j++){
            if(arr[j]%2 == 0){
                e++;
            }
        }
        int ans =  min(e, n - e);

        cout<<ans<<'\n';

    }
    return 0;
}