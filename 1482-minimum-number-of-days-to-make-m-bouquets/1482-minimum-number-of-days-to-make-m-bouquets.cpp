class Solution {
int canMake(vector<int>bloomDay,int mid,int k){
    int boquet_count=0;
    int consecutive_boquet=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            consecutive_boquet++;
        }else{
            consecutive_boquet=0;
        }
        if(consecutive_boquet==k){
            boquet_count++;
            consecutive_boquet=0;
        }
    }
    return boquet_count;
}
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int start=0,end=*max_element(bloomDay.begin(),bloomDay.end());
        int minDays=-1;
        while(start<=end){
            int mid=end+(start-end)/2;
            if(canMake(bloomDay,mid,k)>=m){
                minDays=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    return minDays;
    }
};