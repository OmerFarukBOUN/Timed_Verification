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
ens: TRUE∧(L . S)
ens: TRUE∧(A )
*/
{
    event["L"];
    event["S"];
}

void callee9 () 
/*
req: TRUE∧(_^*)
ens: TRUE∧(W. K)
ens: TRUE∧(A )
*/
{
    event["W"];
    event["K"];
}


void callee10 () 
/*
req: TRUE∧(_^*)
ens: TRUE∧(L . S)
ens: TRUE∧(A )
*/
{
    event["L"];
    event["S"];
}

void process() 
/*
req: TRUE∧(_^*)

ens:(x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f8=70∧x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f9≥0∧f9≤10 ∧ ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((ε)#f8) . C . D . ((L . S)#f9) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . C . D) ∨
 ((~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f3=70∧(~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f4≥0∧f4≤10 ∧ C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . ((ε)#f3) . C . D . ((L . S)#f4) . M . N . F . G . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S)
ens:(x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f8=70∧x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f9≥0∧f9≤10 ∧ ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((ε)#f8) . C . D . ((L . S)#f9) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . C . D) ∨
 ((~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f3=70∧(~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f4≥0∧f4≤10 ∧ C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . ((ε)#f3) . C . D . ((L . S)#f4) . M . N . F . G . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S)
ens:(x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f8=70∧x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f9≥0∧f9≤10 ∧ ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((ε)#f8) . C . D . ((L . S)#f9) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . C . D) ∨
 ((~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f3=70∧(~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f4≥0∧f4≤10 ∧ C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . ((ε)#f3) . C . D . ((L . S)#f4) . M . N . F . G . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S)
ens:(x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f8=70∧x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f9≥0∧f9≤10 ∧ ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((ε)#f8) . C . D . ((L . S)#f9) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . C . D) ∨
 ((~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f3=70∧(~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f4≥0∧f4≤10 ∧ C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . ((ε)#f3) . C . D . ((L . S)#f4) . M . N . F . G . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S)
ens:(x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f8=70∧x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f9≥0∧f9≤10 ∧ ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((ε)#f8) . C . D . ((L . S)#f9) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . C . D) ∨
 ((~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f3=70∧(~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f4≥0∧f4≤10 ∧ C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . ((ε)#f3) . C . D . ((L . S)#f4) . M . N . F . G . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S)
ens:(x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f8=70∧x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f9≥0∧f9≤10 ∧ ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((ε)#f8) . C . D . ((L . S)#f9) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . C . D) ∨
 ((~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f3=70∧(~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f4≥0∧f4≤10 ∧ C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . ((ε)#f3) . C . D . ((L . S)#f4) . M . N . F . G . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S)
ens:(x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f8=70∧x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f9≥0∧f9≤10 ∧ ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((ε)#f8) . C . D . ((L . S)#f9) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . C . D) ∨
 ((~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f3=70∧(~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f4≥0∧f4≤10 ∧ C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . ((ε)#f3) . C . D . ((L . S)#f4) . M . N . F . G . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S)
ens:(x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f8=70∧x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f9≥0∧f9≤10 ∧ ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((ε)#f8) . C . D . ((L . S)#f9) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . C . D) ∨
 ((~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f3=70∧(~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f4≥0∧f4≤10 ∧ C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . ((ε)#f3) . C . D . ((L . S)#f4) . M . N . F . G . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S)
ens:(x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f8=70∧x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f9≥0∧f9≤10 ∧ ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((ε)#f8) . C . D . ((L . S)#f9) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . C . D) ∨
 ((~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f3=70∧(~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f4≥0∧f4≤10 ∧ C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . ((ε)#f3) . C . D . ((L . S)#f4) . M . N . F . G . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S)
ens:(x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f8=70∧x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f9≥0∧f9≤10 ∧ ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((ε)#f8) . C . D . ((L . S)#f9) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . C . D) ∨
 ((~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f3=70∧(~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f4≥0∧f4≤10 ∧ C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . ((ε)#f3) . C . D . ((L . S)#f4) . M . N . F . G . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S)
ens:(x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f8=70∧x=0∧f5≥0∧f5≤20∧f6=30∧x=0∧f5≥0∧f5≤20∧f7≥0∧f7≤10∧f9≥0∧f9≤10 ∧ ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((A . B)#f5) . ((A . B)#f5) . ((ε)#f6) . C . D . ((C . D)#f7) . ((ε)#f8) . C . D . ((L . S)#f9) . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . C . D) ∨
 ((~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f3=70∧(~(x=0))∧f0≥0∧f0≤20∧f1=30∧(~(x=0))∧f0≥0∧f0≤20∧f2≥0∧f2≤10∧f4≥0∧f4≤10 ∧ C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . C . D . C . D . C . D . C . D . ((A . B)#f0) . C . D . C . D . C . D . C . D . ((A . B)#f0) . ((ε)#f1) . C . D . ((C . D)#f2) . ((ε)#f3) . C . D . ((L . S)#f4) . M . N . F . G . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . W . K . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S . C . D . M . N . W . K . C . D . L . S . C . D . C . D . C . D . M . N . F . G . C . D . C . D . C . D . W . K . L . S)

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
    if (x==0) {
     deadline (callee ()  , 
    20);
    timeout ((), callee1 () , 
    30);
         deadline (callee3 ()  , 
    10);
    timeout ((), callee4 () , 
    70);

             deadline (callee8 ()  , 
    10);



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
        }

    else {

    callee3 ();
    callee4 ();
        callee3 ();
    callee4 ();
         deadline (callee ()  , 
    20);
    timeout ((), callee1 () , 
    30);
         deadline (callee3 ()  , 
    10);
    timeout ((), callee4 () , 
    70);

             deadline (callee8 ()  , 
    10);

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
}
