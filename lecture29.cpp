/*#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,4,-2,5,8,20,-10,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans, totalSum;
    totalSum=0;
    for(int i=0;i<n;i++)
    totalSum+=arr[i];
    int prefix=0;
    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        ans=totalSum-prefix;
        if(ans==prefix)
        {
            cout<<"1";
            return 0;
        } 
    }       
    cout<<"0";
    return 0;
}*/


//MAXIMUM DIFFERENCE BETWEEN TWO ELEMENTS


#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={9,5,8,12,2,3,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        int diff=arr[i+1]-arr[i];
        maxi=max(maxi,diff);
    }
    cout<<maxi;
    return 0;
}

