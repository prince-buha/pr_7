#include<stdio.h>
int addition(int x,int y){
	return x+y;
}
int subtraction(int x,int y){
	return x-y;
}
int Multiplication(int x,int y){
	return x*y;
}
int division(int x,int y){
	return x/y;
}
int modulo(int x,int y){
	return x%y;
}
void main(){
	int n1,n2,choice;
	printf("enter your number:-  ");
	scanf("%d",&n1);
	printf("enter your number:-  ");
	scanf("%d",&n2);
	printf("press 1 for +\n");
	printf("press 2 for -\n");
	printf("press 3 for *\n");
	printf("press 4 for /\n");
	printf("press 5 for %\n");
	printf("press 0 for exit\n");
 do{
 	printf("enter your choice :-");
 	scanf("%d",&choice);
 	 switch(choice){
 	 	case 1:
 	 		printf("the sum of two value are : %d\n",addition(n1,n2));
 	 		break;
 	 	case 2:
		    printf("the suntraction of two value are : %d\n",subtraction(n1,n2));
			break;
	    case 3:
		    printf("the Multiplication of two value are : %d\n",Multiplication(n1,n2));
		    break;
		 case 4:
		    printf("the division of two value are : %d\n",division(n1,n2));
		    break;
		 case 5:
		    printf("the modulo of two value are : %d\n",modulo(n1,n2));
			break;
		 case 6:
		    break;	
	  }
 }while(choice!=0);
}
