#include <map>
#include <vector>
#include <string>

using std::map;
using std::vector;
using std::string;

#pragma once

struct TimeStamp
{
    string operation;
    vector<unsigned long long> ts;
};

class TimeRecorder
{
private:
    TimeRecorder(unsigned int processID);
    TimeRecorder(const TimeRecorder &);
    TimeRecorder & operator = (const TimeRecorder &);

public:
    static TimeRecorder& GetInstance(unsigned int processID)
    {
        static TimeRecorder instance(processID);
        return instance;
    }

    int GetProcessId(void);

private:
    map<unsigned int, TimeStamp> m_TsMap;
    unsigned int m_ProcessID;
    int m_EpollFd;
    int m_ListenFd;

};
