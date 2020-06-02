typedef struct DIMENSION{
	int size;
	int factor;
	struct DIMENSION* next;
}DIMENSION;

void listaDim(int dSize, DIMENSION* lista){
	if(lista->size ==0){
	lista->size = dSize;
	lista->factor = 1;
	}else{
	DIMENSION* ptr;
	DIMENSION* last;
	for(ptr = lista;ptr!=NULL;ptr=ptr->next){
		ptr->factor*=dSize;
		last=ptr;
		
	}
	DIMENSION* nuevo = (DIMENSION*) malloc(sizeof(DIMENSION));
	last->next = nuevo;
	nuevo->size = dSize;
	nuevo->factor = 1;
	nuevo->next = 0;}
}

int getFactor(DIMENSION* lista, int pos){
DIMENSION* ptr = lista;
int factor;
for(int i=0; i<pos; i++){
	ptr=ptr->next;
}
factor = ptr->factor;
return factor;
}
