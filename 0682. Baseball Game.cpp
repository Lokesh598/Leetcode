class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> storage;
        int ans = 0;
        int n = ops.size();
        
        for(string i: ops) {
            if(i == "C") {
                storage.pop();
            }
            
            else if (i == "D") {
                storage.push(storage.top()*2);
            }
            
            else if (i == "+") {
                int first = storage.top();
                storage.pop();
                
                int second = storage.top();
                
                storage.push(first);
                storage.push(first + second);
            }
            
            else {
                storage.push(stoi(i));
            }   
        }
        while(!storage.empty()) {
                ans += storage.top();
                storage.pop();
        }
        return ans; 
    }
};
