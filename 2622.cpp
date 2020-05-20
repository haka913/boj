#include <iostream>
#include <algorithm>

using namespace std;

int tri(int n){
        int count =0;
        // for(int a=1;a<=n;a++){
        //   for(int b =a;b<=n;b++){
        //     for(int c=b;c<=n;c++){
        //       if(a+b+c==n and a+b>c)
        //         count++;
        //     }
        //   }
        // }
        int c;
        for(int a=1; a<=n; a++) {
                for(int b =a; b<=n; b++) {
                        c=n-a-b;
                        // cout <<c<<" ";
                        if(c>=b and a+b>c) {
                                count++;
                                // cout <<a<<" "<<b<< " "<<c<<endl;
                                // cout <<c<<" ";
                        }
                        // cout <<endl;
                }
        }
        return count;
}

int main(){
        int n;
        cin >> n;
        cout << tri(n);
        return 0;
}
