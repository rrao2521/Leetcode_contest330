class Solution {
public:
    vector<int>distinct;
    int distinctIntegers(int n) {
        distinct.push_back(n);
        int counter = 0;
        while(counter <distinct.size()){
            for(int i=1; i<distinct[counter]; i++){
                if(distinct[counter]%i==1){
                    distinct.push_back(i);
                }
            }counter++;
        }
        set<int>s;
        for(int i=0; i<n; i++){
            s.insert(distinct[i]);
        }
     return s.size();
    }
};
