#include "../../test.h"

#include <deque>

#include <time.h>

int main()
{
    puts(__FILE__);
    srand(time(NULL));
    for(int run = 0; run < TEST_PERF_RUNS; run++)
    {
        std::deque<int> c;
        int elems = TEST_PERF_CHUNKS * run;
        int t0 = TEST_TIME();
        for(int elem = 0; elem < elems; elem++)
            c.push_back(rand());
        int t1 = TEST_TIME();
        printf("%10d %10d\n", elems, t1 - t0);
    }
}
