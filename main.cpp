#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void delay(int miliseconds)
{
     if(miliseconds <= 0)
     {
         return;
     }
     clock_t start, finish;
     start = clock();
     finish = start;
     while(finish - start < miliseconds)
     {
         finish = clock();
     }
}
int main()
{
    printf("\n***------------------------***\n");
    printf("\n|        TRAC NGHIEM         |\n");
    printf("\n|    TIN HOC DAI CUONG       |\n");
    printf("\n***------------------------***\n\n\n");
    FILE *f;
 	f=fopen("input.txt","r");
 	int i=0,dem=0,n;
    printf("Nhap so cau hoi:");
    scanf("%d",&n);
    char s[500],da[5],tl[1];
    if(f==NULL)
     {
      printf("Khong mo duoc tep");
      getch();
      exit(-1);
     }
    while(!feof(f))
    {
        i++;
        printf("\n\nCau %d:\n",i);
        fgets(s,500,f);
        printf("%s\n",s);
        fgets(s,500,f);
        printf("%s\n",s);
        fgets(s,500,f);
        printf("%s\n",s);
        fgets(s,500,f);
        printf("%s\n",s);
        fgets(s,500,f);
        printf("%s\n",s);
        fgets(da,5,f);
        printf("Thoi gian suy nghi:");
        int ti=2;
        while(ti--)
        {
        delay(1000);
        printf(" %d ",ti);
        }
        printf("\nTra loi:");
        scanf("%s",&tl);
        if  ((tl[0]==da[0])||(tl[0]==da[1]))
        {
            printf("Dap an dung\n");
            dem=dem+1;
        } else printf("Dap an sai\n");
        if (i==n) break;
        printf("-----------------------------------\n");
    }
    fclose(f);
    printf("\n***--------------------------***\n");
    printf("\n|    BAN DA TRA LOI DUNG       |\n");
    printf("\n|      %2.1f PHAN TRAM!         |\n",float(dem)/float(n)*100);
    printf("\n***--------------------------***\n\n\n");
    getchar();
    return 0;
}
