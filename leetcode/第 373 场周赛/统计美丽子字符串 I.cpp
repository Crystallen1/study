//
// Created by 71989 on 2023/11/27.
//
class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int count=0;
        int yuanyin=0;
        int fuyin=0;
        for(int i=0;i<s.length();++i){
            yuanyin=0;fuyin=0;
            for(int j=i;j<s.length();++j){
                if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                    yuanyin++;
                }else{
                    fuyin++;
                }
                if(yuanyin==fuyin&&(yuanyin*fuyin)%k==0){
                    count++;
                }
            }
        }
        return count;
    }
};