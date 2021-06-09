#include "Multiple.hpp"

int main()
{
    TA t1;
    t1.setSupervisor("Dr. Me");
    t1.setId(11048);
    t1.setTitle("Math Engineer.");
    cout<<t1.getSupervisor()<<" "<<t1.getId()<<" "<<t1.getTitle();
    return 0;
}