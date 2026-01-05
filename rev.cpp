/*#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,6,8,10};
    int key;
    cout<<"Enter key: ";
    cin>>key;
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0, end=n-1,index=-1;
    while(start<=end)
    {
    int mid=start+(end-start)/2;
    if(arr[mid]==key)
    {
        index=mid;
        break;
    }
    else if(arr[mid]<key)
    {
    start=mid+1;
    }
    else
    end=mid-1;
    }
    if(index==-1)
    cout<<"not found";
    else
    cout<<key <<" found at: "<<index;
}
*/

// if(n==0|n==1)
// return 0;

//SQUARE ROOT
/*#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int ans=0, start=1, end=x;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(mid*mid==x)
        {
            ans=mid;
            break;
        }
        else if(mid*mid<x)
        {
            ans = mid;
            start=mid+1;
        }
        else
        end=mid-1;
    }
    cout<<"Square root of x is: "<<ans;
    return 0;
}
*/


//search in rotated array
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,5,0,1,2,3};
    int target;
    cout<<"enter target: ";
    cin>>target;
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=-1, start=0, end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
        ans=mid;
        break;
        }
        else if(arr[mid]>=arr[0])
        {
            if(arr[mid]>=target&&arr[start]<=target)
            end=mid-1;
            else
            start=mid+1;
        }
        else
        {
            if(arr[mid]<=target&&arr[start]>=target)
            start=mid+1;
            else
            end=mid-1;
        }
    }
    if(ans==-1)
    cout<<"not found";
    else
    cout<<target<<" is found at: "<<ans;
}
*/

//book allocation
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={12,34,67,90};
//     int k;
//     cout<<"Enter k: ";
//     cin>>k;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     if(k>n)
//     return -1;
//     int start=0, end=0, ans, mid;
//     for(int i=0;i<n;i++)
//     {
//         start=max(start,arr[i]);
//         end+=arr[i];
//     }
//     while(start<=end)
//     {
//         int mid=start+(end-start)/2;
//         int page=0, count=1;
//         for(int i=0;i<n;i++)
//         {
//             page+=arr[i];
//             if(page>mid)
//             {
//             count++;
//             page=arr[i];
//             }
//         }    
//         if(count<=k)
//         {
//             ans=mid;
//             end=mid-1;
//         }
//         else
//         start=mid+1;
//     }
//     cout<<ans;
// }






//print row index with maximum sum

// #include<iostream>
// #include<climits>
// using namespace std;
// void printcol(int arr[][4], int row, int col)
// {
//     for(int j=0; j<col; j++)
//     for(int i=0; i<row; i++)
//     cout<<arr[i][j]<<" ";
// }
// void printrowmax(int arr[][4], int row, int col)
// {
//     int index=-1;
//     int sum=INT_MIN;
//     for(int i=0; i<row; i++)
//     {
//         int total=0;
//         for(int j=0; j<col; j++)
//         total+=arr[i][j];
//         if (total>sum)
//         {
//             sum=total;
//             index=i;
//         }
//     }
//     cout<<index<<" ";
// }

// int main()
// {
//     int arr1[3][4]={9,10,11,12,1,2,3,4,5,6,7,8};
//     int arr2[3][4]={0,1,3,4,6,7,10,11,41,18,9,17};
//     int ans[3][4];
//     printrowmax(arr1,3,4);
// }



//print sum of diagonal element


