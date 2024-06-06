class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0)
            return false;
        map<int,int>card_count;
        for(int card:hand){
            card_count[card]++;
        }
        vector<int>unique_card;
        for(auto& entry:card_count){
            unique_card.push_back(entry.first);
        }
        sort(unique_card.begin(),unique_card.end());
        for(int card:unique_card){
            while(card_count[card]>0){
                for(int i=0;i<groupSize;i++){
                    if(card_count[card+i]<=0)
                        return false;
                    card_count[card+i]--;
                }
            }
        }
    return true;
    }
};