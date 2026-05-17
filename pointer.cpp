// #include<iostream>
// using namespace std;
// int main()
// {
    // int a=10;
    // cout<<&a<<endl;
    // int*ptr=&a;
    // cout<<sizeof(ptr)<<endl;
    // cout<<ptr<<endl;  //address of a
    // cout<<*ptr<<endl;   //value inside a

    //Print the address of first element

    // int arr[5] = {1,2,3,4,5};
    // cout<<arr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;

    // one more method
    // int * ptr = arr;
    // cout<<ptr<<endl;

    // address of 2nd element or 1st index
    // cout<<arr+1<<endl;
    // cout<<&arr[1]<<endl;

    // print the value
    // cout<<arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+0)<<endl;
    // cout<<*ptr<<endl;

    //saare address ko print kar do

    // for(int i=0;i<5;i++)
    // cout<<arr+i<<endl;

    //print all the values

    // for(int i=0;i<5;i++)
    // cout<<ptr[i]<<endl;

    // //print all the addresses
    // for(int i=0;i<5;i++)
    // cout<<ptr+i<<endl;

    //arithmetic operation ptr++, ptr--, ptr=ptr+1;

    // for(int i=0;i<5;i++)
    // {
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<ptr+i<<" ";
    //     ptr++;
    // }



    // char arr[5]  = "1234";
    // char *ptr=arr;
    // cout<<ptr<<endl;
    // cout<<arr<<endl;                   // nahi print ho rha address elements ho rhe bas
    


    // char arr[5]  = "1234";
    // char *ptr=arr;
    // cout<<(void*)ptr<<endl;
    // cout<<*ptr<<endl; 



    // char name = 'a';
    // char*ptr = &name;
    // cout<<(void*)ptr<<endl;
    // cout<<*ptr<<endl;

//}





//functions in pointer

// #include<iostream>
// using namespace std;
 
// void swap(int p1, int p2)
// {
//     int temp =p1;
//     p1 = p2;
//     p2 = temp;
//     cout<<&p1<<endl;
//     cout<<&p2<<endl;
//     cout<<p1<<" "<<p2<<endl;
// }
// int main()
// {
//     int first=10, second=20;
//     cout<<&first<<endl;
//     cout<<&second<<endl;
//     swap(first,second);
//     cout<<first<<" "<<second;
// }




#include<iostream>
using namespace std;
 
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
}
int main()
{
    int first=10, second=20;
    cout<<&first<<endl;
    cout<<&second<<endl;
    swap(&first,&second);
    cout<<first<<" "<<second;
}