// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {   
//     int n,m;
//     cout<<"Enter rows and columns: ";
//     cin>>n>>m;

//     vector<vector<int>> matrix(3,vector<int>(4,1));
//     // for(int i=0;i<3;i++)
//     // for(int j=0;j<4;j++)
//     // cout<<matrix[i][j]<<" ";

//     // cout<<"Rows= "<<matrix.size();
//     // cout<<endl;
//     // cout<<"columns= "<<matrix[0].size();

//     for(int i=0;i<n;i++)
//     for(int j=0;j<n;j++)
//     cin>>matrix[n][m];

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++) 
//         cout<<matrix[n][m]<<" ";
//         cout<<endl;
//     }    
//  }



//add 2 matrix


// #include<iostream>
// using namespace std;
// int main()
// {
//  int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int arr2[3][4]={12,11,10,9,8,7,6,5,4,3,2,1};
//     int ans[3][4];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         ans[i][j]=arr1[i][j]+arr2[i][j];
//     }

//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         cout<<ans[i][j]<<" ";
//     }
//     return 0;
// }



//point sum of diagonal element


// #include<iostream>
// using namespace std;
// void printSumDig(int matrix[][3],int row, int col)
// {
//     int first=0;
//     int second=0;
//     int i=0;
//     while(i<row)
//     {
//         first+=matrix[i][j];
//         i++;
//     }
//     i=0, int j=col-1;
//     while(j>=0)
//     {
//         second+=matrix[i][j];
//         i++,j--;
//     }
//     cout<<first<<" "<<second<<" ";
// }
// int main()
// {
//     int matrix[3][3]={1,2,3,4,5,6,7,8,9};
//     printSumDig(matrix,3,3);
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     for (int i = 0; i < 3; i++)
//     {
//       start=0, end=col-1;
//       while(start<=end)
//       {
//         swap(arr[i][start],arr[j][end]);
//         start++,end--;
//       }  
//     }
    


//wave form

// #include<iostream>
// using namespace std;
// void wave(int arr[][4], int row, int col)
// {
//     for(int j=0;j<col;j++)
//     {
//         if(j%2==0)
//         {
//             for(int i=0;i<row;i++)
//             cout<<arr[i][j]<<" ";

//         }
//         else
//         {
//             for(int i=row-1;i>=0;i--)
//             cout<<arr[i][j]<<" ";

//         }        
//     }
// }
// int main()
// {
//     int arr[3][4]={1,2,3,,4,5,6,7,8,9,10,11,12};
// }
// wave(arr,3,4)




//spiral form
//transpose of a matrix

//rotate matrix by 90 deg


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
//     for(int i=0;i<row-1;i++)
//     {
//         for(int j=j+1;j<column;j++)
//         {
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
// }
