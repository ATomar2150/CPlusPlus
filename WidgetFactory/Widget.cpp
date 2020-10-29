#include "Widget.h"
#include <iostream>
using namespace std;

Widget::Widget()
{
    widgets = 0;
};
void Widget::setWidgets(int wig)
{   
    if(wig > 0)
    {
        widgets = wig;
    }
    else
    {
        cout<<"Error. Please enter the positive number of widgets.\n";
        cin >> wig;
        widgets = wig;
    }
};
int Widget::getWidgets() const
{
    return widgets;
};
