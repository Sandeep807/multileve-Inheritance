#include "vehicle.h"

Vehicle ::Vehicle()
{
    cout<<"Vehicle constructor called"<<endl;
}

void Vehicle ::start()
{
    cout<<"Vehicle started"<<endl;
}

void Vehicle ::stop()
{
    cout<<"Vehicle stopped"<<endl;
}

Vehicle :: ~Vehicle()
{
    cout<<"Vehicle destructor called"<<endl;
}