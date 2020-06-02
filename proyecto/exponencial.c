#include <stdlib.h>
#include <stdio.h>
int x, y, i, j;
float e;
float f=1, p=1;
void fact(){
if(y>0){
	f*=y;
	y--;
	fact();
	}

}

void pow1(){
	for(j=0; j<y;j++){
		p *=x;
}
}

void exp1(){
for(i=10; i>=0; i--){
	f=1;
	p=1;
	y=i;
	pow1();
	
	fact();
	e+= p/f;
}
}

void main(){
scanf("%d", &x);
exp1();
printf("%f",e);
}
