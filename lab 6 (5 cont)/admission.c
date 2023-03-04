#include <stdio.h>
int main()
{
    int maths, phy, chem;
    printf("enter marks in maths phy chem");
    scanf("%d %d %d", &maths, &phy, &chem);
    if ((maths >= 65 && phy >= 55 && chem >= 50) && ((maths + phy + chem) >= 190 || (maths + phy) >= 140))
    {
        printf("Eligible");
    }
    else
    {
        printf("not eligible");
    }
    return 0;
}