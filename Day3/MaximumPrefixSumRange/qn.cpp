Maximum prefix sum for a given range



class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex, vector<int>& rightIndex) {
                        
            vector<int>ans ;
            for(int i=0;i<leftIndex.size();i++){
                int leftIndexis=leftIndex[i];
                int rightIndexis=rightIndex[i];
                
                int prefix=0;
                int maxI=INT_MIN;
                for(int j=leftIndexis;j<=rightIndexis;j++){
                    prefix+=arr[j];
                    maxI=max(maxI,prefix);
                   
                }
                ans.push_back(maxI);
            }
            return ans;
                        
                        
            
       
    }
};