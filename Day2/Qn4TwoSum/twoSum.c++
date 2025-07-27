#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector <int> twoSum(vector<int> arr,int target){
    vector<int>ans;
    unordered_map<int ,int>store;
    for(int i=0;i<arr.size();i++){
        int complement =target-arr[i];
        if(store.find(complement!=store.end())){
            ans.push_back(store[complement]);
            ans.push_back(i);
        }
        mp[arr[i]]=i;
        
    }
    return ans;

}


int main()
{
    int arr=[2,7,11,15];
    int ans =twoSum(arr,9);
    return 0;

}