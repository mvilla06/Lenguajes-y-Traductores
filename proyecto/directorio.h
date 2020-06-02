typedef struct FUNCION{
	char * nombre;
	int dir;
	struct FUNCION* next;
}FUNCION;

FUNCION* directorio = (FUNCION*) 0;

void addDir(char* nombre, int dir){
	FUNCION* ptr = (FUNCION*)malloc(sizeof(FUNCION));
	ptr->nombre = (char*)malloc(sizeof(nombre));
	strcpy(ptr->nombre, nombre);
	ptr->dir = dir;
	ptr->next = directorio;
	//printf("%s\t%d\n", ptr->nombre, ptr->dir);
	directorio = ptr;
	
}

int getDir(char* nombre){
	FUNCION* ptr = directorio;
	while(ptr!=0){
		if(strcmp(nombre, ptr->nombre)==0) return ptr->dir;
		ptr=ptr->next;
	}
	return 0;
}
