#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   vector<int>v;
    string s="";
   for(int i=0;i<=str.length();i++)
   {
       //cout<<s<<endl;
       if(str[i]!=',')
       {
           s+=str[i];
       }else
       {
           int a=atoi(s.c_str());
           v.push_back(a);
           s="";
       }
   }//
     int a=atoi(s.c_str());
           v.push_back(a);
   return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
       cout << integers[i] << "\n";
    }
    
    return 0;
}
