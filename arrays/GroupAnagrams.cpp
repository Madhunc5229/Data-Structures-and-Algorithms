#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;


class Solution {
public:

    string getKey(string str){
        vector<int> count(26);
        
        for(int i=0; i<str.size(); i++){
            count[str[i] - 'a']++;
        }
        string key="";
        for(int i=0; i<26; i++){
            key.append(to_string(count[i]) + 'a');
        }
        return key;

    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string,vector<string>> str_map;

        for(int i=0; i<strs.size(); i++){
            //or you can also sort the string and use that as keys
            string s = getKey(strs[i]);
            if(str_map.find(s) == str_map.end()){
                vector<string> tmp = {strs[i]};
                str_map[s] = tmp; 
            }
            else{
                str_map[s].push_back(strs[i]);
            }                 
        }

        for(auto x : str_map){
            output.push_back(x.second);
        }

        return output;


    }
};


int main(){

    Solution sol;

    vector<string> test = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> output = sol.groupAnagrams(test);

}