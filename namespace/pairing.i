%module pairing
%{ 
#include "pairing.h"
%}

%include "pairing.h"

 %template(pairii) s::pairing<int,int>;
 %template(pairdi) s::pairing<double,int>;
