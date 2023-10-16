#include<iostream>
using namespace std;
int firstOccur(int arr[],int n,int key)
{
    int start = 0;
    int end = n-1;
    int ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]<key)
        {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int lastOccur(int arr[],int n, int key)
{
    int start =0;
    int end = n-1;
    int ans = -1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            ans = mid;
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}



int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    int total = lastOccur(arr,n,key)-firstOccur(arr,n,key)+1;
    cout<<total;

}
