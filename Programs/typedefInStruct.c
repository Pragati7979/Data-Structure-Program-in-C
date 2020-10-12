#include<stdio.h>
#include<string.h>

typedef struct employee{
	int empNo;
	char name[20];
}Emp;

void display(Emp e){
	printf("Employee Code : %d\n",e.empNo);
	printf("Name of Employee : %s",e.name);
}

int main(){
	Emp emp ;
	Emp *ptr= &emp;
	ptr->empNo = 1190;
	strcpy(ptr->name,"Chinki Srivastava");
	
	display(emp);

}
