class Solution {
public:
    long long countCommas(long long n) {
        // 1-3 0 commas 
        // 4   1 commas
        // 5 1 commas 
        // 6 2 commas
        // 7 2 commas
        //8 2 commas
        //9 3 commas 
        if(n<999) return 0;

        long long ans=0;

        for(long long x=1000;x<=n;x*=1000){
            ans+=n-x+1;
            if(x>n/1000){break;}
        }

        return ans;

    }
};