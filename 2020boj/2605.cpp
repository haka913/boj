// 2605 줄 세우기
// https://www.acmicpc.net/problem/2605

#include <iostream>
#include <list>

using namespace std;
int n;
int ar[101];
int main(){
    cin >> n;
    int temp;
    list<int> l;
    
    for(int i = 1 ; i <n+1;i++){
        cin >> temp;
        list<int>::iterator iter = l.end();
        // iter = l.end();
        // iter-=temp;
        for(int j = 0 ; j<temp;j++){
            iter--;
        }
        l.insert(iter, i);
    }
    for(auto i:l){
        cout << i << " ";
    }
    return 0;
}