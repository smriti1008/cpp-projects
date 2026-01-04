#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //create vector,declare
    /*vector<int>v;
    vector<int>v1(5,1);
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;

    
    //update value
    v[1]=5;
    cout<<"size of v: "<<v1.size()<<endl;
    cout<<"capacity of v: "<<v1.capacity()<<endl;
    v1.push_back(8);
    cout<<"size of v: "<<v1.size()<<endl;
    cout<<"capacity of v: "<<v1.capacity()<<endl;*/
    //vector<int>v3={1,2,3,4,5};   online compiler pe ho jayega
    


    /*vector<int>v;
    v.push_back(3);
    v.push_back(31);
    v.push_back(13);
    v.push_back(32);
    v.push_back(37);
    v.pop_back();
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;
    
    v.erase(v.begin()+1);
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    v.insert(v.begin()+1,30);
    cout<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    v.clear();
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;*/

    

    vector<int>arr;
    arr.push_back(25);
    arr.push_back(12);
    arr.push_back(21);
    arr.push_back(15);
    arr.push_back(7);
    
    
    /*cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;
    
    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;

    vector<int>a;
    //copy value of one vector into another
    a=arr;
    cout<<a.size()<<endl;
    for(auto it=arr.begin(); it!=arr.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto i:arr)
    cout<<i<<" ";*/

   //sortingg

   sort(arr.begin(),arr.end());
   for(int i=0;i<arr.size();i++)
   cout<<arr[i]<<" ";

    
}