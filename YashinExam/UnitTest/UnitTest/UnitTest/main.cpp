#include "metricregister.h"
#include <chrono>
#include <thread>
#include <cassert>

void testMetricRegister()
{
    MetricRegister& registerInstance = MetricRegister::getInstance();

    // Тест добавления метрики и вывода всех значений
    assert(registerInstance.add_metr(10, 11));
    std::this_thread::sleep_for(std::chrono::seconds(1));
    assert(registerInstance.add_metr(20, 21));
    std::this_thread::sleep_for(std::chrono::seconds(1));
    assert(registerInstance.add_metr(30, 31));
    std::this_thread::sleep_for(std::chrono::seconds(1));
    assert(registerInstance.add_metr(40, 41));
    std::this_thread::sleep_for(std::chrono::seconds(1));
    assert(registerInstance.add_metr(50, 51));
    std::this_thread::sleep_for(std::chrono::seconds(1));
    assert(registerInstance.add_metr(60, 61));
    std::this_thread::sleep_for(std::chrono::seconds(1));
    assert(registerInstance.add_metr(70, 71));
    std::this_thread::sleep_for(std::chrono::seconds(1));
    assert(registerInstance.add_metr(80, 81));
    std::this_thread::sleep_for(std::chrono::seconds(1));
    assert(registerInstance.add_metr(90, 91));
    std::this_thread::sleep_for(std::chrono::seconds(1));
    assert(registerInstance.add_metr(100, 101));

    std::cout << "All tests passed successfully!" << std::endl;
}

int main()
{
    testMetricRegister();

    return 0;
}
