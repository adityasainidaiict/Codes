#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,n,t;
    scanf("%d",&t);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    while(t--){int cnt =1;
       scanf("%d",&n);
               if(n == 0){printf("1 \n");
                  
                  }
        else{
            for(i=1;i<=n;i++){if(i%2==0){cnt = cnt+1;}
                              else{cnt = cnt * 2;}
                                                                                      
                             }
        printf("%d \n",cnt);
        }

    
    
    }       



    
    return 0;

}