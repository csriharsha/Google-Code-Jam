#include <iostream>
using namespace std;
 
int main() {
    
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int Hd, Ad, Hk, Ak, B, D, maxH, key, count = 0;
        cin >> Hd >> Ad >> Hk >> Ak >> B >> D;
        maxH = Hd;
        
        for(;;)
        {
            key = 1;
        
            if(Hk <= 0)
            {
                cout << "Case #" << i+1 << ": " << count << "\n";
                break;
            }
        
            if(Hd <= 0)
            {
                cout << "Case #" << i+1 << ":" << "IMPOSSIBLE" << "\n";
                break;
            }
        
            if(Hd <= 2*Ak && Hd == maxH && key)
            {
                if(B > D && Hk - (Ad+B) <= 0 && key) 
                {
                    Ad = Ad + B;
                    Hd = Hd - Ak;
                    key = 0;
                    count = count + 1;
                    continue;
                }
                else if(B <= D && D != 0 && key)
                {
                    Ak = Ak - D;
                    Hd = Hd - Ak;
                    key = 0;
                    count = count + 1;
                    continue;
                }
                else
                {
                    cout << "Case #" << i+1 << ":" << "IMPOSSIBLE" << "\n";
                    key = 0;
                    count = count + 1;
                    break;
                }
            
            }
        
            if(Hd != maxH && Hd <= Ak && Hd - (Ak-D) <= 0 && key)
            {
                if(Hk - Ad > 0)
                {
                    Hd = maxH;
                    Hd = Hd - Ak;
                    key = 0;
                    count = count + 1;
                    continue;
                }
                else
                {
                    Hk = Hk - Ad;
                    key = 0;
                    count = count + 1;
                    continue;
                }
            
            }
        
            if(Ad > 0 && (Hk/Ad) > (Hk/(Ad+B)) && key)
            {
                Ad = Ad + B;
                Hd = Hd - Ak;
                key = 0;
                count = count + 1;
                continue;
            }
        
            if(Ak - D == 0 && key)
            {
                Ak = Ak - D;
                Hd = Hd - Ak;
                key = 0;
                count = count + 1;
                continue;
            }
        
            if(Ak > 0 && (Hd/Ak) + Hd%(Ak-D) > (Hd/(Ak-D)) + Hd%Ak && Hd - (Ak-D) > 0 && key)
            {
                Ak = Ak - D;
                Hd = Hd - Ak;
                key = 0;
                count = count + 1;
                continue;
            }
        
            Hk = Hk - Ad;
            count = count + 1;
            Hd = Hd - Ak;
            
        } 
    }
   return 0;
}
