#ifndef _IObserver_H_
#define _IObserver_H_

class IObserver {
public:
    virtual void update(int t, int p, int c) = 0;
};
#endif