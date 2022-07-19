#ifndef _WeatherData_H_
#define _WeatherData_H_

class WeatherData  : public ISubject {
public:
    void notice ()
    {
      auto obList = getListObserver();
      for (auto i : obList)
      {
        i->update(temp, press, cal);
      }  
    };
    void setCal(int c)
    {
      cal = c;
    }
    void setTemp(int t)
    {
      temp = t;
    }
    void setPress(int p)
    {
      press = p;
    }
private:
  int temp;
  int press;
  int cal;
};
#endif