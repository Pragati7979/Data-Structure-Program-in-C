#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockPaperScissor(char you,char comp){
	
	if(you==comp){
		return 0;
	}
	
	if(you=='r' && comp=='p'){
		return -1;
	}
	else if(you=='r' && comp=='s'){
		return 1;
	}
	
	if(you=='p' && comp=='r'){
		return 1;
	}
	else if(you=='p' && comp=='s'){
		return -1;
	}
	
	if(you=='s' && comp=='p'){
		return 1;
	}
	else if(you=='s' && comp=='r'){
		return -1;
	}
	
	
}


int main(){
	int result;
	char you , comp;
	srand(time(0));
	int randNum = rand()%100+1;
	if(randNum < 33){
		comp = 'r';
	}
	else if(randNum>33 && randNum<66){
		comp = 'p';
	}
	else{
		comp = 's';
	}
	printf("Enter 'r' for rock ,'p' for paper or 's' for scissor :");
	scanf("%c",&you);
	result = rockPaperScissor(you,comp);
    printf("You chose : %c\nComputer chose : %c\n",you,comp);
    
    if(result == 0){
    	printf("Match Draw!!");
	}
	else if(result ==1){
		printf("Hurray !, You Win the game !!");
	}
	else{
		printf("You lose ! Try Again.");
	}
	
	return 0;
}
