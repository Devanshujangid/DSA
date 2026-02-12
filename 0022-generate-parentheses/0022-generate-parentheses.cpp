class Solution {
public:
    vector<string>result;
    vector<string> generateParenthesis(int n) {
        // via recurssion
        string curr="";
        solve(curr,n);
        return result; 
    }

    void solve(string& curr , int n ){
        if ( curr.length() == 2*n ){  // base case where string formation stops 
            // means now you have made string and now you have to store it in result but check it first
            if (isValid(curr)){
                result.push_back(curr);
            }
            return;
        }
        curr.push_back('('); // option 1->open bracket daal do
        solve(curr,n);
       // else put the close bracket
       curr.pop_back();
       curr.push_back(')'); // option 2->close bracket daal do 
       // again recurrsion to explore
       solve(curr,n);
       curr.pop_back();

    }


    bool isValid(string &str){
        int count = 0;
        for ( char &ch:str ){
            if ( ch=='(' ) count++;
            else count--; 
            if ( count<0 )return false;
        }
    return count==0;
    }
};