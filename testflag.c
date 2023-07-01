#include "main.h"

int main(void)
{
	
	/*long int l = INT_MAX + 1024;*/
	long int l1 = INT_MAX - 1024;
	
	_printf("%+d", 1024);
	printf("%+d", 1024);

	printf("\n------------------------\n");
	_printf("%+d", -1024);
	printf("%+d", -1024);		
	
	printf("\n------------------------\n");
	_printf("%+d", 0);
	printf("%+d", 0);

	printf("\n------------------------\n");
	_printf("%+d", INT_MAX);
	printf("%+d", INT_MAX);

	printf("\n------------------------\n");
	_printf("%+d", INT_MIN);
	printf("%+d", INT_MIN);
	
	printf("\n------------------------\n");
/*	_printf("INT_MAX ++%+d", l); */
/*	printf("INT_MAX ++ %+d", l); */

	printf("\n------------------------\n");
	_printf("Less than INT_MIN %+d\n", l1); 
	printf("Less than INT_MIN %+d\n", l1); 

	printf("\n------------------------\n");
	_printf("There is %+d bytes in %+d KB\n", 1024, 1);
	printf("There is %+d bytes in %+d KB\n", 1024, 1);

	printf("\n------------------------\n");
	_printf("%+d - %+d = %+d\n", 1024, 2048, -1024);
	_printf("%+d - %+d = %+d\n", 1024, 2048, -1024);
	
	printf("\n------------------------\n");
	_printf("%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	
	printf("\n------------------------\n");
	_printf("%+i", 1024);
	printf("%+i", 1024);
	
	printf("\n------------------------\n");
	_printf("Real number %+d\n", 504);
	printf("Real number %+d\n", 504);
	
	printf("\n------------------------\n");
	_printf("Fake number %+v\n", "Who are you");
	printf("Fake number %+v\n", "Who are you");
	
	printf("\n------------------------\n");
	_printf("%+i", -1024);
	printf("%+i", -1024);
	
	printf("\n------------------------\n");
	_printf("%+i", 0);
	printf("%+i", 0);
	
	printf("\n------------------------\n");
	_printf("%+i", INT_MAX);
	printf("%+i", INT_MAX);
	
	printf("\n------------------------\n");
	_printf("%+i", INT_MIN);
	printf("%+i", INT_MIN);
/*
	
	printf("\n------------------------\n");
	_printf("%+i", l); where l is a long int equals to INT_MAX + 1024	
	printf("%+i", l); where l is a long int equals to INT_MAX + 1024	
	
	printf("\n------------------------\n");
	_printf("%+i", l); where l is a long int equals to INT_MIN - 1024
	printf("%+i", l); where l is a long int equals to INT_MIN - 1024
	
	printf("\n------------------------\n");
	_printf("%+i", l); where l is a long int equals to INT_MIN - 1024
	printf("%+i", l); where l is a long int equals to INT_MIN - 1024
*/	
	printf("\n------------------------\n");
	_printf("%+i - %+i = %+i\n", 1024, 2048, -1024);
	printf("%+i - %+i = %+i\n", 1024, 2048, -1024);
	
	printf("\n------------------------\n");
	_printf("%+i + %+i = %+i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%+i + %+i = %+i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	
	printf("\n------------------------\n");
	_printf("% d", 1024);
	printf("% d", 1024);
	
	printf("\n------------------------\n");
	_printf("% d", -1024);
	printf("% d", -1024);
	
	printf("\n------------------------\n");
	_printf("% d", 0);
	printf("% d", 0);
	
	printf("\n------------------------\n");
	_printf("% d", INT_MAX);
	printf("% d", INT_MAX);
	
	printf("\n------------------------\n");
	_printf("% d", INT_MIN);
	printf("% d", INT_MIN);
/*
	printf("\n------------------------\n");
	_printf("% d", l); where l is a long int equals to INT_MAX + 1024
	printf("% d", l); where l is a long int equals to INT_MAX + 1024
	
	printf("\n------------------------\n");
	_printf("% d", l); where l is a long int equals to INT_MIN - 1024
	printf("% d", l); where l is a long int equals to INT_MIN - 1024
*/	
	printf("\n------------------------\n");
	_printf("There is % d bytes in % d KB\n", 1024, 1);
	printf("There is % d bytes in % d KB\n", 1024, 1);
	
	printf("\n------------------------\n");
	_printf("% d - % d = % d\n", 1024, 2048, -1024);
	printf("% d - % d = % d\n", 1024, 2048, -1024);
	
	printf("\n------------------------\n");
	_printf("% d + % d = % d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("% d + % d = % d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	
	printf("\n------------------------\n");
	_printf("% i", 1024);
	printf("% i", 1024);
	
	printf("\n------------------------\n");
	_printf("% i", -1024);
	printf("% i", -1024);
	
	printf("\n------------------------\n");
	_printf("% i", 0);
	printf("% i", 0);
	
	printf("\n------------------------\n");
	_printf("% i", INT_MAX);
	printf("% i", INT_MAX);
	
	printf("\n------------------------\n");
	_printf("% i", INT_MIN);
	printf("% i", INT_MIN);
	
	printf("\n------------------------\n");
	return (0);
}
