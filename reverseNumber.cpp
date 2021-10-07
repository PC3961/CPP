#include<iostream>
#include<cmath>
using namespace std;
int main(){
int reverse=0, n, lastdigit;
    cin>>n;
    while (n>0)
    {
        lastdigit=n%10;
        reverse=reverse*10 + lastdigit;
        n=n/10;
    }
    cout<<reverse<<endl;

    return 0;
}