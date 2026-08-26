class Solution {
public:
    int strStr(string haystack, string needle) {
        int windowSize=needle.size();
        int n=haystack.size();

        // if(windowSize==n){return 0;}

        if(windowSize>(n)){return -1;}

        for(int i=0;i<=n-windowSize;i++){
            if(haystack.substr(i,windowSize)==needle){
                return i;
            }
        }

         return -1;
    }
};