#include <iostream>
using namespace std;
int add_matrix(int );
void sub_matrix(int );
void mult_matrix(int );
int main()
{
    int n;
    cout<<"Choose operation to be performed-\n1.Addition\n2.Subtraction\n3.Multiplication\n";
    cin>>n;
    switch(n)
    {
        case 1:add_matrix(1);
        break;
        case 2:sub_matrix(2);
        break;
        case 3:mult_matrix(3);
        break;
        default:cout<<"choose correct operation";
    }
    return 0;
}
int add_matrix(int n)
{
    int r,c,i,j;
    cout<<"Enter rows and coloumns\n";
    cin>>r;
    cin>>c;
    int a[r][c],b[r][c],sum[r][c];
    cout<<"Enter elements of first matrix\n";
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of second matrix\n";
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Result:\n";
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
void sub_matrix(int n)
{
    int r,c,i,j;
    cout<<"Enter rows and coloumns\n";
    cin>>r;
    cin>>c;
    int a[r][c],b[r][c],dif[r][c];
    cout<<"Enter elements of first matrix\n";
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of second matrix\n";
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Result:\n";
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            dif[i][j]=a[i][j]-b[i][j];
            cout<<dif[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void mult_matrix(int n)
{
    int r1,c1,r2,c2,i,j,k;
    cout<<"Enter number of rows and column for first matrix:\n";
    cin>>r1>>c1;
    cout<<"Enter number of rows and column for second matrix:\n";
    cin>>r2>>c2;
    int a[r1][c1],b[r2][c2],mult[r1][c2];
    if(c1==r2)
    {
        cout<<"Enter elements of first matrix:\n";
        for(i=0 ; i<r1 ; i++)
        {
            for(j=0; j<c1; j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter elements of second matrix:\n";
        for(i=0 ; i<r2 ; i++)
        {
            for(j=0; j<c2; j++)
            {
                cin>>b[i][j];
            }
        }
        cout<<"Result:\n";
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                mult[i][j]=0;
                for(k=0; k<r1; k++)
                {
                    mult[i][j]+=a[i][k]*b[k][j];
                }
                cout<<mult[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else
    {
        cout<<"Enter correct matrix order";
    }
}
