class Solution {
public:
    void reverseString(vector<char>& s) {
        // int st=0,end=s.size()-1;

        // while(st<end){
        //    swap(s[st++],s[end--]);
           
        // }
        
        int n=s.size()-1;
        for(int i=0;i<s.size()/2;i++){
            swap(s[i],s[n-i]);
        }




    }
};