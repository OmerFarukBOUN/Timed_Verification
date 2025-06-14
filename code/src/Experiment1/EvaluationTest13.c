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
ens: TRUE∧(_ . D)
ens: TRUE∧(A )
*/
{
    event["C"];
    event["D"];
}


void callee3 () 
/*
req: TRUE∧(_^*)
ens: TRUE∧(_ . D)
ens: TRUE∧(A )
*/
{
    event["C"];
    event["D"];
}


void callee4 () 
/*
req: TRUE∧(_^*)
ens: TRUE∧(_ . D)
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

void callee7 () 
/*
req: TRUE∧(_^*)
ens: TRUE∧(W. K)
ens: TRUE∧(A )
*/
{
    event["W"];
    event["K"];
}


void callee8 () 
/*
req: TRUE∧(_^*)
ens: TRUE∧(_ . S)
ens: TRUE∧(A )
*/
{
    event["L"];
    event["S"];
}

void process() 
/*
req: TRUE∧(_^*)
ens:  f0≥0∧f0≤20∧f1=30∧f0≥0∧f0≤20 ∧ ((A . B)#f0) . ((A . B)#f0) . ((ε)#f1) . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S
ens:  f0≥0∧f0≤20∧f1=30∧f0≥0∧f0≤20 ∧ ((A . B)#f0) . ((A . B)#f0) . ((ε)#f1) . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S
ens:  f0≥0∧f0≤20∧f1=30∧f0≥0∧f0≤20 ∧ ((A . B)#f0) . ((A . B)#f0) . ((ε)#f1) . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S
ens:  f0≥0∧f0≤20∧f1=30∧f0≥0∧f0≤20 ∧ ((A . B)#f0) . ((A . B)#f0) . ((ε)#f1) . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S
ens:  f0≥0∧f0≤20∧f1=30∧f0≥0∧f0≤20 ∧ ((A . B)#f0) . ((A . B)#f0) . ((ε)#f1) . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S
ens:  f0≥0∧f0≤20∧f1=30∧f0≥0∧f0≤20 ∧ ((A . B)#f0) . ((A . B)#f0) . ((ε)#f1) . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S
ens:  f0≥0∧f0≤20∧f1=30∧f0≥0∧f0≤20 ∧ ((A . B)#f0) . ((A . B)#f0) . ((ε)#f1) . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S
ens:  f0≥0∧f0≤20∧f1=30∧f0≥0∧f0≤20 ∧ ((A . B)#f0) . ((A . B)#f0) . ((ε)#f1) . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S
ens:  f0≥0∧f0≤20∧f1=30∧f0≥0∧f0≤20 ∧ ((A . B)#f0) . ((A . B)#f0) . ((ε)#f1) . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S
ens:  f0≥0∧f0≤20∧f1=30∧f0≥0∧f0≤20 ∧ ((A . B)#f0) . ((A . B)#f0) . ((ε)#f1) . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S
ens:  f0≥0∧f0≤20∧f1=30∧f0≥0∧f0≤20 ∧ ((A . B)#f0) . ((A . B)#f0) . ((ε)#f1) . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S . _ . D . M . N . W . K . _ . D . _ . S . _ . D . _ . D . _ . D . M . N . F . G . _ . D . _ . D . _ . D . W . K . _ . S


ens: (t <20)∧ ((A.B) # t)
ens: (t <21)∧ ((~A.B) # t)
ens: ((t1+t2) <21)∧ (~A#t1). (B # t2)
ens: ((t1+t2) <21)∧ (A#t1). (~B # t2)
ens: (t <21)∧ ((A.~B) # t)
ens: (t <21)∧ ((A.~B) # t)
ens:  ((x=1))∧(_ . (_ . (_ . (_ . (_ . (_ . (_ . D)))))))
ens: (x=1)∧(_ . (_ . (_ . (_ . (_ . (_ . (_ . D))))))) 
ens: ((~(x=0))∧(~(y=0)))∧(M . (N . (F . (_ . (_ . (_ . (_ . D)))))))
ens:  (f0>0∧f0≤20∧f1>30)∧(((A . B)#f0) . (  (C . (D . (C . (D . (C . (D . (C . (D . (M . (N . (F . (G . (C . (D . (C . (D . (C . (D . (C . (D . (M . (N . (F . (G . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (M . (N . (W . (K . (C . (D . (L . (S . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (M . (N . (W . (K . (C . (D . (L . (S . (C . (D . (C . (D . (C . (D . (C . (D . (C . (D . (M . (N . (F . (G . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (M . (N . (W . (K . (C . (D . (L . (S . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (M . (N . (W . (K . (C . (D . (L . (S . (C . (D . (C . (D . (C . (D . (M . (N . (F . (G . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (M . (N . (W . (K . (C . (D . (L . (S . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (C . (D . (C . (D . (M . (N . (F . (G . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (M . (N . (W . (K . (C . (D . (L . (S . (C . (D . (C . (D . (C . (D . (M . (N . (F . (G . (C . (D . (C . (D . (C . (D . (W . (K . (L . S)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
ens:  (f0>0∧f0≤20∧f1>30)∧(  (  (C . (D . (C . (D . (C . (D . (C . (D . (M . (N . (F . (G . (C . (D . (C . (D . (C . (D . (C . (D . (M . (N . (F . (G . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (M . (N . (W . (K . (C . (D . (L . (S . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (M . (N . (W . (K . (C . (D . (L . (S . (C . (D . (C . (D . (C . (D . (C . (D . (C . (D . (M . (N . (F . (G . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (M . (N . (W . (K . (C . (D . (L . (S . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (M . (N . (W . (K . (C . (D . (L . (S . (C . (D . (C . (D . (C . (D . (M . (N . (F . (G . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (M . (N . (W . (K . (C . (D . (L . (S . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (C . (D . (C . (D . (M . (N . (F . (G . (C . (D . (C . (D . (C . (D . (W . (K . (L . (S . (C . (D . (M . (N . (W . (K . (C . (D . (L . (S . (C . (D . (C . (D . (C . (D . (M . (N . (F . (G . (C . (D . (C . (D . (C . (D . (W . (K . (L . S)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
*/
{
        deadline (callee ()  , 
    20);
    timeout ((), callee1 () , 
    30);

    callee3 ();
    callee4 ();
        callee3 ();
    callee4 ();

 callee5 ();
    callee6 ();
        callee3 ();
        callee4 ();
        callee3 ();
    callee4 ();

 callee5 ();
    callee6 ();
        callee3 ();
    callee4 ();
    
        callee1 ();
    callee7 ();
        callee8 ();
    callee4 ();
    
        callee1 ();
    callee7 ();
        callee8 ();
    callee4 ();

 callee5 ();
    callee7 ();
        callee3 ();
    callee8 ();
            callee3 ();
    callee4 ();
    
        callee1 ();
    callee7 ();
        callee8 ();
    callee4 ();

 callee5 ();
    callee7 ();
        callee3 ();
    callee8 ();

        callee3 ();
            callee3 ();
    callee4 ();
        callee3 ();
    callee4 ();

 callee5 ();
    callee6 ();
        callee3 ();
    callee4 ();
    
        callee1 ();
    callee7 ();
        callee8 ();
    callee4 ();

 callee5 ();
    callee7 ();
        callee3 ();
    callee8 ();
            callee3 ();
    callee4 ();
    
        callee1 ();
    callee7 ();
        callee8 ();
    callee4 ();

 callee5 ();
    callee7 ();
        callee3 ();
    callee8 ();


    callee4 ();
        callee3 ();
    callee4 ();

 callee5 ();
    callee6 ();
        callee3 ();
    callee4 ();
    
        callee1 ();
    callee7 ();
        callee8 ();
    callee4 ();

 callee5 ();
    callee7 ();
        callee3 ();
    callee8 ();
            callee3 ();
    callee4 ();
    
        callee1 ();
    callee7 ();
        callee8 ();
        callee4 ();
        callee3 ();
    callee4 ();

 callee5 ();
    callee6 ();
        callee3 ();
    callee4 ();
    
        callee1 ();
    callee7 ();
        callee8 ();

    callee4 ();

 callee5 ();
    callee7 ();
        callee3 ();
    callee8 ();

callee4 ();
        callee3 ();
    callee4 ();

 callee5 ();
    callee6 ();
        callee3 ();
    callee4 ();
    
        callee1 ();
    callee7 ();
        callee8 ();
}
