#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        int len = s.size();

        unordered_map<char,int> s_map;
        unordered_map<char,int> t_map;

        for(int i=0; i<len;i++){
            if(s_map.find(s[i]) == s_map.end()){
                s_map[s[i]] = 1;
            }
            else{
                s_map[s[i]] += 1;
            }
        }   

        for(int i=0; i<len;i++){
            if(t_map.find(t[i]) == t_map.end()){
                t_map[t[i]] = 1;
            }
            else{
                t_map[t[i]] += 1;
            }
        }
        
        for(auto x:s_map){
            if(t_map[x.first] != x.second){
                return false;
            }
        }

        return true;

    }
};





int main(){

    Solution sol;

    string s = "anagram";
    string t = "nagaram";
    if (sol.isAnagram(s,t)){
        cout<<"It is an Anangram"<<"\n";
    }
    else{
        cout<<"It is not an Anangram"<<"\n";
    }

}