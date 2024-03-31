#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates( std::vector<int>& nums ) {
        int k = 0;
        std::vector<int> temp;
        for( int i = 0 ; i < nums.size() ; i++ ) {
            if ( i == 0) {
                temp.push_back( nums[ i ] );
                k++;
            }
            else {
                if ( nums[ i ] == temp[ k - 1 ] ) {
                    continue;
                }
                else {
                    temp.push_back( nums[ i ] );
                    k++;
                }
            }
        }
        // for( auto num : temp ) {
        //     std::cout << num << " ";
        // }
        nums = temp;
        return ( k );
    }
};
int main ( void ) {
    Solution sol;
    // std::vector<int> nums = { 1, 1, 2 };
    // int cevap = sol.removeDuplicates( nums );
    std::vector<int> nums = { 0,0,1,1,1,2,2,3,3,4 };
    int k = sol.removeDuplicates( nums );
    std::cout << "\nk=" << k << "\n";
}