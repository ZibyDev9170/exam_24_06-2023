#include "metricregister.h"

bool MetricRegister::add_metr(int resp_t, int wait_t)
{
    int timestamp = static_cast<int>(time(nullptr));
    MetricData metric(timestamp, resp_t, wait_t);
    metrics.push_back(metric);
    return true;
}

bool MetricRegister::show_metr()
{
    for (const auto& metric : metrics)
    {
        std::cout << "ID: " << metric.timestamp << " - " << metric.resp_time << ", " << metric.wait_time << std::endl;
    }
    return true;
}

int MetricRegister::count_cometr(int key)
{
    for (const auto& metric : metrics)
    {
        if (metric.timestamp == key)
        {
            return metric.resp_time + metric.wait_time;
        }
    }
    return 0;
}
