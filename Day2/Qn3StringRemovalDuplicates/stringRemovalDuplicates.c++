// #include<iostream>
// #include<unordered_map>
// using namespace std;

// void  StringRemovalDuplicates(string &s){
//     unordered_map<char, int>umap;
//     umap['a']=10;
//     umap['b']=20;


//     for(auto it:umap){
//         cout<<it.first<<" "<<it.second<<endl;
//     }

// }

// int main()
// {

//     string s="HaPpyNewYear";
//     StringRemovalDuplicates(s);
//     cout<<s;
// }

#include<iostream>
#include<unordered_map>
using namespace std;
string stringRemovalDuplicate(string s){

    unordered_map<char,int>store;
    string s1="";
    for(int i=0;i<s.size();i++){
        if(store[s[i]]==0)
        {
             s1+=s[i];
            store[s[i]]++;
        }
       
    }
    return s1;
}

int main()
{
    string s;
    s="HaPpyNewYear";
    string ans=stringRemovalDuplicate(s);
    cout<<ans;
}