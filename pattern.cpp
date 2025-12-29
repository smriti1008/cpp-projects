#include<iostream>
using namespace std;
int main()
/*{
    int j,i;
    for(j=1; j<=4; j=j+1){
        for(i=1; i<=5; i=i+1){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
}*/





//1 1 1 1 1
//2 2 2 2 2
//3 3 3 3 3
//4 4 4 4 4
//5 5 5 5 5
/*{
    int row,col;
    for(row=1;row<=5;row=row+1){
        for(col=1;col<=5;col=col+1){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}*/


/*
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1

{
int row,col;
for(row=5;row>=1;row=row-1){
    for(col=5;col>=1;col=col-1){
        cout<<col<<" ";
    }
    cout<<endl;
}
}
*/


/*
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
{
    int row;
    for(row=1;row<=5;row=row+1){
        
        for(char col='a';col<='e';col=col+1){
            cout<<col<<" ";
        }
        cout<<endl;
    } 
}*/




/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25


{
    int row,col;
    for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5;col=col+1){
            cout<<(row-1)*5+col<<" ";
        }
        cout<<endl;
    }
}*/



/*
*
* *
* * *
* * * * 
* * * * *

{
int i,j,a;
cin>>a;
for(i=1;i<=a;i++){
    for(j=1;j<=i;j++){
    cout<<"* ";
    }
    cout<<endl;
}
}*/


/*{
    char i;
    char j;
    for(i='a';i<='g';i++)
    {
        for(j='a';j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl; 
    }
}*/



/*{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
          cout<<'*'<<" ";
        }
          cout<<endl;
    }
}*/


/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
            cout<<endl;
    }
}

{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}



{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
        cout<<" ";
    }
    for(j=1;j<=i;j++)
    {
        cout<<j;
    }
    cout<<endl;
}
} 



{
    char i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++){
        cout<<" ";
    }
    for(char name='A';name<='A'+i-1;name++)
    {
       cout<<name ;
    }
    cout<<endl;
}
}*/


{
    int i,j,n;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j=j+1)
            cout<<"* ";
        for(j=1;j<=2*n-2*i;j=j+1)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<"* ";
            cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j=j+1)
            cout<<"* ";
        for(j=1;j<=2*n-2*i;j=j+1)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<"* ";
            cout<<endl;
    }
}