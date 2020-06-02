%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void yyerror (char *s);
%}

%start S
%token hola que tal coma


%%

S: X que tal {printf("\nCORRECTO");};
X: hola Y{;}|{;};
Y: coma hola Y {;}
|	{;};

%%

void yyerror (char *s)
{
	printf("%s\n", s);
}

int main(void)
{
	return yyparse();
}
