#include <iostream>
using namespace std;
int Setbit(int n,int pos){
    return (n |(pos<<1));
}
int main(){

    cout<<Setbit(5,1)<<endl;
    return 0;
}