#include "TimeRecorder.h"

#pragma once

class TimeDumper
{
public:
    //Create the dump thread, and listen the pipe file
    TimeDumper(u32 processId);  

    //Destroy the dump thread
    ~TimeDumper(void);

private:
    int m_EpollFd;
    int m_ListenFd;
};
