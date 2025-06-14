#include "primitives.c"

void callee () 
/*
req: TRUE∧(_^*)
ens: TRUE∧(A . B)
ens: TRUE∧(A )
*/
{
    event["A"];
    event["B"];
}

void callee1 () 
/*
req: TRUE∧(_^*)
ens: TRUE∧(C . D)
ens: TRUE∧(A )
*/
{
    event["C"];
    event["D"];
}


void callee3 () 
/*
req: TRUE∧(_^*)
ens: TRUE∧(C . D)
ens: TRUE∧(A )
*/
{
    event["C"];
    event["D"];
}


void callee4 () 
/*
req: TRUE∧(_^*)
ens: TRUE∧(C . D)
ens: TRUE∧(A )
*/
{
    event["C"];
    event["D"];
}


void callee5 () 
/*
req: TRUE∧(_^*)
ens: TRUE∧(M. N)
ens: TRUE∧(A )
*/
{
    event["M"];
    event["N"];
}


void callee6 () 
/*
req: TRUE∧(_^*)
ens: TRUE∧(F . G)
ens: TRUE∧(A )
*/
{
    event["F"];
    event["G"];
}

void process() 
/*
req: TRUE∧(_^*)
ens: (x=0∧f0≥0∧f0≤20∧z=0 ∧ ((A . B)#f0) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((x=0∧f0≥0∧f0≤20∧(~(z=0)) ∧ ((A . B)#f0) . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧y=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧(~(y=0))∧y1=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((~(x=0))∧(~(y=0))∧(~(y1=0)) ∧ M . N . F . G . C . D . C . D))))
ens: (x=0∧f0≥0∧f0≤20∧z=0 ∧ ((A . B)#f0) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((x=0∧f0≥0∧f0≤20∧(~(z=0)) ∧ ((A . B)#f0) . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧y=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧(~(y=0))∧y1=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((~(x=0))∧(~(y=0))∧(~(y1=0)) ∧ M . N . F . G . C . D . C . D))))
ens: (x=0∧f0≥0∧f0≤20∧z=0 ∧ ((A . B)#f0) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((x=0∧f0≥0∧f0≤20∧(~(z=0)) ∧ ((A . B)#f0) . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧y=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧(~(y=0))∧y1=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((~(x=0))∧(~(y=0))∧(~(y1=0)) ∧ M . N . F . G . C . D . C . D))))
ens: (x=0∧f0≥0∧f0≤20∧z=0 ∧ ((A . B)#f0) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((x=0∧f0≥0∧f0≤20∧(~(z=0)) ∧ ((A . B)#f0) . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧y=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧(~(y=0))∧y1=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((~(x=0))∧(~(y=0))∧(~(y1=0)) ∧ M . N . F . G . C . D . C . D))))
ens: (x=0∧f0≥0∧f0≤20∧z=0 ∧ ((A . B)#f0) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((x=0∧f0≥0∧f0≤20∧(~(z=0)) ∧ ((A . B)#f0) . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧y=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧(~(y=0))∧y1=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((~(x=0))∧(~(y=0))∧(~(y1=0)) ∧ M . N . F . G . C . D . C . D))))
ens: (x=0∧f0≥0∧f0≤20∧z=0 ∧ ((A . B)#f0) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((x=0∧f0≥0∧f0≤20∧(~(z=0)) ∧ ((A . B)#f0) . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧y=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧(~(y=0))∧y1=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((~(x=0))∧(~(y=0))∧(~(y1=0)) ∧ M . N . F . G . C . D . C . D))))
ens: (x=0∧f0≥0∧f0≤20∧z=0 ∧ ((A . B)#f0) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((x=0∧f0≥0∧f0≤20∧(~(z=0)) ∧ ((A . B)#f0) . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧y=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧(~(y=0))∧y1=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((~(x=0))∧(~(y=0))∧(~(y1=0)) ∧ M . N . F . G . C . D . C . D))))
ens: (x=0∧f0≥0∧f0≤20∧z=0 ∧ ((A . B)#f0) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((x=0∧f0≥0∧f0≤20∧(~(z=0)) ∧ ((A . B)#f0) . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧y=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧(~(y=0))∧y1=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((~(x=0))∧(~(y=0))∧(~(y1=0)) ∧ M . N . F . G . C . D . C . D))))
ens: (x=0∧f0≥0∧f0≤20∧z=0 ∧ ((A . B)#f0) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((x=0∧f0≥0∧f0≤20∧(~(z=0)) ∧ ((A . B)#f0) . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧y=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 (((~(x=0))∧(~(y=0))∧y1=0 ∧ C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D) ∨
 ((~(x=0))∧(~(y=0))∧(~(y1=0)) ∧ M . N . F . G . C . D . C . D))))

ens: (t <20)∧ ((A.B) # t)
ens: (t <21)∧ ((~A.B) # t)
ens: ((t1+t2) <21)∧ (~A#t1). (B # t2)
ens: ((t1+t2) <21)∧ (A#t1). (~B # t2)
ens: (t <21)∧ ((A.~B) # t)
ens: (t <21)∧ ((A.~B) # t)
ens:  ((x=1))∧(C . (D . (C . (D . (C . (D . (C . D)))))))
ens: (x=1)∧(C . (D . (C . (D . (C . (D . (C . D))))))) 
ens: ((~(x=0))∧(~(y=0)))∧(M . (N . (F . (G . (C . (D . (C . D)))))))

*/
{
    if (x==0) {

    deadline (callee ()  , 
    20);


    if (z==0) {

    callee3 ();
    callee4 ();
        callee3 ();
    callee4 ();

 callee5 ();
    callee6 ();
        callee3 ();
    callee4 ();

        }
        else {

                callee5 ();
    callee6 ();
        callee3 ();
    callee4 ();


        }
    }
    else {

        if (y==0) {

    callee3 ();
    callee4 ();
        callee3 ();
    callee4 ();

 callee5 ();
    callee6 ();
        callee3 ();
    callee4 ();

        }

        else {
            
               if (y1==0) {

    callee3 ();
    callee4 ();
        callee3 ();
    callee4 ();

 callee5 ();
    callee6 ();
        callee3 ();
    callee4 ();

        }

        else {
            
                callee5 ();
    callee6 ();
        callee3 ();
    callee4 ();


        }


        }

    }
}
