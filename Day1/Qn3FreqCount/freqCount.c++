

class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        
        // Your code here
        
        
        //create an array for the frequecy count of the lowercase 
        vector<int>freqCount(26,0);
        for(int i=0;i<s.size();i++){
            freqCount[s[i]-97]++;
        }
        int  count=freqCount[0];
        char character='a';
        
        
        for(int i=1;i<freqCount.size();i++){
            if(freqCount[i]>count){
                count=freqCount[i];
                character=i+'a';
                
            }
        }
        return character;
    }
};
