class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        // to store the final result
        vector<vector<int>>result(numRows);

        // I will fill every row one by one.
        for ( int i=0 ; i<numRows ; i++ ){
            // total elements in a perticular row == i+1
            // so No. of cols. in i'th row == i+1
            // so declare an array that will store the elements of every row
            // initialize it with 1 so we will override it later
            //vector<int>EveryRow(i+1,1); -> this will store in result
            result[i] = vector<int>(i+1,1);

            // now fill every row
            for ( int j=1 ; j<i ; j++ ){
                result[i][j]=result[i-1][j]+result[i-1][j-1];
            }
        }

    return result;
    }
};