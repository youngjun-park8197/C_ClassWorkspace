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
	
	// \r ĳ���� ���� �ں��� ������ ��ŭ ������ ��½����ְ�, �� �ں��� \r �ձ��� ��½����� : carry this(���) 
	printf("howtou this \r carry\n"); 
			
	printf("tab \t tab\n");
	
	// �齽���ø� �ι����ָ� ���� �齽���� �ϳ��� ��½�����
	printf("back slash \\\\ back slash\n");  
	
	printf("check \' \' \' \' check\n"); 
	
	return 0;
}
