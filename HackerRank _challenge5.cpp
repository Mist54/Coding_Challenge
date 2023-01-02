#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int w,int x, int y, int z){
    int max;
    if(w>x && w>y && w>z){
        max=w;
    }
    else if (x>w && x>y && x>z) {
        max=x;
    
    }
    else if (y>w && y>x && y>z) {
        max=y;
    
    }
    else{
        max=z;
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
