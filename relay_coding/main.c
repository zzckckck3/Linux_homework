#include <stdio.h>
#include <time.h>

int main(){

        char name;
	printf("Hello world\n");
        printf("my name is yusang\n");
        printf("what is your name ? : \n");
	printf("my name is gyeonghoon\n");
	printf("what is your name ? : \n");

  scanf("%s,name");
  printf("You have pretty name\n");
	printf("Oh! Thank you");
 	printf("How old are you?\n");
	int age;
	scanf("%d",&age);
	printf("Bye world\n");
 
	printf("Hello~.~\n");

	printf("Bye~.~\n");


	printf("Bye See you again~~\n");
	
	printf("Hello~~!!!^^\n");
	
	printf("Hi~~!!\n");

	printf("Hi there~! Today is the duedate of this assignment.\n");
	if((tm.tm_year + 1900 <= 2020) && (tm.tm_mon + 1 <= 6) && (tm.tm_mday < 2)){
		printf("now is %d-%d-%d %d:%d:%d\n",tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
		printf("And the time remain is %d: %d: %d\n",24-tm.tm_hour, 60-tm.tm_min, 60-tm.tm_sec);
	}
	else		printf("Ugamigun jane.. Imi yaejunae ggeutnatdane..");

	return 0

}
