

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cmd[128];
    while(1)
    {
         scanf("%s",cmd);
         if(strcmp(cmd,"help")==0)
         {
             printf("This is help cmd!\n");
         } 
          else if(strcmp(cmd,"others")==0)
          {
              printf("This is others cmd!\n");
          
          }
          else if(strcmp(cmd,"hello")==0)
          {
              printf("This is hello cmd!\n");
          }
          else if(strcmp(cmd,"greet")==0)
          {
               printf("This is greet cmd!\n");
          }
          else if(strcmp(cmd,"square")==0)
          {
               printf("This is square cmd!\n");
          } 
          else if(strcmp(cmd,"div")==0)
          {
               printf("This is div cmd!\n");
          } 
          else if(strcmp(cmd,"quit")==0)
          { 
               exit(0);
          } 
          else
          {
                printf("wrong cmd!\n");
           }
    }
}





