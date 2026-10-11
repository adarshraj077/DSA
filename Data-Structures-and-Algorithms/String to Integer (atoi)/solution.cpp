class Solution {
public:
    int myAtoi(string s) {
        bool isNeg=false;

        long long ans=0;
        int i=0;
        int n=s.size();

        long long limit = isNeg ? 2147483648LL : 2147483647LL;

        while(s[i]==' '){
            i++;
        }
        
           if(s[i]=='-'){
            isNeg=true;
            i++;
           }else if(s[i]=='+'){
            i++;
           }


        
           while(i<n && std::isdigit(static_cast<unsigned char>(s[i]))){
            int digit = s[i]-'0';

           if(ans > (limit-digit)/10){
            return isNeg?INT_MIN :INT_MAX;
           }

           ans=ans*10+digit;
           i++;   
           }

           if(isNeg){return static_cast<int>(-ans);}
           
    
           return ans;
        
    }
};