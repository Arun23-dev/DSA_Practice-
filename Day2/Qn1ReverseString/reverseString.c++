#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void  reverseString(string &s){

    int n=s.size();
    reverse(s.begin(),s.end());

    int start=0;
   for(int end=0;end<=n;end++){
         if(end==n || s[end] == '.'){
             reverse(s.begin()+start,s.begin()+end);
              start=end+1;


    }
   }
   
}
// ok also think about handeling the edge cases 


int main()
{
    string s=".i.like.this.program.very.much..";
    reverseString(s);
    cout<<s;
    return 0;
}