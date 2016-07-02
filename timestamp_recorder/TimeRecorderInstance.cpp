#include "TimeRecorderInstance.h"

TimeRecorderInstance::TimeRecorderInstance(unsigned int processID)
: m_EpollFd(0)
, m_ListenFd(0)
{
    m_ProcessID = processID;
}

int TimeRecorderInstance::GetProcessId(void)
{
    return m_ProcessID;
}
