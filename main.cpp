#include <iostream>

#include "RuningTime.hpp"

using namespace std;

int main()
{
    RuningTimer timer;

    //start to timing
    timer.Start();

    //do something...
    for(int i = 0; i < 1500000; i++){
        i = i + (9 * 1) - 9;
    }

    //stop to timing
    timer.Stop();

    //print cost time
    timer.ShowCostTime();



    return 0;
}
