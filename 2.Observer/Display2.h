#include "IDisplay.h"
#include "IObserver.h"
#include "ISubject.h"
#include <iostream>
#include "WeatherData.h"
class Display2 : public IDisplay , public IObserver{
public:
    ISubject *w;
    Display2(ISubject *wetherData)
    {
        wetherData->registerObserver(this);
        w = wetherData;
    };
    void update(int t, int p, int c)
    {
        temp = t;
        press = p;
        cal = c;
        visualize();
    }
    void visualize() 
    {
        std::cout << "Display2 temp = " << temp << " p: " << press << " c: " << cal << " visual\n";
    };
private:
    int temp;
    int press;
    int cal;
};