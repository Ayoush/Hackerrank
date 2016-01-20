#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    vector<int>v;
    scanf("%d",&n);
    int x;
    for(int i=0;i<n;i++)
    {
       scanf("%d",&x);
        v.push_back(x);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
       printf("%d ",v[i]);
    }
    
    return 0;
    
}
