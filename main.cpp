#include <iostream>

#include "RuningTime.hpp"

using namespace std;

int main()
{
    RuningTimer timer;

    //start to timing
    timer.Start();
    //do something...
    for(unsigned long i = 0; i < 0xffffffff; i++){}
    //stop to timing
    timer.Stop();
    //print cost time
    timer.ShowCostTime();



    return 0;
}
