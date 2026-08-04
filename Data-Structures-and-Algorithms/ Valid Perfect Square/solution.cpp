class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<2)return true;
        int left=1;
        int right=num;


        while(left<=right){
            long long  mid =left+(right-left)/2;
            long long sqr=mid*mid;

            if(sqr==num){
                return true;
            }else if(sqr<num){
                left=mid+1;
            }else {
                right=mid-1;
            }
        }

        return false;

    }
};