#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "stack.h"
#define OPCODE_COUNT 29
int pc;
const char * opcode_table[] = {"goto", "gotoF", "gotoT", "gotoP", "return", "end", "in", "out", "+", "-", "*", "/", "%", "==", ">", "<", ">=", "<=", "!=", "NOT", "AND", "OR", "=", "+=", "-=", "*=", "/=", "++", "--"};
char * cuadruplo;
char * program_memory[1000];
int pc = 0;
char *line;
char *opcode, *op1, *op2, *op3;
char* fetch(int pc);
int end = 0;
void execute(char* f1, char* f2, char* f3, char* f4);
float avail[20];
float mem[100];






int main(){
size_t size = 20;
FILE* input;
input = fopen("output.txt", "r");
cuadruplo = (char*) malloc (sizeof(char)*size);
if (input!=0){
	int x = 0;
	int bytes_read;
	do{
	
	bytes_read = getline(&cuadruplo, &size, input);
	program_memory[x] = (char*)malloc(bytes_read*sizeof(char)+1);
	
	
	strcpy(program_memory[x], cuadruplo);
	
	x++;}
	while (bytes_read>=0);
	
	
	
	while(!end){
		line = strdup(fetch(pc));
		
		pc++;
		opcode = strtok(line, " \t\n");
		op1 = strtok(NULL, " \t\n");
		op2 = strtok(NULL, " \t\n");
		op3 = strtok(NULL, " \t\n");
		//printf("%s\t%s\t%s\t%s\t\n", opcode, op1, op2, op3);
		execute(opcode, op1, op2, op3);
		
		/*for(int j=0; j<12;j++){
	printf("%.2f\t", mem[j]);
	}*/
		/*printf("\n\n");
for(int j=0; j<12;j++){
	printf("%.2f\t", mem[12+j]);
	}*/
		/*printf("\n\n");
for(int j=0; j<15;j++){
	printf("%.2f\t", avail[j]);
	}
		printf("\n\n");*/

		//getchar();
		
		}
		
	
}
free(cuadruplo);
fclose(input);
return 0;
}

char* fetch(int next){
	return (program_memory[next]);
	
}


void execute(char* f1, char* f2, char* f3, char* f4){
int i;


for( i=0; i<OPCODE_COUNT; i++){

if(strcmp(opcode_table[i], f1)==0){

break;
}
}
float a, b, c;
char e1[5], e2[5], e3[5];

if (i>7 && i<22 && i!=19){ //the operation has 3 fields
	
	strncpy(e1, f2+sizeof(char), strlen(f2)-1);
	strncpy(e2, f3+sizeof(char), strlen(f3)-1);
	strncpy(e3, f4+sizeof(char), strlen(f4)-1);
	
	if(f2[0]=='i' ) a=(int)mem[atoi(e1)];
	else if(f2[0]=='f')a=mem[atoi(e1)];
	else if (f2[0]=='T') a= avail[atoi(e1)];
	else if (f2[0]=='t') a=mem[(int)avail[atoi(e1)]];
	else if (f2[0]=='C') a=atof(e1);

	if(f3[0]=='i' ) b=(int)mem[atoi(e2)];
	else if(f3[0]=='f')b=mem[atoi(e2)];
	else if (f3[0]=='T') b= avail[atoi(e2)];
	else if (f2[0]=='t') b=mem[(int)avail[atoi(e2)]];
	else if (f3[0]=='C') b=atof(e2);
	c=atoi(e3);

}else if (i>21 && i<27){
	
	strncpy(e1, f2+sizeof(char), strlen(f2)-1);
	strncpy(e2, f3+sizeof(char), strlen(f3)-1);
	
	
	if(f2[0]=='i'||f2[0]=='f') a=atoi(e1); //direccionamiento directo
	else if (f2[0]=='t') a=avail[atoi(e1)]; //direccionamiento indirecto
	
	
	if(f3[0]=='i'||f3[0]=='f') {b=mem[atoi(e2)];}
	else if (f3[0]=='T') {b= avail[atoi(e2)];}
	else if (f3[0]=='t') b=mem[(int)avail[atoi(e2)]];
	else if (f3[0]=='C') {b=atof(e2);}
	
	
}

switch(i){
 case 0://goto
	pc = atoi(f2);
	break;
case 1://gotoF
{
	char add[3];
	strncpy(add, f2+sizeof(char), strlen(f2)-1);
	if(!avail[atoi(add)])
		pc = atoi(f3);
		
	
	break;
}
case 2://gotoT
{
	char add[3];
	strncpy(add, f2+sizeof(char), strlen(f2)-1);
	if(avail[atoi(add)])
		pc = atoi(f3);
		
	
	break;
}
	
case 3://gotoP
	push(pc);
	pc = atoi(f2);
	
	break;
case 4://return
	pc=pop();
	break;
case 5://end
	end = 1;
	break;
case 6://in
	{char var[5];
	strncpy(var, f2+sizeof(char), strlen(f2)-1);
	int dir;
	if(f2[0]=='t')
		dir = avail[atoi(var)];
	else
		dir = atoi(var);
	printf("Read:\n");
	scanf("%f", &mem[dir]);
	
	break;}
case 7://out
	{char var[5];
	strncpy(var, f2+sizeof(char), strlen(f2)-1);
	int dir;
	if(f2[0]=='t')
		dir = avail[atoi(var)];
	else
		dir = atoi(var);
	printf("Write:\n%f\n", mem[dir]);
	
	break;}
case 8://+
	{
	
	avail[(int)c] = a+b;
	
	
	break;
}
	
case 9://-
{
	avail[(int)c] = a-b;
	
	break;}
case 10://*
{
	
	avail[(int)c] = a*b;
	
	break;}
case 11:///
{	//printf("%f\t%f\t%f\n", a, b, a/b);
	if(f3[0] == 'i' ||f2[0] =='i')
	avail[(int)c] = (int)(a/b);
	else
	
	avail[(int)c] = a/b;
	
	break;}
	
case 12://%
{
	avail[(int)c] = (int)a%(int)b;
	
	break;}
	
case 13://==
	{
	avail[(int)c]= (a==b);
	break;}
case 14://>
	avail[(int)c] = (a>b);
	break;
case 15://<
	
	avail[(int)c] = (a<b);
	
	break;
case 16://>=
	avail[(int)c] = (a>=b);
	break;
case 17://<=
	avail[(int)c] = (a<=b);
	break;
case 18://!=
	avail[(int)c] = (a!=b);
	break;
case 19://NOT
	break;
case 20://AND
	avail[(int)c] = a&&b;
	break;
case 21://OR
	avail[(int)c] = a||b;
	break;
case 22://=
	{

	mem[(int)a]= b;
	
	
	break;}
case 23://+=
	mem[(int)a]+=b;
	break;
	
case 24://-=
	mem[(int)a]-=b;
	break;
case 25://*=
	mem[(int)a]*=b;
	break;
case 26:///=
	mem[(int)a]/=b;
	break;
case 27://++
	{char var[5];
	strncpy(var, f2+sizeof(char), strlen(f2)-1);
	mem[atoi(var)] ++;
	break;}
case 28://--
	{char var[5];
	strncpy(var, f2+sizeof(char), strlen(f2)-1);
	mem[atoi(var)] --;
	break;}

}
}
