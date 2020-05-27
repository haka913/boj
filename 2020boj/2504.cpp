// 2504 괄호의 값
// https://www.acmicpc.net/problem/2504

#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int main(){
    string s;
    stack<char> st;
    int mul = 1;
    int result = 0;
    cin >>s;
    for(int i = 0 ; i <s.size();i++){
        if(s[i] =='('){
            mul*=2;
            st.push(s[i]);
            if(i+1<s.size()&&s[i+1]==')'){
                result +=mul;
            }
        }else if(s[i]=='['){
            mul*=3;
            st.push(s[i]);
            if(i+1<s.size()&&s[i+1]==']'){
                result +=mul;
            }
        }

        if(!st.empty()){
            if(s[i]==')'){
                mul/=2;
                if(st.top()=='('){
                    st.pop();
                }
            }else if(s[i]==']'){
                mul/=3;
                if(st.top()=='['){
                    st.pop();
                }
            }
        }else{
            if(s[i] ==')' || s[i]==']'){
                cout << 0;
                return 0;
            }
        }
    }
    if(!st.empty()){
        cout << 0;
    }else{
        cout << result;
    }
    return 0;
}