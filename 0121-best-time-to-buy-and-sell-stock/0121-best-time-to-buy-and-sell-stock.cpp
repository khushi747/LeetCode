class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int arr2[arr.size()];
        int size=arr.size();
        arr2[0] = INT_MAX;

        for (int i = 1; i < size; i++)
        {
            arr2[i] = min(arr2[i - 1], arr[i-1]);
        }

        int maxprofit = 0;
        int currentprofit = 0;

        for (int j = 0; j < size; j++)
        {
            currentprofit = arr[j] - arr2[j];
            maxprofit = max(maxprofit, currentprofit);
        }
        return maxprofit;
    }
};