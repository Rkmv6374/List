
#include <bits/stdc++.h>
using namespace std;
  

int binary_search(vector<int>&arr,int value)
     {     // 1 3 5  8 10 11 13 ->6,9
         int l =0,r=arr.size()-1;
         while(l<r)
         {
             int mid = l+(r-l)/2;
             if(arr[mid] == value) return mid;
             if(arr[mid]>value)
             {
                 r = mid;
             }
             else{l = mid+1;}
         }
         return l;
     }

int main()
{

    vector<int>arr={1,2,4,8,10,19,20};
    
    cout<<binary_search(arr,5);
    return 0;

}