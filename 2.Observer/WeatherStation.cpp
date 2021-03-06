#include "IObserver.h"
#include "ISubject.h"
#include "WeatherData.h"
#include "Display1.h"
#include "Display2.h"

int main()
{
    WeatherData *w = new WeatherData;
    Display1 *disp1 = new Display1;
    Display2 *disp2 = new Display2(w);
    w->registerObserver(disp1);
    
    w->setCal (0);
    w->setPress(0);
    w->setTemp(1);
    w->notice();
    disp2->w->unRegisterObserver(disp2);
    w->setCal (0);
    w->setPress(2);
    w->setTemp(1);
    w->notice();
    return 0;
}