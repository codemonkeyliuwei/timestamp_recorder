#include "TimeRecorderInstance.h"

TimeRecorderInstance::TimeRecorderInstance(u32 processID)
{
    m_ProcessID = processID;
}

int TimeRecorderInstance::GetProcessId(void)
{
    return m_ProcessID;
}
