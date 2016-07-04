#include <map>
#include <vector>

using std::map;
using std::vector;

#pragma once

struct TimeStamp
{
    string operation;
    vector<unsigned long long> ts;
};

class TimeRecorder
{
public:
    TimeRecorder(void);
    ~TimeRecorder(void);

    void TimeRecordNew(string op, u64 req);
    void TimeRecordAppend(u64);
    void TimeRecordEnd(u64);

private:
    map<unsigned int, TimeStamp> m_TimeMap;

};
