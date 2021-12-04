#include<iostream>
using namespace std;
#define c 6

class password
{
    public:
    char s[c];
    void pass();
};

void password::pass()
{
    char s[]={'1','3','a','s','t','i'};
        int count=0;
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
            {  
                if(j!=i)
                {
                    for(int k=0;k<6;k++)
                    {
                        if(k!=i && k!=j)
                        {
                            for(int l=0;l<6;l++)
                            {
                                if(l!=i && l!=j && l!=k)
                                {
                                  cout<<s[i]<<s[j]<<s[k]<<s[l]<<endl; 
                                  count++;
                                }
                                else
                                {
                                    continue;
                                }
                            }
                        }
                        else
                        {
                            continue;
                        }
      
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        cout<<"Total Number of Possible Passwords without repetition are "<<count;
}



int main()
{
    password obj;
    obj.pass();
    return 0;
 
}
