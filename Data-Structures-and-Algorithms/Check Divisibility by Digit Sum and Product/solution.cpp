class Solution {
public:
    bool checkDivisibility(int n) {
        int copy=n;
        int rem=0;
        long long digitSum=0;
        long long digitProduct=1;

        while(n){
            rem=n%10;
            digitSum+=rem;
            digitProduct*=rem;
            n=n/10;
        }

        if(copy%(digitSum+digitProduct)==0 ){
            return true;
        }

        return false;
        
    }
};