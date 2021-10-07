#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1="abc";
    string str2="abc";
    if(!str2.compare(str1))
    cout<<"string is equal";
    return 0;
}