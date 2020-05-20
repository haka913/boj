#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a;
    cin >> a;
    cout <<"hello test1"<<endl;
    cout << a<<endl;
    for(int i = 0 ; i <10;i++){
        cout << i+1 << " ";
    }
    vector<int> v;
    v.push_back(3);
    cout << endl;
    cout << v[0];
    return 0;
}
