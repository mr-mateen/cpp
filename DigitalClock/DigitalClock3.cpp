#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

class DigitalClock {
public:
    void displayTime() {
        while (true) {
            auto now = std::chrono::system_clock::now();
            time_t tt = std::chrono::system_clock::to_time_t(now);
            tm local_tm = *localtime(&tt);

            std::cout << "\r" << std::setfill('0') << std::setw(2) << local_tm.tm_hour << ":"
                      << std::setfill('0') << std::setw(2) << local_tm.tm_min << ":"
                      << std::setfill('0') << std::setw(2) << local_tm.tm_sec;

            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }
};

int main() {
    DigitalClock clock;
    clock.displayTime();

    return 0;
}
