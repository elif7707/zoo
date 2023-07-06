//
//  main.c
//  zoo
//
//  Created by Elif Zeynep Çetinkaya on 2.07.2023.
//

#include <stdio.h>

int main(void) {
    
    int giraffeCount=20;
    int* giraffeCageNumber = &giraffeCount;
    int addedGiraffeCount=1;
     
    while(addedGiraffeCount>0){
        printf("Enter the number of added giraffes to 'Giraffe Habitat':\n");
        scanf("%d",&addedGiraffeCount);
        
        if(addedGiraffeCount>0){
            
            printf("Number of cage before addition:%d\n",*giraffeCageNumber);
            
            giraffeCount+= addedGiraffeCount;
            
            printf("Number of cage after addition:%d\n",*giraffeCageNumber);
        }
    }
        
    printf("Invalid added giraffe count!\n");
    
   
    return 0;
}

