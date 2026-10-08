#include <stdio.h>

int main()
{
    int n, h;
    int height;
    int width = 0;

    scanf("%d %d", &n, &h);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &height);

        if(height > h)
        {
            width = width + 2;
        }
        else
        {
            width = width + 1;
        }
    }

    printf("%d\n", width);

    return 0;
}