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

class TimeRecorderInstance
{
private:
    TimeRecorderInstance(unsigned int processID);
    TimeRecorderInstance(const TimeRecorderInstance &);
    TimeRecorderInstance & operator = (const TimeRecorderInstance &);

public:
    static TimeRecorderInstance& GetInstance(unsigned int processID)
    {
        static TimeRecorderInstance instance(processID);
        return instance;
    }

    int GetProcessId(void);

private:
    map<unsigned int, TimeStamp> m_TsMap;
    unsigned int m_ProcessID;
    int m_EpollFd;
    int m_ListenFd;

};
