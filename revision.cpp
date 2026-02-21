/*#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[ ]= {4,6,8,10,12};
    int ans= INT_MIN;
    for(int i=0;i<5;i++)
    {
      if (arr[i] > ans)
      ans=arr[i];
    }
    cout << ans;
    return 0;
}*/



//SEARCH ELEMENT

/*#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10, 20, 7, 11, 8, 4};
    int index=-1;
    int X;
    cout<<"Enter X: ";
    cin>>X;
    for(int i=0; i<6; i++)
    {   
        if(arr[i]==X)
        {
            index=i;
            break;
        }
    }
    if(index!=-1)
    cout<<"Element found at index: "<<index;
    else
    cout<<"Element not found ";
    return 0;
}
*/

//REVERSE ARRAY  

/*#include<iostream>
using namespace std;
int main()
{
    int arr[6]={6,11,7,4,8,9};
    int i = 0, j = 5;
    while(i<j)
    {
        swap(arr[i], arr[j]);
        j--;
        i++;
    }
    cout<<"Reversed array ";
    for(int k=0; k<6; k++)
    cout<<arr[k]<<" ";
}*/



//SECOND MAXIMUM

/*#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={2,4,6,8,10,12};
    int ans = INT_MIN;
    for(int i=0; i<6; i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }

    int second = INT_MIN;
    for(int i=0; i<6; i++)
    {
        if (ans!=arr[i])
        second=max(second, arr[i]);
    }
    cout<<second;
    return 0;
}*/

//IF SECOND LARGEST ELEMENT DOESN'T EXIST


/*#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,6,8,10,12};
    int ans = INT_MIN;
    for(int i=0; i<6; i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }

    int second = INT_MIN;
    for(int i=0; i<6; i++)
    {
        if (ans!=arr[i])
        second=max(second, arr[i]);
    }
    cout<<second;
    return 0;
}*/



//FIBONACCI SERIES
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[1000];
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<n; i++)
    {
    arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}*/



//ROTATE ARRAY BY 1
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,7,4,11,5,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    int last=arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=last;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/



//SORTING

//selection sort
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,1,9,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++)
    {
        int index=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i], arr[index]);
    }
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
}
*/



//BUBBLE SORT

/*#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,1,9,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++)
    {
        bool swapped=0;
        for(int j=0; j<n-1-i; j++)
    {
         if (arr[j]>arr[j+1])
         {
            swapped=1;
            swap(arr[j], arr[j+1]);
         }
    }
         if (swapped==0)
         break;
    }
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
}*/

//INSERTION SORT

/*#include<iostream>
using namespace std;
int main()
{
    int arr[]={7,4,8,11,2};
    int n= sizeof(arr)/sizeof(arr[0]);
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




//BINARY SEARCH
/*#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key:";
    cin>>key;

    int start=0;
    int end=n-1;
    int index=-1;
    while(start<=end)
    {
        int mid;
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
        index=mid;
        break;
        
    
     
        }
        else if(arr[mid]<key)
        start=mid+1;
        else
         end=mid-1;
    }
    if ( index==-1) cout<<key<<"not found";
    else
    cout<<key<<" found at index "<<index;
    return 0;
}*/


//SQUARE ROOT

/*#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number x: " << flush;
    cin >> x;

    int ans = 0;
    int start = 0;
    int end = x;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid == x / mid)
        {
            ans = mid;
            break;
        }
        else if (mid < x / mid)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "Square root is: " << ans << endl;
    return 0;
}*/

//PEAK INDEX IN MOUNTAIN ARRAY
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid]>arr[mid-1])
        {
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
    cout<<"Peak index is: "<< start<<endl;
    return 0;
}
*/


//ROTATED ARRAY
/*#include<iostream>
using namespace std;
int main()
{
  int arr[]={4,5,0,1,2,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  int ans=-1;
  int start=0;
  int end=n-1;
  int target;
  cout<<"Enter the target: ";
  cin>>target;
  while(start<=end)
  {
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    {
        ans=mid;
        break;
    }
    else if(arr[mid]>arr[0])
    {
        if(arr[start]<=target && arr[mid]>=target)
        end=mid-1;
        else
        start=mid+1;
    }
    else
    {
        if(arr[mid]<=target && arr[end]>=target)
        start=mid+1;
        else
        end=mid-1;
    }
  }
  cout<<"Target is at index: "<<ans<<endl;
  return 0;
}*/


