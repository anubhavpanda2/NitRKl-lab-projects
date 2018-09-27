#include<stdio.h>
int pop(int sz,int *t,int stk[sz-1])
{
    int top=*t;
    (*t)--;
    
    
    
    return (stk[top]);
    }
void push(int item,int sz,int *t,int stk[sz-1])
{
     
     int top=(*t);
     top++;
     stk[top]=item;
     *t=top;
   
     }
int main()
{
int sz;
       printf("please enter the size\n");
       scanf("%d",&sz);
       
       if(sz<0)
       {
       printf("invalid entry...\n");
       return 1;
       }
char exp[sz];  
scanf("%s",exp);
int i,top,stk[sz-1];
top=-1;;
                   
                   
            for(i=0;i<sz;i++)
             {
                  if(48<=(int)exp[i]&&(int)exp[i]<=57)
                    {
                            int j;
                            j=(int)exp[i]-48;
                           
                            push(j,sz,&top,stk);  
                                                     
                    }              
                             
                  if((int)exp[i]==42) 
                  {               
                              int k;
                              k=pop(sz,&top,stk);
                        
                              int j;
                              j=pop(sz,&top,stk);
                              
                              push((j*k),sz,&top,stk);                    
                  }          
                  if((int)exp[i]==43) 
                  {                
                              int k=pop(sz,&top,stk);
                              int j=pop(sz,&top,stk);
                              
                              push(j+k,sz,&top,stk);                 
                  }
                  if((int)exp[i]==45) 
                  {                   
                               int k=pop(sz,&top,stk);
                              int j=pop(sz,&top,stk);
                              
                              push(j-k,sz,&top,stk);                      
                  }          
                  if((int)exp[i]==47) 
                  {                  
                               int k=pop(sz,&top,stk);
                              int j=pop(sz,&top,stk);
                              
                              push(j/k,sz,&top,stk);                      
                  }   
                       if((int)exp[i]==94) 
                  {                  int s=1;
                               int k=pop(sz,&top,stk);
                              int j=pop(sz,&top,stk);
                              while(k!=0)
                              {
                                  s=s*j;
                                  k--;       
                                         }
                                         
                              push(s,sz,&top,stk);                   
                  }                
             }             
       
    printf("%d",pop(sz,&top,stk));
    return 0;
    
}
  
