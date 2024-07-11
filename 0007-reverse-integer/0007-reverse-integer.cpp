class Solution {
public:
    int reverse(int n) {
        
        long long ans=0;
        while(n!=0){
            ans=ans*10+n%10;
            n/=10;
        }
        if(n<0){ans=ans*(-1);}
        if(abs(ans)>2147483648)
        {
            ans=0;
        }
        return ans;

        // long long revInt=0;
        // int rem=0;
        // while(x!=0){
        //     rem=x%10;
        //     revInt=revInt*10+rem;
        //     x=x/10;
        // }
        
        // //Consider Boundaries, which i initially forgot and got errors
        // if(revInt>INT_MAX || revInt<INT_MIN) return 0; 

        // return revInt;
    }
};

 

