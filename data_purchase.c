/*
Name: Ogwoka Ethan Motonu  
Reg No:CT100/G/29160/25
Description: program for mobile data purchase 

*/
#include<stdio.h>

	
int main() { 
	
	
int choice;
printf("Option bundle cost (kes)\n");
printf("1.100MB cost(kes)50\n");
printf("2.500MB cost(kes) 200\n");
printf("3.1GB   cost(kes)350\n");
printf("4.2GB   cost(kes)600\n");
     
    
printf("Enter choice (1-4):");
scanf("%d",& choice);

    
switch(choice){
		case 1:
			printf("You selected 100MB. Cost = KSH50 \n");
			break;
		case 2:
			printf("You selected 500MB. Cost = Ksh200 \n");
			break;
		case 3:
			printf("You selected 1GB. Cost = Ksh350 \n");
			break;
		case 4:
			printf("You selected 2GB. Cost = Ksh600 \n");
			break;
            default:
            	printf("Invalid choice \n");
	}

return 0;

}
