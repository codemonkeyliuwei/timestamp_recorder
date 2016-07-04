#include "TimeRecorderInstance.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char **argv)
{
    TimeRecorderInstance& tr = TimeRecorderInstance::GetInstance();
    cout << tr.GetProcessId() << endl;
    return 0;
}