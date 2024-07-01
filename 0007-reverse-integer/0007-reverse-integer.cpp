class Solution {
public:
    int reverse(int x) {
        long revInt=0;
        int rem=0;

        while(x!=0){
            rem=x%10;
            revInt=(revInt*10)+rem;
            x=x/10;
        }
        if(revInt>INT_MAX || revInt<INT_MIN) return 0; 
        return revInt;
    }
};