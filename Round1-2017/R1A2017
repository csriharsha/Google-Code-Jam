#include <stdio.h>
#include <string.h>
 
int main() {
    int T, R, C;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d %d", &R, &C);
        char alpha[R][C+1], temp;
        for(int j = 0; j < R; j++)
        {
            scanf("%s", &alpha[j]);
            for(int k = 0; k < C; k++)
            {
                if(alpha[j][k] != '?')
                temp = alpha[j][k];
            }
        }
        for(int j = 0; j < R; j++)
        {
            for(int k = 0; k < C; k++)
            {
                if(alpha[j][k] == '?')
                alpha[j][k] = temp;
            }
        }
        printf("Case #%d:\n", i+1);
        for(int j = 0; j < R; j++)
        {
            printf("%s\n", alpha[j]);
        }
    }

   return 0;
}
