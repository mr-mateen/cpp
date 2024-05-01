#include <iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void displaytime()
    {
        cout << hours << ':' << minutes << ':' << seconds << endl;
    }
    void addtime(Time t1, Time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + (seconds / 60);
        hours = t1.hours + t2.hours + (minutes / 60);
        minutes %= 60;
        seconds %= 60;
    }
};
int main()
{
    Time time1(10, 20, 30);
    Time time2(5, 15, 25);
    Time time3;
    time3.addtime(time1, time2);
    cout << "Time1:";
    time1.displaytime();
    cout << "Time2:";
    time2.displaytime();
    cout << "Time3:";
    time3.displaytime();
    return 0;
}