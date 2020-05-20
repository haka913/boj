// 직사각형 네개의 합집합의 면적 구하기
#include <iostream>
#include <algorithm>

using namespace std;

int mat[101][101];


int main(){
    int x1,y1,x2,y2;
    int minx=101;
    int miny=101;
    int maxx=0;
    int maxy=0;
    int cnt =0;
    for(int i = 0 ; i< 4;i++){
        cin >> x1>>y1>>x2>>y2;
        minx = min(minx, x1);
        miny = min(miny, y1);
        maxx = max(maxx, x2);
        maxy = max(maxy, y2);
        for(int y=y1;y<y2;y++){
            for(int x = x1;x<x2;x++){
                mat[y][x]=1;
            }
        }
    }
    for(int y=miny;y<maxy;y++){
        for(int x = minx;x<maxx;x++){
            cnt += mat[y][x];
        }
    }
    cout << cnt;
    return 0;
}