#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int *sum;
    int *dif;
    *sum=(*a)+(*b);
    *dif=abs((*a)-(*b));
    *a=*sum;
    *b=*dif;
 }

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
