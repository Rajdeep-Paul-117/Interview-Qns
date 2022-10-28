// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ cod
    int arr[4]={2,7,11,15}, target=9;
    int st=0,ed=3;
    vector<int> ans;
    while(st<ed)
    {
        int curr_sum=arr[st]+arr[ed];
        if(curr_sum==target)
        {
            ans.push_back(arr[st]);
            ans.push_back(arr[ed]);
            break;
        }
        else if(curr_sum>target)
        {
            ed--;
        }
        else
        st++;
    }
    if(ans.size())
    {
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    else
    cout<<"Target cannot be achieved";
    return 0;
}
// //arr target
// arr=[2,7,11,15],target=9
