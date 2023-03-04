#include <stdio.h>
int egs0(int a)
{

    return a > 0 ? 1 : a < 0 ? -1
                             : 0;
}
int main()
{
    int x, y;
    printf("Enter cordinates ");
    scanf("%d %d", &x, &y);
    char *quad;
    if (x == 0 && y == 0)
    {
        quad = "origin";
    }
    else
    {
        if (egs0(x) == egs0(y))
        {
            if (egs0(x) == -1)
            {
                quad = "third";
            }
            else
            {
                quad = "first";
            }
        }
        else
        {
            if (egs0(x) == 1)
            {
                quad = "fourth";
            }
            else
            {
                quad = "second";
            }
        }
    }
    printf("%s", quad);
}
