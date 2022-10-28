// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n=5;
    int arr[n]={-1,-2,-4,5,3}, target=0;
    //-1,-1,-1,0,1,2,4
    vector<vector<int>> ans;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(i>0&&arr[i]==arr[i-1])
        continue;
        int st=i+1,ed=n-1;
        while(st<ed)
        {
            int curr_sum=arr[i]+arr[st]+arr[ed];
            if(curr_sum==target)
            {
                ans.push_back({arr[i],arr[st],arr[ed]});
                st++;
                ed--;
                while(st<n&&st-1>=0&&arr[st]==arr[st-1])
                st++;
                while(ed>=0&&ed+1<n&&arr[ed]==arr[ed+1])
                ed--;
            }
            else if(curr_sum<target)
            {
                st++;
            }
            else
            {
                ed--;
            }

        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<"\n";
    }
    return 0;
}
//-1,-2,-4,5,3
