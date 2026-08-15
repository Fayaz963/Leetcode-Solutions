// Last updated: 8/15/2026, 5:33:44 PM
bool isPalindrome(int x) {


     // Negative numbers and numbers ending in 0 (but not 0 itself) are not palindromic
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    
    int reversedHalf = 0;
    while (x > reversedHalf) {
        // Extract the last digit and add it to reversedHalf
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }
    
    // Check if the first half (x) is equal to the reversed second half (reversedHalf)
    return x == reversedHalf || x == reversedHalf / 10;
}

