%{
#include "y.tab.h"
#include<string.h>
extern char * yylval;
%}

upper [A-Z]
lower [a-z]
digit [0-9]
letter ({upper}|{lower})
flot {digit}*"."{digit}+
ent {digit}+
id {letter}({letter}|{digit}|"_")*
string \"({letter}|{digit})*\"
comentario "//"({letter}|{digit}|" ")*\n
cml	"/*"({letter}|{digit}|" ")*"*/"

%%
"void" {return VOID;}
"main"	{return MAIN;}
"int"	{return TINT;}
"float"	{return TFLOAT;}
"if"	{return IF;}
"else"	{return ELSE;}
"while"	{return WHILE;}
"do"	{return DO;}
"for"	{return FOR;}
"read"	{return CIN;}
"write"	{return COUT;}
"endl"	{return ENDL;}
","	{return ',';}
";"	{return ';';}
"="	{return '=';}
"("	{return '(';}
")"	{return ')';}
"["	{return '[';}
"]"	{return ']';}
"{"	{return '{';}
"}"	{return '}';}
"+"	{return '+';}
"-"	{return '-';}
"*"	{return '*';}
"/"	{return '/';}
"%"	{return '%';}
"||"	{return OR;}
"&&"	{return AND;}
"!"	{return '!';}
"=="	{return EQ;}
"!="	{return NEQ;}
">"	{return '>';}
"<"	{return '<';}
">="	{return GEQ;}
"<="	{return LEQ;}
"+="	{return PEQ;}
"-="	{return LEQ;}
"*="	{return MEQ;}
"/="	{return DEQ;}
"++"	{return PP;}
"--"	{return MM;}
">>"	{return SHR;}
"<<"	{return SHL;}
{ent}	{yylval= strdup(yytext);return INT;}
{flot}	{yylval= strdup(yytext);return FLOAT;}
{string}	{printf("string");}
{comentario}	{printf("COMENTARIO");}
{cml}		{;}
{id}	{yylval = strdup(yytext); return ID;}
[ \t\n]		;

%%

int yywrap ()
{
return 1;
}

