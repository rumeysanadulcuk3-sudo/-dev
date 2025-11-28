#include <stdio.h>
int main (){
	char ad[20];
	char c ;
	int i=0;
	printf("adinizi giriniz:");
	 while((c=getchar() ) !='\n'&& i<19 ){
    
	ad[i]=c ;
	i++;
}
ad[i]='\0';
printf("ad:%s\n",ad);

return 0;
	
	
	
	
	
	
	
}
