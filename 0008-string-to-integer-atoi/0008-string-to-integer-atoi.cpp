class Solution {
public:
    int myAtoi(string s) {
        // decalre for iterating via string
        int i=0;
        int n=s.size();
        // store the obtained integer 
        long long num = 0;
        // flag varaibale for sign 
        int sign = 1; // by default +


        // rule 1-> skip leading spaces
        while ( i<n && s[i]==' ' ) i++;

        // rule 2->handle sign 
        if ( i<n && (s[i]=='+' || s[i]=='-') ){
            // if - then set sign=-1
            if ( s[i]=='-' ) sign = -1;
            //else move forward
            i++;
        }

    // finally forming integer and parsing the digits 
    while ( i<n && isdigit(s[i]) ){
        num = num*10 + (s[i]-'0');

        if ( sign*num < INT_MIN ) return INT_MIN;
        if ( sign*num > INT_MAX ) return INT_MAX;

        i++;
     }

     // now return final integer with sign whatever it has 
     return sign*num;
    }
};