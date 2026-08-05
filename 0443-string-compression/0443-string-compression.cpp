class Solution {
public:
    int compress(vector<char>& chars) {
       string ans="";
       int n=chars.size();
       int count=1;
       for (int i=0;i<n;i++){
        
        if (i>0 && chars[i-1]==chars[i]){
            count++;
        }
        else if (i>0 && chars[i-1]!=chars[i]){
            if (count==1){
                ans+=chars[i-1];
            }
            else {
                ans+=chars[i-1];
                ans+=to_string(count);
                count=1;
            }
        }
       }
        if (count==1){
                ans+=chars[n-1];
            }
        
        else{
            ans+=chars[n-1];
       ans+=to_string(count);
        }
       
        for (int i=0;i<ans.size();i++){
        chars[i]=ans[i];
       }
       return ans.size();
    }
};