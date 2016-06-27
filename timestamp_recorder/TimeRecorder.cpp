#include "TimeRecorder.h"

TimeRecorder::TimeRecorder(unsigned int processID)
{
    m_ProcessID = processID;
}

int TimeRecorder::GetProcessId(void)
{
    return m_ProcessID;
}
