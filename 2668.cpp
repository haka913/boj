// 2668 숫자 고르기
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int ar[101];
int last;
bool visited[101];
vector<int> v;
void dfs(int idx){
    if(ar[idx]== last){
        v.push_back(last);
    }
    if(!visited[ar[idx]]){
        visited[ar[idx]]=true;
        dfs(ar[idx]);
        visited[ar[idx]]=false;
    }

}

int main(){
    cin >> n;
    for(int i =1; i<n+1;i++){
        cin >> ar[i];
    }

    for(int i =1;i<n+1;i++){
        visited[i] = true;
        last = i;
        dfs(i);
        visited[i]=false;
    }
    sort(v.begin(),v.end());
    cout << v.size()<<"\n";
    for(auto i: v){
        cout<< i <<"\n";
    }

    return 0;
}