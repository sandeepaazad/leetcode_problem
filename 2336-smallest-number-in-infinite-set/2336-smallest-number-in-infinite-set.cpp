class SmallestInfiniteSet {
    set<int>addedInt;
    int currInt;
public:
    SmallestInfiniteSet() {
        currInt=1;
    }
    
    int popSmallest() {
        int ans;
        if(!addedInt.empty()){
            ans=*addedInt.begin();
            addedInt.erase(addedInt.begin());
        }else{
            ans=currInt;
            currInt+=1;
        }
    return ans;
    }
    
    void addBack(int num) {
        if(currInt<=num || addedInt.find(num)!=addedInt.end()){
            return;
        }
    addedInt.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */