class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    //     int smallest =1;

    //     sort(nums.begin(),nums.end());

    //     for(int x:nums){
    //         if(x==smallest)smallest++;
    //     }

    //   return smallest;

     int smallest=1;
        unordered_set<int>set;

        for(int x:nums){
          set.insert(x);
        }

        while(set.contains(smallest)){
            smallest++;
        }

        return smallest;




    }
};