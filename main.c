//
//  main.c
//  zoo
//
//  Created by Elif Zeynep Çetinkaya on 2.07.2023.
//

#include <stdio.h>

int main() {
    
    int giraffeCount=20;
    int* giraffeCageNumber = &giraffeCount;
    int addedGiraffeCount;
    
    
    printf("Enter the number of added giraffes to 'Giraffe Habitat':\n");
    scanf("%d",&addedGiraffeCount);
    
    printf("Number of cage before addition:%d\n",*giraffeCageNumber);
    
    giraffeCount+= addedGiraffeCount;
    
    printf("Number of cage after addition:%d\n",*giraffeCageNumber);
    
    
   
    return 0;
}
