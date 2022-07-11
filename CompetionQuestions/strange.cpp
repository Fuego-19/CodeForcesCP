#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t -- > 0){
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        // int arr[n];
        // for(int i =0; i<n; i++){
        //     cin>>arr[i];
        // }
        char s[] = {'s','t','r','a','n','g','e'};
        int k  =0;
        int i1 = -1;
        int i2 = -1;
        for(int j =0; j<n; j++){
            if(k < n && arr[j] != s[k]){
                k = 0;
                if(arr[j] == 's'){
                    j--;
                }
                continue;
            }
            if(k < n && arr[j] == s[k]){
                if(arr[j] == 's'){
                    i1 = j + 1;
                }
                if(arr[j] == 'e'){
                    i2 = j + 1;
                }
                k++;
            }
        }

        // cout<<i1<<"  "<<i2;
        int ans = i1*(n + 1 - i2);
        cout<<ans<<"\n";
    }
    return 0;
}

