//Form The Biggest Number From The Numeric String.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str="48465899564";
    sort(str.begin(), str.end(),greater<int>());
    cout << str << endl;
    return 0;
}