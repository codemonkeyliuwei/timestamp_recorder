#include "TimeRecorder.h"

#pragma once



class TimeDumper
{
public:
    TimeDumper(u32 processId);
    ~TimeDumper(void);

private:
    int m_EpollFd;
    int m_ListenFd;
};
