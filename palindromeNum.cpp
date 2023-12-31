bool palindrome(int n)
{
    int ld,dup;
    int rev=0;
    dup=n;

    while(n>0)
    {
        ld=n%10;
        n=n/10;
        rev=rev*10+ld;
    }
    if(rev==dup)
        return true;
    else
        return false;
}
