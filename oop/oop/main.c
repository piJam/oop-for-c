//
//  main.c
//  oop
//
//  Created by pi on 12/4/2019.
//  Copyright © 2019 pi. All rights reserved.
//

#include <stdio.h>
#include "demo.h"

void run(void* demo,char* str)
{
    show(demo,str);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    classDemo cd;
    createClassDemo(&cd);
    
    classDemo_sub cds;
    createClassDemo_sub(&cds);
    
    run(&cd,"基类");
    run(&cds,"子类");
    
    printf("classDemo.tv is %p\n",cd.tv);
    printf("createClassDemo_sub.cd.tv is %p\n",cds.cd.tv);
    
    deleteClassDemo(&cd);
    deleteClassDemo_sub(&cds);
    
    printf("classDemo.tv is %p\n",cd.tv);
    printf("createClassDemo_sub.cd.tv is %p\n",cds.cd.tv);
    return 0;
}
