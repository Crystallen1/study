class SmallestInfiniteSet {
public:
    set<int> delectNum;
    SmallestInfiniteSet() {
        delectNum=set<int>();
    }

    int popSmallest() {
        if(delectNum.size()==0){
            delectNum.insert(1);
            return 1;
        }
        else{
            for(int i=1;i<delectNum.size()+1;++i){
                if(delectNum.find(i)== delectNum.end()){
                    delectNum.insert(i);
                    return i;
                }
            }
            delectNum.insert(delectNum.size()+1);
            return delectNum.size();
        }
        return 0;
    }

    void addBack(int num) {
        if(delectNum.find(num)!=delectNum.end()){
            delectNum.erase(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */