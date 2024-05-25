class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(),s.end());


        int size=s.size();
        int j=size-1;
        char k;

        for(int i=0;i<size/2;i++){
            k=s[i];
            s[i]=s[j];
            s[j]=k;
            j--;
        }        
    }
};