class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        vector<int>res(n);
        bool skip=false;
        int idxInDeck=0,idxInRes=0;
        sort(deck.begin(),deck.end());
        while(idxInDeck<n){
            if(res[idxInRes]==0){
                if(!skip){
                    res[idxInRes]=deck[idxInDeck];
                    idxInDeck++;
                }
            skip=!skip;
            }
        idxInRes=(idxInRes+1)%n;
        }
    return res;
    }
};