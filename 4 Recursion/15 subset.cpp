#include<bits/stdc++.h>
using namespace std;

void subset(string s, vector<string> &v, string curr = " ", int index = 0){

    if (index == s.length()){
        v.push_back(curr);
        return;
    }
        
    subset(s, v, curr, index+1);
    subset(s, v, curr+s[index], index+1);
}

vector<string> powerSet(string str){
    vector<string> v;
    subset(str, v);

    return v;
}

int main(){
    
    string s = "abcd";
    reverse(s.begin(), s.end());
    vector<string> sub = powerSet(s);
    for (auto i : sub)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}
