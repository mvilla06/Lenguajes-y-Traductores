%{
#define YYSTYPE char *
#include <stdio.h>
#include <stdlib.h>
 void yyerror(char * s);
extern int YYACCEPT();
#include "lista.h"
#include <string.h>
#include "stack.h"
#include "lex.yy.c"
#include "directorio.h"
#include "symtable.h"

int yydebug=0;



char * getTemp();
char avail[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int pc = 0;
char* cuadruplos[200][4];
void formaCuadruplo(char *op, char* op1, char* op2, char* r);
void rellena();
char el[5];
char tipo;
DIMENSION* lista, *temp;
int dim;
int base;
%}

/*%union{
char* id;
}*/

%start Programa
%token VOID MAIN
%token  ID
%token INT FLOAT STRING
%token TFLOAT TINT
%token OR AND EQ NEQ GEQ LEQ PEQ REQ MEQ DEQ PP MM SHL SHR
%token IF ELSE WHILE DO FOR CIN  ENDL COUT
//%type <id> ea x y ide n FLOAT INT

%nonassoc IF
%nonassoc ELSE


%%

Programa:	var{push(pc);formaCuadruplo("goto", "","","");} met main 
{
formaCuadruplo("end", "", "", "");
FILE *output;
output = fopen("output.txt", "w");

for(int it = 0; it<pc; it++){
	
	fprintf(output,"%s\t%s\t%s\t%s\n",cuadruplos[it][0], cuadruplos[it][1], cuadruplos[it][2], cuadruplos[it][3]);
	}
fclose(output);
YYACCEPT;
}

		;
		

main:	MAIN {rellena();} f 	;



var:	 tipo  ID init mv ';'  var 
	
	| tipo ID {lista = (DIMENSION*)malloc(sizeof(DIMENSION));}arr2{install($2, tipo, (lista->size)*(lista->factor), lista);} ';' var
	|
	;
tipo:	TINT{tipo = 'i';}
	|TFLOAT{tipo = 'f';};

mv:	mv ',' ID  init 
	|
	;
init:	'='{int i=0;install($0, tipo, 1, 0); } INT {char temp[5];sprintf(temp, "%c%d", get_sym($0)->type,get_sym($0)->address);sprintf($$, "%s%s","C", $3);formaCuadruplo("=", temp, "", $$);}
	|'=' {int i=0;install($0, tipo, 1, 0); } FLOAT   {char temp[5];sprintf(temp, "%c%d", get_sym($0)->type, get_sym($0)->address);sprintf($$, "%s%s","C", $3);formaCuadruplo("=", temp, "", $$);}
	| {int i=0;install($0, tipo, 1, 0); char temp[5];sprintf(temp, "%c%d", get_sym($0)->type,get_sym($0)->address);formaCuadruplo("=", temp, "", "C0");}
	;

met:	VOID ID{addDir($2, pc);} f{formaCuadruplo("return", "", "", "");} met	
	|
	;
f:	'(' ')' bloque;
bloque:	'{' s '}';

s:	stat ';' s
	| control s
	|
	;
sob:	stat ';' 
	|bloque		
	|control 
	;
stat:	asign
	|ID '('')'	{char dir[5]; sprintf(dir,"%d", getDir($1));formaCuadruplo("gotoP", dir, "", "");}
	|COUT '(' mensaje ')'		{formaCuadruplo("out", "", "", $3);}			
	|CIN '(' ide	')'		{formaCuadruplo("in", "", "", $3);}
	;

asign: ide asig ea	{formaCuadruplo($2,$1,"",$3);}
	|ide incdec 	{formaCuadruplo($2, "", "", $1);};
control:	WHILE temp '(' el ')'{push(pc);formaCuadruplo("gotoF", $4, "", "");} sob 
						{int dir2= pop();
						char dir1[5]; sprintf(dir1,"%d",pop());
						formaCuadruplo("goto", "", "", dir1); 
						push(dir2); rellena();}
		|DO temp sob WHILE '(' el ')' {char dir[5]; sprintf(dir,"%d", pop());formaCuadruplo("gotoT", $6, "", dir);} ';'				
		|FOR '(' asign ';' el 
{
push(pc);//dir gotof
formaCuadruplo("gotoF", el, "", "");
push(pc);//dir goto a código
formaCuadruplo("goto", "", "", "");
}';' 
asign ')' 
{

int i = pop() ; //dir goto a codigo
int j = pop();//dir gotof
char dir[5]; 
sprintf(dir, "%d", j-1);
push(j);
push(pc);// dir goto comp
push(i);
formaCuadruplo("goto", "", "", dir);//goto dir-1(comp);

rellena(); //rellena goto a código
}
sob	
{

int i = pop();
char dir[5];
sprintf(dir, "%d", i-1);
formaCuadruplo("goto", "", "", dir);
rellena(); 
  }
		|IF '(' el ')' temp2 sob  {rellena();}%prec IF				
		|IF '(' el ')' temp2 sob  ELSE {formaCuadruplo("goto", "", "", "");rellena();push(pc-1);} sob	{rellena();}			
	;
temp2:	{push(pc); formaCuadruplo("gotoF", el, "", "");};
temp:	{push(pc);};
mensaje: 	ea
		|STRING
		;

incdec:	PP {$$="++";}
	|MM{$$="--";};
asig:	'=' 	{$$= "=";}
	|PEQ	{$$ = "+=";}
	|LEQ	{$$ = "-=";}
	|MEQ	{$$ = "*=";}
	|DEQ	{$$ = "/=";};	
ea:	x 		{$$=$1;}
	|ea '+' x	{$$ = getTemp(); formaCuadruplo("+", $1, $3, $$);}
	|ea '-' x	{$$ = getTemp(); formaCuadruplo("-", $1, $3, $$);};	
x:	y		{$$ = $1;}
	|x '*' y	{$$ = getTemp(); formaCuadruplo("*", $1, $3, $$);}
	|x '/' y	{$$ = getTemp(); formaCuadruplo("/", $1, $3, $$);}
	|x '%' y	{$$ = getTemp(); formaCuadruplo("%", $1, $3, $$);};	
y:	ide		{$$ = $1;}	
	|n		{$$ = $1;}
	|'(' ea ')'	{$$ = $2;}
	
;
n:	INT 	{char temp[10];sprintf(temp, "%s%s", "C", $1); strcpy($$,temp);
}
	|FLOAT	{char temp[10];sprintf(temp, "%s%s", "C", $1); strcpy($$,temp);}
	;

el:	z	{$$ = $1;strcpy(el, $$);}
	|el OR z	{$$ = getTemp();formaCuadruplo("OR", $1, $3, $$);};	
z:	a	{$$ = $1;}
	|z AND a	{$$ = getTemp();formaCuadruplo("AND", $1, $3, $$);};
a:	'!' b	{$$ = getTemp(); formaCuadruplo("NOT", $1, "", $$);}
	|b	{$$ = $1;};	
b:	ea comp ea	{$$ = getTemp(); formaCuadruplo($2, $1, $3, $$);}
	|'(' el ')'	{$$ = $2;};
comp:	EQ	{$$ = "==";}
	|NEQ	{$$ = "!=";}
	|'>'	{$$ = ">";}
	|'<'	{$$ = "<";}
	|GEQ	{$$ = ">=";}
	|LEQ	{$$ = "<=";};


arr2:	'[' INT ']' {listaDim(atoi($2), lista);} arr2
	|'[' INT ']'{listaDim(atoi($2), lista);};




ide:	ID	{if(get_sym($1)!=0){
char temp[20];
sprintf(temp, "%c%d", get_sym($1)->type, get_sym($1)->address);
strcpy($$,temp); 
}
}
	|ID{temp = (get_sym($1))->lista;dim=0; base = get_sym($1)->address;} arr{$$=$3;};



arr:	'[' ea ']' {

char t[10]; sprintf(t, "C%d", getFactor(temp, dim));
char *productoParcial = getTemp();
formaCuadruplo("*", $2, t, productoParcial);
if(dim!=0){
	$$ = getTemp();
	formaCuadruplo("+", $0, productoParcial, $$);
	}
else
	$$ = productoParcial;
dim++;
}




arr {$$ = $5;}
	|'[' ea ']'{
if(getFactor(temp, dim)==1){

char* temporal ;
if(dim!=0){
	temporal= getTemp();
	formaCuadruplo("+", $0, $2, temporal);}
else{
temporal = $2;
}
char base_c[5]; sprintf(base_c, "C%d", base);
$$ = getTemp();

formaCuadruplo("+", temporal, base_c, $$);
$$[0] = 't';
}
else
yyerror("Too few dimensions\n");
};






%%

void yyerror (char *s)
{
	printf("%s\n", s);
}

void formaCuadruplo(char* op, char* op1, char* op2, char* r)
{
	
	
	if(op1[0] == 'T'){
	char* x = strndup(op1+sizeof(char), strlen(op1)-1);
	if(atoi(x)>=0 && atoi(x)<=19){
		avail[atoi(x)] = 0;
	} 
	}
	if(op2[0] == 'T' ){
char* x = strndup(op2+sizeof(char), strlen(op2)-1);
	if(atoi(x)>=0 && atoi(x)<=19){
		
		avail[atoi(x)] = 0;
	} 
	}
	
	
	(cuadruplos[pc][0]) = (char*)malloc(strlen(op));
	
	(cuadruplos[pc][1]) =(char*)malloc(strlen(op1));
	
	(cuadruplos[pc][2]) = (char*)malloc(strlen(op2));
	
	(cuadruplos[pc][3]) = (char*)malloc(strlen(r));
	
	strcpy((cuadruplos[pc][0]) ,op);
	strcpy((cuadruplos[pc][1]) ,op1);
	strcpy((cuadruplos[pc][2]) ,op2);
	strcpy((cuadruplos[pc][3]) ,r);
	//printf("%s\t%s\t%s\t%s\n",cuadruplos[pc][0], cuadruplos[pc][1], cuadruplos[pc][2], cuadruplos[pc][3]);
	

	
	pc++;

}

char* getTemp()
{
	
	char tmp[5];
	for(int cont = 0; cont<19;cont++){
		if (avail[cont]==0){
			sprintf(tmp, "T%d", cont);
			avail[cont] = 1;
			break;
		}	
	}
	
	return (strdup(tmp));
}
void rellena(){
	
	int dir = pop();
	
	char temp[5];
	sprintf(temp, "%d", pc);
	
	free(cuadruplos[dir][3]);
	cuadruplos[dir][3] = (char*)malloc(strlen(temp));
	strcpy((cuadruplos[dir][3]),temp);
	//printf("%s\t%s\t%s\t%s\n",cuadruplos[dir][0], cuadruplos[dir][1], cuadruplos[dir][2], cuadruplos[dir][3]);
}



int main (void)
{
	return yyparse();
}
