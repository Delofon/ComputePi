#include <iostream>
#include <math.h>
#include <random>

using namespace std;

double randcoord()
{
    double f = (double)rand() / RAND_MAX;
    return f * 2 - 1; // lerp from -1 to 1
}

int main(int argc, char **argv)
{
    uint64_t pointstosim = stoul(argv[1]);
    uint64_t pointshit = 0;
    srand(1000);
    for(uint64_t i = 0; i < pointstosim; i++)
    {
        double x = randcoord();
        double y = randcoord();
        
        if(x * x + y * y < 1)
        {
            pointshit++;
        }
    }
    
    double probability = (double)pointshit / (double)pointstosim;
    double pi = probability * 4;
    cout << pi << endl;
    
    return 0;
}

