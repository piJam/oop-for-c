//
//  demo.h
//  oop
//
//  Created by pi on 12/4/2019.
//  Copyright © 2019 pi. All rights reserved.
//

#ifndef demo_h
#define demo_h

#include <stdio.h>
#include <stdlib.h>

typedef struct{void(*show)(void*,char*);} virtual_table;

typedef struct{virtual_table* tv;int x;int y;} classDemo;
typedef struct{classDemo cd;int z;} classDemo_sub;

void createClassDemo(classDemo* cd);
void deleteClassDemo(classDemo* cd);

void createClassDemo_sub(classDemo_sub* cd_sub);
void deleteClassDemo_sub(classDemo_sub* cd_sub);

void virtual_show_sub(classDemo_sub* cd_sub,char* str);
void virtual_show(classDemo* cd,char* str);

void show(void* func,char* str);
#endif /* demo_h */
