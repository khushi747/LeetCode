class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> cnt1(1009);
        vector<int> cnt2(1009);
        for (int& v : target) {
            ++cnt1[v];
        }
        for (int& v : arr) {
            ++cnt2[v];
        }
        return cnt1 == cnt2;
    }
};