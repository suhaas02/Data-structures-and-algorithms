class Solution {
public:
    int totalMoney(int n) {
        int cnt=0;
        int ans=1;
        int res=0;
        while(cnt<n){
            if(cnt%7==0){
                ans=(cnt/7)+1;
            }
            res+=ans;
            cnt++;
            ans++;
        }
        return res;
    }
};