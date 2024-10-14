//DETAILED SOLUTION WITH USER INPUT-

#include<iostream>
using namespace std;
void printArr(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void RotateArray(int arr[],int n,int k)
{
    int ans[n]; //separte array for storing the new updated array with modified indices
    int index;
    int newIndex=0;
    for(index=0; index<n; index++)
    {
        newIndex=(index+k)%n;
        ans[newIndex]=arr[index];
    }
    for(int i=0; i<n; i++)
    {
        arr[i]=ans[i];
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"By how many bits do you want to rotate the array:";
    cin>>k;
    RotateArray(arr,n,k);
    cout<<"The rotated array is:"<<endl;
    printArr(arr,n);
    return 0;
}

// LEET CODE SOLUTION


// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n=nums.size();
//         vector<int>ans(n);
//         for(int index=0; index<n; index++)
//         {
//             int newIndex=(index+k)%n;
//             ans[newIndex]=nums[index];
//         }
//         nums=ans;
//     }
// };




//LOGIC AND ANALYSIS-
//we have used a simple formula by seeing the pattern of input and output
//newIndex=(index+k)%n;  (Formula)
//we have taken a separatae temporarary array for storing the new updated array with modified indices ie. newIndex
//and at last we have copied the temporary array to the original array
