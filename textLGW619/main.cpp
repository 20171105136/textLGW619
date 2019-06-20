//
//  main.cpp
//  textLGW619
//
//  Created by s20171105136 on 2019/6/19.
//  Copyright © 2019 s20171105136. All rights reserved.
//

#include <cstdlib>
#include <stdio.h>
struct student
{
    
    int numbers;
    char name[10];
    char sex[10];
    int dateofbirth;
    char class1[15];
    char phoneNo[15];
    int judge1;
    int judge2;
    int judge3;
    int judge4;
    int judge5;
    int score;
};
int main()
{
    struct student s[100];
    FILE *fp1,*fp2;
    int i=0,j;
    
    fp1 =fopen("student1.txt","r");
    if(fp1==NULL)
    {
        printf("error");
        exit(-1);
    }
    else
    {
      fscanf(fp1,"%*[^\n]%*c");
        while(!feof(fp1))
        {
            fscanf(fp1,"%d,%[^,],%[^,],%d,%[^,],%[^,],%d,%d,%d,%d,%d",
                   &s[i].numbers,&s[i].name,&s[i].sex,&s[i].dateofbirth,&s[i].class1,
                   &s[i].phoneNo,&s[i].judge1,&s[i].judge2,&s[i].judge3,&s[i].judge4,&s[i].judge5);
            i++;
        }
        j=i;
        
        for(i=0;i<j;i++)
        {
            printf("%d,%s,%s,%d,%s,%s,%d,%d,%d,%d,%d\n",s[i].numbers,
                   s[i].name,s[i].sex,s[i].dateofbirth,s[i].class1,s[i].phoneNo,
                   s[i].judge1,s[i].judge2,s[i].judge3,s[i].judge4,s[i].judge5);
        }
        
        fclose(fp1);
    }

    return 0;
}
