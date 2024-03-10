class Solution {
int solve(int n,int k){
    if(n==1)
        return 0;
    int total_element=pow(2,(n-1));
    int half_element=total_element/2;
    if(k>half_element)
        return 1-kthGrammar(n, k-half_element);
    return solve(n-1,k);
}
public:
    int kthGrammar(int n, int k) {
        return solve(n,k);
        
    }
};
