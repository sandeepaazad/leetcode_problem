class Solution {
public:
    int BS(int n){
        int left=0,right=n;
        long long int mid=left+(right-left)/2;
        long long int ans=-1;
        while(left<=right){
            long long int square=mid*mid;
            if(square==n)
                return mid;
            else if(square<n){
                ans=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
            mid=left+(right-left)/2;
        }
        return ans;
    }
public:
    int mySqrt(int x) {
        return BS(x);
        
    }
};