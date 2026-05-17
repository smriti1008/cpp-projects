#inclue<iostream>
using namespace std;
int main()
{
 int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={12,11,10,9,8,7,6,5,4,3,2,1};
    int ans[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        ans[3][4]=arr1[3][4]+arr2[3][4];
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        cout<<ans[3][4]<<" ";
    }
}