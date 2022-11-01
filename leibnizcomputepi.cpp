#include <iostream>
#include <string>

#define debuggin

using namespace std;

int main(int argc, char** argv)
{    
    double piover4 = 0;
    
    uint64_t maxnum = stoll(argv[1]);
    
    bool negative = false;
    for(uint64_t n = 1; n < maxnum; n += 2)
    {
        if(negative)
        {
            #ifdef debugging
            cout << -1 / (double)n << endl;
            #endif
            piover4 -= (1 / (double)n);
        }
        else
        {
            #ifdef debugging
            cout << 1 / (double)n << endl;
            #endif
            piover4 += (1 / (double)n);
        }
        
        negative = !negative;
    }

    cout << piover4 * 4 << endl;
    
    return 0;
}

