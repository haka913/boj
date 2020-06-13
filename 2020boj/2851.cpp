// 2851 슈퍼 마리오
// https://www.acmicpc.net/problem/2851
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int result = 0;
    int temp;
    for(int i = 0 ; i<10;i++){
        cin >> temp;
        if(result+temp >=100){
            if(result+temp -100 <=100-result){
                cout << result+temp;
            }else{
                cout << result;
            }
            return 0;
        }
        result += temp;
    }
    cout << result;
    return 0;
}