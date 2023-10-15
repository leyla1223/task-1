#include <stdio.h>
#include <string.h>
int main(){
	char my_array[]={'a','b','c','a','a'};
	int length=sizeof(my_array)/ sizeof(my_array[0]);
	int i;
	for(i=0;i<length;i++){
		if (my_array[i]=='a'){
		printf("Found 'a' at position %d\n",i);
	}
	}
	return 0;
	
}
