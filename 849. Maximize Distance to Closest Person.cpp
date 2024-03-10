class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int k=0;
        int ans=0;
        int n=seats.size();
        for(int i=0;i<n;++i){
            if(seats[i]==1){
                k=0;
            }else{
                k++;
                ans=max(ans,(k+1)/2);
            }
        }
        for(int i=0;i<n;++i){
            if(seats[i]==1){
                ans=max(ans,i);
                break;
            }
        }
        for(int i=n-1;i>=0;--i){
            if(seats[i]==1){
                ans=max(ans,n-1-i);
                break;
            }
        }
    return ans;
    }
};
