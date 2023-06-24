#ifndef METRICREGISTER_H
#define METRICREGISTER_H
#include <iostream>
#include <vector>

class MetricRegister
{
private:
    struct MetricData
    {
        int timestamp;
        int resp_time;
        int wait_time;

        MetricData(int ts, int rt, int wt) : timestamp(ts), resp_time(rt), wait_time(wt) {}
    };

    std::vector<MetricData> metrics;

    MetricRegister() {} // Приватный конструктор

public:
    // Получение единственного экземпляра класса MetricRegister
    static MetricRegister& getInstance()
    {
        static MetricRegister instance;
        return instance;
    }

    bool add_metr(int resp_t, int wait_t);
    bool show_metr();
    int count_cometr(int key);
};
#endif // METRICREGISTER_H
