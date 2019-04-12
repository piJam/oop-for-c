//
//  demo.c
//  oop
//
//  Created by pi on 12/4/2019.
//  Copyright © 2019 pi. All rights reserved.
//

#include "demo.h"



//----------------------------------------

void createClassDemo(classDemo* cd)
{
    cd ->tv = (virtual_table*)malloc(sizeof(virtual_table));
    cd ->tv-> show = &virtual_show;
    
}
void deleteClassDemo(classDemo* cd)
{
    free(cd->tv);
    cd->tv = NULL;
    printf("deleteClassDemo释放成功！\n");
}
void virtual_show(classDemo* cd,char* str)
{
    printf("this is classDemo show(),value is %s\n",str);
}

//----------------------------------------


void createClassDemo_sub(classDemo_sub* cd_sub)
{
    cd_sub ->cd .tv = (virtual_table*)malloc(sizeof(virtual_table));
    cd_sub ->cd.tv->show = &virtual_show_sub;
}
void deleteClassDemo_sub(classDemo_sub* cd_sub)
{
    free(cd_sub->cd.tv);
    cd_sub->cd.tv = NULL;
    printf("deleteClassDemo_sub释放成功！\n");
}
void virtual_show_sub(classDemo_sub* cd_sub,char* str)
{
     printf("this is classDemo_sub show(),value is %s\n",str);
}
//----------------------------------------

void show(void* func,char* str)
{
    ( ((classDemo*)func) ->tv ) ->show(func,str);
    
}
