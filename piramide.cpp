#include <stdio.h>

int main() {
    
    int n,i,j,a,d,en;
    n=0;
    for(i=5; i>=n;i=i--){
    	for(j=1; j<=i; j++){
    		printf("%d ",j);}
    		
    	switch(j){
    		case 1:
    			printf("          ");
    			for(a=0;a>n;a--)
    				printf("%d ",a);printf("\n");break;
    		case 2:
    			printf("                 ");
    			for(a=1;a>n;a--)
    				printf("%d ",a);printf("\n");break;
    		case 3:
    			printf("             ");
    			for(a=2;a>n;a--)
    				printf("%d ",a);printf("\n");break;
    		case 4:
    			printf("         ");
    			for(a=3;a>n;a--)
    				printf("%d ",a);printf("\n");break;
    		case 5:
    			printf("     ");
				for(a=4;a>n;a--)
    				printf("%d ",a);printf("\n");break;
    		case 6:
    			printf(" ");
				for(a=5;a>n;a--)
    				printf("%d ",a);printf("\n");break;
    		}
}
        

    return 0;
}
