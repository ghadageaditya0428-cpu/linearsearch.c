#include<stdio.h>
int main()
   {
   	int arr[]={55,66,77,22,11,52,19};
   	int key= 19;
   	int i,n=7;
   	
    for(i=0;i<7;i++)
      {
      	if(arr[i]==key)
      	  {
      	    printf(" Element %d found in the index %d",key,i);
          }
        else	  
		  printf("Element cannot found \n");
      }
	return 0; 
   }