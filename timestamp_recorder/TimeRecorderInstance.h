
#include <string>
#include "typedef.h"

#ifdef _WIN32
#include <process.h>
#else
#include <unistd.h>
#endif // _WIN32


using std::string;

#pragma once



class TimeRecorderInstance
{
private:
    TimeRecorderInstance(u32);
    TimeRecorderInstance(const TimeRecorderInstance &);
    TimeRecorderInstance & operator = (const TimeRecorderInstance &);

    int StartMonitorThread(void);

public:
    static TimeRecorderInstance& GetInstance(void)
    {
        static TimeRecorderInstance instance(_getpid());
        return instance;
    }

    int GetProcessId(void);

    void TimeRecordNew(string op, u64 req);

    void TimeRecordAppend(u64 req);

    void TimeRecordEnd(u64 req);

private:

    unsigned int m_ProcessID;

};
