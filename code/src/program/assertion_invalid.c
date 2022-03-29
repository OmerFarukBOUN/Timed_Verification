#include "primitives.c"

void send (int n) 
    /*
    require TRUE/\Ready.(_^*)
    ensure (n>=0)/\(Send^n).Done\/n<0/\(Send^w)
    */
{

    if (n == 0) { 
        event ("Done");
    }
    else {
        assert (n > 0/\Ready.(_^*));
        event ("Send"); 
        send (n - 1);
    }
} 
