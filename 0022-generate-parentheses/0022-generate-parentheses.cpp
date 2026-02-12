class Solution {
public:
   // method 2 
    vector<string>result;
    vector<string> generateParenthesis(int n) {
        // via recurssion
        string curr="";
        int open=0;
        int close=0;
        solve(curr,n,open,close);
        return result; 
    }

    void solve(string& curr , int n , int open , int close ){
        if ( curr.length() == 2*n ){  // base case where string formation stops 
            result.push_back(curr);
            return;
        }
        if ( open<n ){
        curr.push_back('('); // option 1->open bracket daal do
        solve(curr,n,open+1,close);
       // else put the close bracket
       curr.pop_back();
        }
        
        if ( close<open ){
       curr.push_back(')'); // option 2->close bracket daal do 
       // again recurrsion to explore
       solve(curr,n,open,close+1);
       curr.pop_back();
        }
    }
};