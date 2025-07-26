
string merge(string S1, string S2) {
    // your code here
    int S1Length=S1.size();
    int S2Length=S2.size();
   string ans="";
    
    int i=0;
    while(i<min(S1Length,S2Length))
   {
        ans.push_back(S1[i]);
        ans.push_back(S2[i]);
        i++;
    }
   while(i<S1Length)
   {
       ans.push_back(S1[i]);
       i++;
   }
   while(i<S2Length){
       ans.push_back(S2[i]);
       i++;
   }
   return ans;
}