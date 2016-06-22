#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int arr[1000100];

int main()
{
    int i, j, loc, temp, n;
    while(scanf("%d", &n) == 1)
    {

        for(i = 0; i < n; ++i)
            scanf("%d", &arr[i]);

        for(i = 0; i < n; ++i)
        {
            loc = i;
            for(j = i + 1; j < n; ++j)
                if(arr[j] < arr[loc])
                    loc = j;

            temp = arr[i];
            arr[i] = arr[loc];
            arr[loc] = temp;
        }

        for(i = 0; i < n; ++i)
            printf("%d ", arr[i]);
        printf("\n\n");
    }
    return 0;
}

