//Title: Saddle point

#include<iostream>
using namespace std;

class smat
{
  int mat[10][10],i,j,row,col,min,max; //data memebers
 public:
  smat() //default constructor
  {
   i=j=row=col=0;
   min=max=0;
  }
  void getdata(); //member functions
  void showmat();
  void saddlepoint();

};//end of class smat

void smat::getdata() //To accept matrix element
{
 cout<<"\n Enter How many Rows in matrix: ";
 cin>>row;
 cout<<"\n Enter How many cols in matrix: ";
 cin>>col;
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   cout<<"\nEnter matrix mat["<<i<<"]["<<j<<"] element : ";
   cin>>mat[i][j];
  }
 }
}

void smat::showmat()//To show elements inside the matrix.
{
 cout<<"\nThe Elements inside the matrix are as follows...\n\n";
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   cout<<"\t"<<mat[i][j];
  }
  cout<<"\n";
 }
 cout<<"\n";
}

void smat::saddlepoint()
{
 int big[5],small[5];
 for(i=0;i<5;i++)
 {
  big[i]=small[i]=0; //intialize two arrays with value zero.
 }
 //To find out the smallest value in row i
 for(i=0;i<row;i++)
 {
  small[i]=mat[i][0];
  for(j=0;j<col;j++)
  {
     if(mat[i][j]<=small[i])
     {
      small[i]=mat[i][j];
     }
  }
 }
 // To find out the Largest value in column j
 for(j=0;j<col;j++)
 {
  big[j]=mat[0][j];
  for(i=0;i<row;i++)
  {
   if(mat[i][j]>=big[j])
   {
    big[j]=mat[i][j];
   }
  }
 }
 // To fin out the largest from small array in row
 max=small[0];
 for(i=0;i<row;i++)
 {
  if(small[i]>=max)
  {
   max=small[i];
  }
 }
 //To find out smallest from the big array in col.
 min=big[0];
 for(j=0;j<col;j++)
 {
  if(big[j]<=min)
  {
   min=big[j];
  }
 }
 // Now compaire both min & max if both same then saddle point is there else not.
 if(min==max)
 {
  cout<<"\nSaddle point "<<min<<" is present in the array\n\n";
 }
 else
 {
  cout<<"\nSaddle point is not present in given matrix...\n\n";
 }
}

int main()
{
 smat s1;
 s1.getdata();
 s1.showmat();
 s1.saddlepoint();
 return 0;
}
