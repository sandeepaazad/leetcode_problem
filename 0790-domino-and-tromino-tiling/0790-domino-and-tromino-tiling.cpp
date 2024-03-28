class Solution {
public:
    int mod=1e9+7;
    unordered_map<int,long>fully;
    unordered_map<int,long>partially;
    long par(int n){
        if(partially.find(n)!=partially.end()){
            return partially[n];
        }
        long val;
        if(n==2){
            val=1L;
        }else{
            val=(par(n-1)+full(n-2))%mod;
        }
        partially[n]=val;
        return val;
    }
    long full(int n){
        if(fully.find(n)!=fully.end())
            return fully[n];
        long val;
        if(n==1)
            val=1L;
        else if(n==2)
            val=2L;
        else
            val=(full(n-1)+full(n-2)+2*par(n-1))%mod;
        fully[n]=val;
        return val;
    }
    int numTilings(int n) {
        return static_cast<int>(full(n));
        
    }
};