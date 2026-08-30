class Solution {
public:
    // helper(int Zero_Row_no, int Zero_Col_no, )
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n = matrix[0].size(); // col 
        int m = matrix.size(); // row

        // store the indexes where 0 is present 
        vector<bool>ZeroRows(m,false);  //assume that nowhere '0' is present 
        vector<bool>ZeroCols(n,false);  // and if we found 0 -> we will mark them '1' i.e true

        // fill ZeroRows and Zrro cols
        for ( int i=0 ; i<m ; i++ ){
            for ( int j=0 ; j<n ; j++ ){
                if ( matrix[i][j] == 0 ){
                    ZeroRows[i] = true;
                    ZeroCols[j] = true;
                }
            }
        }

        // scan the matrix
        for ( int i=0 ; i<m ; i++  ){
            for ( int j=0 ; j<n ; j++ ){
                if ( ZeroRows[i]==true || ZeroCols[j]==true ){
                    // make entire row and col of the matrix == 0
                    matrix[i][j] = 0;
                }
            }
        }

    }












        // step 1: search for '0' in matrix and record its row_no. and col_no.
        // int Zero_row_no;
        // int Zero_col_no;

        // for ( int i=0 ; i<m ; i++ ){
        //     for ( int j=0 ; j<n ; j++ ){
        //         if ( matrix[i][j] == 0 ){
        //             Zero_row_no=i;
        //             Zero_col_no=j;
        //         }
        //         // kuch call ho
        //     }
        // } // how will I manage this loop if I got through more than one zeroes in matrix 

        // // now move into all four directions of this Zero_row_no and Zero_col_no

        // // for up direction
        // for ( int row=Zero_row_no ; row>=0 ; row-- ){
        //     mat[row][Zero_col_no] == 0;
        // }

        // // for down direction
        // for ( int row=Zero_row_no ; row<m ; row++ ){
        //     mat[row][Zero_col_no] == 0;
        // }

        // // for left direction
        // for ( int col=Zero_col_no ; col>=0 ; col-- ){
        //     mat[Zero_row_no][col] == 0;
        // }

        // // for right direction
        // for ( int col=Zero_col_no ; col<n ; col++ ){
        //     mat[Zero_row_no][col] == 0;
        // }



    
};