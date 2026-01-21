#include<iostream>
using namespace std;
int main()
/*{
    int n;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }
    if(n%i==0)
    {
        cout<<i<<endl;
        i++;
    }
}
{
    int n;
    cin>>n;
    int i=1;
    do{
        cout<<n*i<<endl;
        i++;
    }
    while(i<=5);
}

{   
    int i;
    for(i=1;i<=10;i++)
    {
    if(i%4==0)
    continue;
    cout<<i<<endl;
    }
}



//scope of a variable

{
    int i=30;
    cout<<i<<endl;
    {int i=20;
    cout<<i<<endl;
    }
}*/



{
    int rem, num;
     ans=0;
     cin>>num;
    while(num!=0)
    {
        rem=num%10;
        num/=0;
        ans=ans+rem;
    }
    cout<<ans;
}


//if else
#include<iostream>
using namespace std;
int main(){
/*int package;
    cin>>package;
    if(package>10){
        cout<<"Accepted";
    }
    else{
        cout<<"Rejected";
    } */

    int num;
    cin>>num;
    if(num%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}