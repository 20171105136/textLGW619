//
//  main.cpp
//  textLGW619
//
//  Created by s20171105136 on 2019/6/19.
//  Copyright © 2019 s20171105136. All rights reserved.
//

#include<stdio.h>
#include<string.h>
struct stu{
    char num[20];
    char name[20];
    char sex[20];
    char birth[20];
    char major[20];
    char phone[20];
    float judge[100];
    float avg;
};
int main()
{
    int i,j,n,m,t;
    int sum=0;
    struct stu s[100];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%s %s %s %s %s %s ",&s[i].num,&s[i].name,&s[i].sex,&s[i].birth,&s[i].major,&s[i].phone);
        for(j=0;j<m;j++)
        {
            scanf("%f",&s[i].judge[j]);
        }
    }
    for(i=1;i<n;i++)
        for(j=0;j<n-i;j++)
        {
            if(s[i].judge[j]<s[i].judge[j+1])
            {
                t=s[i].judge[j];
                s[i].judge[j]=s[i].judge[j+1];
                s[i].judge[j+1]=t;
            }
        }
    for(i=0;i<n;i++)
    {
        for(j=1;j<m-1;j++)
        {
            sum=sum+s[i].judge[j];
        }
        s[i].avg=sum/(m-2);
        sum=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%s %s %s %s %s %s %.2f\n",s[i].num,s[i].name,s[i].sex,s[i].birth,s[i].major,s[i].phone,s[i].avg);
    }
}
