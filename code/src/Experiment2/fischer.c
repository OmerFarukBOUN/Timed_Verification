// Fixed a little bit
x := -1; 
cs:= 0;


void proc (int i, int d, int e) 
/* req: (e<d) ∧ ((_)^*)
   ens:  (e<d∧f0≤d∧f1=e) ∧ (([x=-1]? ((Update(i){x:=i})#f0) . ((ε)#f1) . ([x=i] . Critical(i){cs:=(cs+1)} . Exit(i){cs:=cs-1;x:=-1} + [(~(x=i))]) )^*)*/
{
 [x=-1] //block waiting until true
 deadline(event["Update"(i)]{x:=i},d);
   delay (e);
   if (x==i) {
     event["Critical"(i)]{cs:=(cs+1)};
     event["Exit"(i)]{cs:=cs-1;x:=-1};
    //  proc (i, d, e);
   } else {
    // proc (i, d, e);
  }}

void main (int i, int d, int e)
/* req: (e>0∧d>0∧e<d) ∧ ((_)^*)
   ens: (e>0∧d>0∧e<d) ∧ ((((_)^*).Critical.Exit.((_)^*))^*) */
{
  proc(0,d,e) || proc(1,d,e) || proc(2,d,e) 
}
