bool check(char s){
    if (s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
                return true;
            }
    return false;
}

class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt=0;
        int maxcnt=0;
        int i=0;
        for (i;i<k;i++){
            if (check(s[i])){
                cnt++;
            }
        }
        maxcnt=max(cnt,maxcnt);
        int j=0;
        while (i<s.size()){
            if (check(s[j])){
                cnt--;
            }
            if (check(s[i])){
                cnt++;
            }
            maxcnt=max(cnt,maxcnt);
            i++;
            j++;
        }
        return maxcnt;
    }
};