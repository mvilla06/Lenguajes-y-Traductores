typedef struct symrec{
char*name;
char type;
int length;
char address;
DIMENSION* lista;
 struct symrec *next;
}symrec;
symrec* sym_table = (symrec*) 0;

symrec* put_sym(char*sym_name, char sym_type, int lenght, DIMENSION*lista);
symrec* get_sym(char*sym_name);
int i;


void install (char*sym_name, char sym_type, int lenght, DIMENSION*lista);
static char add = 0;

symrec* put_sym(char*sym_name, char sym_type, int lenght, DIMENSION* lista){
symrec* ptr;
ptr = (symrec*)malloc(sizeof(symrec));
ptr->name = (char*) malloc(strlen(sym_name)+1);
ptr->type = sym_type;
strcpy(ptr->name, sym_name);
ptr->next = (struct symrec*)sym_table;
ptr->address = add;
ptr->lista=lista;
add+=lenght;
sym_table = ptr;
return ptr;
}


symrec* get_sym(char*sym_name){
symrec*ptr;
for(ptr = sym_table;ptr!=(symrec*)0;ptr=(symrec*)ptr->next){
//printf("%s", sym_name);
if(strcmp(ptr->name, sym_name)==0) return ptr;
}
return 0;

}


void install (char*sym_name, char sym_type, int lenght, DIMENSION* lista){
symrec* s;
s=get_sym(sym_name);
if(s==0){s = put_sym(sym_name, sym_type, lenght, lista);
//printf("Variable: %s\tTipo:%c\tDirección: %d\n", sym_name, sym_type, s->address);
}
else {
//printf("%s is already defined\n", sym_name);
yyerror("Variable is already defined\n");
}
}
