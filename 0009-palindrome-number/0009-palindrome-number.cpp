class Solution {
public:
    bool isPalindrome(int x){
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }

        int k=x;
        long long t=0;
        while(x!=0){
            t=t*10+x%10;
            x=x/10;
        }
        return t==k;

    }
};