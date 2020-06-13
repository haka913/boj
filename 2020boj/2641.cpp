// 2641 다각형그리기
// https://www.acmicpc.net/problem/2641
// 1 오른쪽, 2 위쪽, 3 왼쪽, 4 아래쪽
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
string sampleS[101];
int sampleI[101][51];
int model[2][51];
string modelS[2];
int main() {
    vector<int> idx;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> model[0][i];
        modelS[0] += to_string(model[0][i]);
    }
    for (int i = 0; i < n; i++) {
        if (model[0][i] % 2 == 1) {  //홀수(오른쪽, 왼쪽)
            model[1][n - i - 1] = 4 - model[0][i];
        } else {
            model[1][n - i - 1] = 6 - model[0][i];
        }
    }
    for (int i = 0; i < n; i++) {
        modelS[1] += to_string(model[1][i]);
    }
    for (int i = 0; i < 2; i++) {
        modelS[i] += modelS[i];
    }

    int sample;
    cin >> sample;
    for (int i = 0; i < sample; i++) {
        for (int j = 0; j < n; j++) {
            cin >> sampleI[i][j];
            sampleS[i] += to_string(sampleI[i][j]);
        }
    }

    for (int i = 0; i < sample; i++) {
        if (modelS[0].find(sampleS[i]) != string::npos) {
            idx.push_back(i);
        }
        if (modelS[1].find(sampleS[i]) != string::npos) {
            idx.push_back(i);
        }
    }

    cout << idx.size() << "\n";
    for (int i = 0; i < idx.size(); i++) {
        for (int j = 0; j < n; j++) {
            cout << sampleI[idx[i]][j] << " ";
        }
        cout << endl;
    }

    return 0;
}