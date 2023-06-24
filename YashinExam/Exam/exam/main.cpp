#include <iostream>
#include <chrono>
#include <thread>
#include "metricregister.h"

using namespace std;

int main()
{
    // Использование класса MetricRegister
    MetricRegister& registerInstance = MetricRegister::getInstance();

    // Добавление метрик
    registerInstance.add_metr(100, 200);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    registerInstance.add_metr(300, 400);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    registerInstance.add_metr(500, 600);

    // Вывод всех метрик
    registerInstance.show_metr();
    int a;
    cout << "Введите ID метрики >> "; cin >> a;
    // Вычисление вспомогательной метрики для ключа 0
    int computedMetric = registerInstance.count_cometr(a);
    cout << "Метрика для " << a << ": " << computedMetric << endl;

    return 0;
}
