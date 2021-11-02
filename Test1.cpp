#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int T;
    cin>>T;
    while(T--) {
        long long int N, D;
        cin>>N>>D;
        long long int digits = floor(log10(X))+1;

        if(digits==1){
            if(N==D){
                cout<<1<<endl;
            } else {
                cout<<0<<endl;
            }
        } else {
            long long int temp = N;
            long long int count = 0, k = digits-1;
            long long int arr[digits], change[digits];

            while(temp) {
                arr[k] = temp%10;
                temp/=10;
                k--;
            }
            vector<long long int> pos;
            for(int i=0; i<digits; i++) {
                change[i]==0;
                if(arr[i]==D){
                    pos.push_back(i);
                    count++;
                }
            }

            if(count) {
                if(count)
            } else {
                cout<<0<<endl;
            }
        }
    }

    return 0;
}