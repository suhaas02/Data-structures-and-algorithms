class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        stack<string> op;
        int ans = 0;
        for(int i = 0; i < tokens.size(); i++)
        {
            if(tokens[i] == "+" or tokens[i] == "-" or tokens[i] == "*" or tokens[i] == "/")
            {
                int a = nums.top();
                nums.pop();
                int b = nums.top();
                nums.pop();
                if(tokens[i] == "+")
                    nums.push(a + b);
                else if(tokens[i] == "-")
                    nums.push(b - a);
                else if(tokens[i] == "*")
                    nums.push(a * b);
                else
                    nums.push(b / a);
            }
            else
            {
                nums.push(stoi(tokens[i]));
            }
        }
        return nums.top();
    }
};