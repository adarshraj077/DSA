class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>f;

        for(int x:nums){
            f[x]++;
        }

        int i=1;
        int val=k;

        while(k){
            if(f.find(k)==f.end()){
                return k;
            }
            i +=1;
             k=val*i;
            //  i++;
        }
        return k;
    }
};