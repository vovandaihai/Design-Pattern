#ifndef _ISubject_H_
#define _ISubject_H_
#include "IObserver.h"
#include <vector>
#include <iostream>

class ISubject {
public:
    void registerObserver(IObserver *ob)
    {
        observerList.push_back(ob);
    };
    void unRegisterObserver(IObserver *ob)
    {
        for (auto it = observerList.begin(); it != observerList.end(); it++)
        if (*it == ob)
        {
            //delete *it;
            observerList.erase(it);
        }
    };
        std::vector<IObserver*> getListObserver()
    {
        return observerList;
    };
    virtual void notice() = 0;

private:
    std::vector<IObserver*> observerList;
};
#endif