#include <stdio.h>

int main(void) {

	int number1 = 1234, number2 = 4321, number3 = 2134;
	
	printf("Good morning!\n");
	printf("This is YoungJun.\n");	
	printf("Hello World!\n");

	printf("the First number is : %d \n", number1);
	printf("the Second number is : %d \nthe Third number is : %d \n", number2, number3);
	
	printf("Warning sound \a \n");
	printf("Next line\n");
	
	// \r 캐리지 리턴 뒤부터 끝까지 만큼 앞으로 출력시켜주고, 그 뒤부터 \r 앞까지 출력시켜줌 : carry this(결과) 
	printf("howtou this \r carry\n"); 
			
	printf("tab \t tab\n");
	
	// 백슬래시를 두번해주면 앞의 백슬래시 하나를 출력시켜줌
	printf("back slash \\\\ back slash\n");  
	
	printf("check \' \' \' \' check\n"); 
	
	return 0;
}
