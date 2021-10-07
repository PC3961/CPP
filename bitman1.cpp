#include <iostream>

using namespace std;
int Getbit(int n, int pos){
    return ((n & (1<<pos))!=0);
}
int main(){
cout<<Getbit(5,2)<<endl;
return 0;
}