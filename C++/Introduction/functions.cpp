#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;


int max_of_four(int a, int b, int c, int d)
{
   int x=max(a,b);
    int y=max(x,c);
    int z=max(y,d);
    return z;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

