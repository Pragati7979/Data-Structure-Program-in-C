#include<stdio.h>
//#inlude<string.h>

struct employee{
	int empNo;
	char name[20];
};

void display(struct employee e){
	printf("Employee Code : %d\n",e.empNo);
	printf("Name of Employee : %s",e.name);
}

int main(){
	struct employee e = { 1011, "Pragati Srivastava"};
	display(e);

}
