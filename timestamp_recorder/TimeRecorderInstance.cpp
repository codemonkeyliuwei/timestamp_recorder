#include "TimeRecorderInstance.h"

TimeRecorderInstance::TimeRecorderInstance(u32 processID)
{
    m_ProcessID = processID;
}

TimeRecorderInstance::TimeRecorderInstance( const TimeRecorderInstance & )
{

}

TimeRecorderInstance & TimeRecorderInstance::operator=( const TimeRecorderInstance & )
{

}

int TimeRecorderInstance::GetProcessId(void)
{
    return m_ProcessID;
}

void TimeRecorderInstance::TimeRecordNew( string op, u64 req )
{

}

void TimeRecorderInstance::TimeRecordAppend( u64 req )
{

}

void TimeRecorderInstance::TimeRecordEnd( u64 req )
{

}

int TimeRecorderInstance::StartMonitorThread(void)
{
    return 0;
}
