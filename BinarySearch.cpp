#include<iostream>
#include<algorithm>
using namespace std;

/// Time Complexity:-
/// For Best Case Ω(1)
/// For Worst Case O(logn) 

bool binarySearch(int n,int arr[],int target)
{
    int left=0,right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(target==arr[mid])return true;
        else if(target>arr[mid])left=mid+1;
        else right=mid-1;
    }
    return false;
}
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int n;cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
     ///Array Must be sorted
     ///if it is not then
     ///sort(array,array+n);

    int target;cin>>target;
    if(binarySearch(n,array,target))cout<<"Item is Found";
    else cout<<"Item is not Found";
    

}