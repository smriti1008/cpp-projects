/*#include<iostream>
using namespace std;
int Sum(int m, int n)
{
    int ans = m+n;
    return ans;
}
int Mul(int m, int n)
{
    int ans = m*n;
    return ans;
}

void fun()
{
    cout<<"Hello";
}


int main()
{
    int a,b;
    cin>>a>>b;

    //function calling
    int ans = Sum(a,b);
    cout<<ans;
    cout<<endl;
    cout<<Mul(a,b);
    cout<<endl;
    fun();
}*/





#include<iostream>
using namespace std;

bool Prime(int n) 
{
    if(n<2)
    return 0;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int Fact(int n)
{
    int ans=1;
    for(int i=1; i<=n; i++)
    ans=ans*i;
    return ans;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<Prime(a)<<endl;
    cout<<Fact(a)<<endl;
    cout<<Prime(b)<<endl;
    cout<<Fact(b)<<endl;
    cout<<Prime(b-a)<<endl;

}
