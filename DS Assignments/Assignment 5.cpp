#include<iostream> 
#include<string> 
using namespace std; 
class school{ 
public: 
string str1; 
void call(){ 
char c; 
int i=0, count=0; 
cin>>str1; 
cin>>c; 
while (str1[i]!='\0'){ 
if (str1[i]==c){ 
count++; 
} 
i++; 
} 
cout <<"The Frequency of the "<<c<<" in the string = "<<count<<endl; } 
void del(){ 
int a,b; 
cin>>str1; 
cin>>a>>b; 
int l=str1.length(); 
for (int i = 0; i < 1; i++) 
{ 
for (int j = a; j<=b; j++){ 
str1[j]='\0'; 
} 
} 
cout<<str1<<endl; 
} 
void chardelete(){ 
char c; 
cin>>c; 
int l=str1.length(); 
int i=0, j; 
while (str1[i]!= '\0') 
{ 
if(str1[i]==c){ 
j=i; 
while (str1[j] != '\0') 
{ 
str1[j]= str1[j+1]; 
j++; 
} 
} 
i++; 
} 
cout<<str1<<endl; 
} 
void palidrome(){ 
char rev[100]; 
int count=0; 
int l=str1.length(); 
for (int i = 0; i < 1; i++) 
{ 
rev[i]=str1[l-1-i]; 
} 
for (int j = 0; j < 1; j++) 
{ 
if(rev[j]==str1[j]) 
count++; 
} 
if (count==1) 
{ 
cout<<"The entered String is palidrome"<<endl; 
} 
else 
cout<<"The entered string is not palidrome"<<endl; 
} 
}; 
int main(){ 
string str1; 
int choice; 
cout<<"1. Frequency \n2. Word delete \n3. Char Delete \n4. Palidrome\n"; cout<< "Choose one of the options below"<<endl; 
cin>>choice; 
switch(choice){ 
case 1: if(choice==1){ 
cout<<"Enter your string and Enter a char"<<endl; 
school obj; 
obj.call(); 
} 
break; 
case 2: if(choice==2){ 
cout<<"Enter your string and position of char to be deleted."<<endl; school obj; 
obj.del(); 
} 
break; 
case 3: if(choice==3){ 
cout<<"Enter your string and Enter a char to delete."<<endl; 
school obj; 
obj.chardelete(); 
} 
break; 
case 4: if(choice==4){ 
cout<<"Enter your string"<<endl; 
school obj; 
obj.palidrome(); 
} 
default: break; 
} 
return 0; 
} 
