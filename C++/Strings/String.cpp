#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1.size()<<" "<<s2.size()<<endl;
    cout<<s1+s2<<endl;
    char a,b;
    a=s1[0];
    b=s2[0];
    s1[0]=b;
    s2[0]=a;
    cout<<s1<<" "<<s2<<endl;
    return 0;
}
