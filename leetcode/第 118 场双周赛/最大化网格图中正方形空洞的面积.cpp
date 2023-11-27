//
// Created by 71989 on 2023/11/27.
//
class Solution {
public:
    int hasconsistency(vector<int>& arr){

        int cur=1;
        int most=1;
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] != arr[i - 1]) {
                if (arr[i] == arr[i - 1] + 1) {
                    cur++;
                } else {
                    most = max(most, cur);
                    cur = 1;
                }
            }
        }
        return max(most,cur);
    }
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int minedge=min(n,m);
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        int minr=min(hasconsistency(hBars),hasconsistency(vBars))+1;
        return minr*minr;
    }
};