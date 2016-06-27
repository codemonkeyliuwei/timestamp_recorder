#include "TimeRecorder.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char **argv)
{
    TimeRecorder& tr = TimeRecorder::GetInstance(12);
    cout << tr.GetProcessId() << endl;
    return 0;
}