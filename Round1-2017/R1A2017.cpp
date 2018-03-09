#include <iostream>
using namespace std;

int main() {
	int T, R, C;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> R >> C;
        char alpha[R][C+1], temp;
        for(int j = 0; j < R; j++)
        {
            cin >> alpha[j];
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
        cout << i+1 << "\n";
        for(int j = 0; j < R; j++)
        {
            cout << alpha[j] << "\n";
        }
    }
	return 0;
}
