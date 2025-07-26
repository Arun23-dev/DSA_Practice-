#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagrams(string s1, string s2) {
    // Your code goes here
     int count=0;
    int  s1Length=s1.size();
    int  s2Length=s2.size();

        
        vector<int> freqCount(26,0);
        for(int i=0;i<s1Length;i++){
            freqCount[s1[i]-'a']++;
        }
        for(int j=0;j<s2Length;j++ ){
            freqCount[s2[j]-'a']--;
        }

        for(int k=0;k<freqCount.size();k++){
           
                count+=abs(freqCount[k]);
            
        }

    return count;
}
int main()
{
    cout<<remAnagrams("abdedf","efa")<<endl;
    return 0;

}