class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
            int prefixSum=0;
            int maxAns=INT_MIN;
            for(int i=0;i<arr.size();i++){
                prefixSum+=arr[i];
                maxAns=max(maxAns,prefixSum);
                if(prefixSum<0)
                {
                    prefixSum=0;
                }
            }
            return maxAns;
        
    }
};