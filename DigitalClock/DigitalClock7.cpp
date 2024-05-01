#include <iostream>
using namespace std;
class time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    time()
    {
        hours = minutes = seconds = 0;
    }
    time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void showTime() const {
        cout << hours << ':' << minutes << ':' << seconds ;
    } time operator+(const time &other) const
    {
        int totalSeconds = seconds + other.seconds;
        int totalMinutes = minutes + other.minutes + totalSeconds / 60;
        int totalHours = hours + other.hours + totalMinutes / 60;
        time result;
        result.seconds = totalSeconds % 60;
        result.minutes = totalMinutes % 60;
        result.hours = totalHours;
        return result;
    }
};
int main()
{
    const time a(2, 56, 98), b(7, 87, 45);
    time c = a + b;
    c.showTime();
    return 0;
}