//Kth POSITIVE INTEGER


//recursion

// #include<iostream>
// using namespace std;

// void fun3(int n)
// {
//     cout<<n<<" days left for birthday"<<endl;
// }
// void fun2(int n)
// {
//     cout<<n<<" days left for birthday"<<endl;
// }
// void fun1(int n)
// {
//     cout<<n<<" days left for birthday"<<endl;
// }
// void fun0(int n)
// {
//     cout<<n<<" happy birthday";
// }



// int main()
// {
//     fun3(3);
//     fun2(2);
//     fun1(1);
//     fun0(0);
// }
//this is thw simplest way to solve this by normal method and function caLLing


// #include<iostream>
// using namespace std;

// void fun1(int n);
// void fun2(int n);
// void fun3(int n);
// void fun3(int n)
// {
//     cout<<n<<" days left for birthday"<<endl;
//     fun2(n-1);
// }
// void fun2(int n)
// {
//     cout<<n<<" days left for birthday"<<endl;
//     fun1(n-1);
// }

// void fun1(int n)
// {
//     cout<<n<<" days left for birthday"<<endl;
// }
// int main()
// {
//     fun3(3);
//     fun2(2);
//     fun1(1);

// }

// this was method two of indirect calling

// #include<iostream>
// using namespace std;
//  void fun3(int n)
//  {
//     cout<<n<< " days left for birthday"<<endl;
//     fun3(n-1);
//  }
//  void fun2(int n)
//  {
//     cout<<n<< "days left for birthday"<<endl;
//  }
//  void fun1(int n)
//  {
//     cout<<n<< "day left for birthday"<<endl;
//  }
//  int main()
//  {
//     fun3(3);
//     fun2(2);
//     fun1(1);

//  }
//  void fun0(int n)
//  {
//     cout<<"happy birthday";
//  }

// apply base conditon in above code it's incomnplete    if(n==0)



// #include<iostream>
// using namespace std;
// void fun3(int n)
// {
//     if(n==0)
//     {
//         cout<<" happy birthday"<<endl;
//         return;
//     }
//     cout<<n<<" days left for birthday"<<endl;
//     fun3(n-1);
// }
// int main()
// {
//     fun3(3);
// }     CORRECT RECURSIVE METHOD

// #include<iostream>
// using namespace std;

// void print( int n)
// {
//     if(n==1)
//     {
//         cout<<1;
//         return;
//     }
//     cout<<n<<endl;
//     print(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     print(n);
// }
// above one is for reverse output

// #include<iostream>
// using namespace std;

// void print( int n)
// {
//     if(n==1)
//     {
//         cout<<1;
//         return;
//     }
//     print(n-1);
//     cout<<n<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     print(n);
// }



// #include<iostream>
// using namespace std;
//  void print (int num,int n)
//  {
//     if(num==n)
//     {
//         cout<<num;
//         return;
//     }
//     cout<<num;
//     print(num+1,n);
//  }
//  int main()
//  {
//     int n;
//     cin>>n;
//     print (1,n);
//  }                this is not in one argument

//even number code


// #include<iostream>
// using namespace std;
//  void printEven(int n)
//  {
//     if(n==2)
//     {
//         cout<<n<<endl;
//         return;
//     }
//     printEven(n-2);
//     cout<<n<<endl;
    
//  }
//  int main()
//  {
//     int n;
//     cin>>n;
//     if(n%2==1)
//     n--;
//     printEven(n);
//  }



//factorial code

// #include<iostream>
// using namespace std;

// int fact(int n)   // ✅ return type is int
// {
//     if(n == 0 || n == 1)   // base case
//         return 1;

//     return n * fact(n-1);  // recursive case
// }

// int main()
// {
//     int n;
//     cin >> n;

//     if(n < 0)
//     {
//         cout << "factorial is not possible";
//         return 0;
//     }

//     cout << fact(n);   // ✅ print the result
// }


// #include<iostream>
// using namespace std;
//  int sum(int n)
//  {
//     if(n == 0)
//         return 0;
//     return n + sum(n-1);
//  }
//  int main()
//  {
//     int n;
//     cin>>n;
//     cout<<sum(n)<<endl;
//  }

// #include<iostream>
// using namespace std;
// int power(int n)
// {
//     if(n==0)
//     return 1;
//     return 2*power(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<power(n);
// }

//FIBONACCI SERIES

