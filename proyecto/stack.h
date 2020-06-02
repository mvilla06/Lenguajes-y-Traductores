//stack.h
void push(int x);
int pop();
typedef struct node{
	int val;
	struct node* next;
}node;


node* s = (node *) 0;

void push(int x){
	node* temp = (node*)malloc(sizeof(node));
	temp->next = s;
	s= temp;
	s->val = x;
}

int pop(){
	if(s!=0){
	
	node* temp = s;
	
	int val = s->val;
	
	s = s->next;
	free(temp);
	return val;}
	return 0;
}
