%{
#include "y.tab.h"
%}

%%

"hola" {printf("HOLA\n"); return hola;}
"," {printf(",\n"); return coma;}
"que" {printf("QUE\n"); return que;}
"tal" {printf("TAL\n"); return tal;}
[ \t\n] ;

%%

int yywrap () {return 1;} 
