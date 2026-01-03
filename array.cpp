#include<iostream>
using namespace std;

/*int main()
{
    int arr[6]={1,2,3,4,5,6};
    int start=0, end=5;
    while(start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    };
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
}*/


/*int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int arr[1000];
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<=n-1; i++) 
    arr[i]=arr[i-1]+arr[i-2];
    cout<<arr[n-1]<<" ";
}*/

/*int main()
{
    int arr[6]={10, 4, 1, 3, 2, 7};

    for (int i=0; i<5; i++)
    {
        int index=i;
        for(int j=i+1; j<6; j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i], arr[index]);
    }
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
}*/


//bubble sort

/*int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=n-2; i>=0; i--)
    {
        bool swapped=0;
        for(int j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j], arr[j+1]);
            }
            if (swapped==0)
            break;
    }
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}
}*/


//insertion sort
/*int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j], arr[j-1]);
            else
            break;
        }
    }
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}*/


//binary search
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;

    int start=0;
    int end= n-1;
    while(start<=end)
    {
        int mid;
        mid=(start+end)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;      
}