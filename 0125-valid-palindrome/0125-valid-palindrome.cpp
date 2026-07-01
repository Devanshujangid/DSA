class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
         int right=s.length()-1;
         while ( left<right ){
    //     // when left char is non-alphanumeric then left++
         while ( left<right && !isalnum(s[left]) ) left++;
    //     // when right char is non-alphanumeric then right--
         while (left<right && !isalnum(s[right]) ) right--; 

    //     // ab yeh fix ho gya ki left and right are alphanumeric!
    //     // now if lowercases on both side not equal
         if ( tolower(s[left]) != tolower(s[right]) ) return false;
         left++;
         right--;
        }
    return true;

    // int left=0 ;
    //     int right=s.length()-1;

    //     while (left<right){
    //         while ( left<right && !isalnum(s[left]) ) left++;
    //         while ( left<right && !isalnum(s[right]) ) right--;
    //         if ( tolower(s[left]) != tolower(s[right]) ) return false;
    //         left++;
    //         right--;
    //     }
    //     return true;
    // }

  }
};