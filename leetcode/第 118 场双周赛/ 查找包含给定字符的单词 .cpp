//
// Created by 71989 on 2023/11/27.
//
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        for(int i=0;i<words.size();++i){
            if(words[i].find(x)<=words[i].size()){
                result.push_back(i);
            }
        }
        return result;
    }
};
