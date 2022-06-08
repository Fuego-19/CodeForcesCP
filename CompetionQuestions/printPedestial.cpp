#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-- > 0){
        int n;
        cin>>n;
        int p1, p2, p3;
        p2 = n - 3;
        p3 = 2;
        p1 = 1;
        while(true){
            if((p2 - 1) > p3+1 || p1 + 1 < p3){
                if(p2 - 1 > p3){
                    p2--;
                    if(p1 + 1 < p3){
                        p1++;
                    }
                    else{
                        p3++;
                    }
                }
                else{
                    break;
                }
            }
            else{
                break;
            }
        }

        cout<<p3<< " "<< p2 << " " <<p1<<"\n";
    }
    return 0;
}