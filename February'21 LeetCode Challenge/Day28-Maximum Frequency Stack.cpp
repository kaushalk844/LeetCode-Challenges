class FreqStack {
    
    priority_queue<pair<int, pair<int,int >>> q;
    unordered_map<int,int> freq;
    int i = 0;
    
public:
    FreqStack() {
        
    }
    
    void push(int x) {
        q.emplace(++freq[x], make_pair(++i,x));
    }
    
    int pop() {
        auto x = q.top();
        q.pop();
        
        int ans = x.second.second;
        freq[ans]--;
        return ans;
        
    }
};
