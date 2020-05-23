/**
 * Determine whether an integer is a palindrome.
 * An integer is a palindrome when it reads the same backward as forward.
 */

bool isPalindrome( int x )
{
    if( x < 0 ) {
        return 0;
    }
    int temp = x;
    unsigned int rev = temp % 10;
    while( temp /= 10 ) {
        rev = rev * 10 + temp % 10;
    }
    
    return rev == x;
}
