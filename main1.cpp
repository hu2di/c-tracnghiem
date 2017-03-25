#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
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
    char s[500],da[10],tl[10];
    if(f==NULL)
     {
      printf("Khong mo duoc tep");
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
        fgets(da,10,f);
        printf("Thoi gian suy nghi:");
        int ti=5;
        while(ti--)
        {
        Sleep(1000);
        printf(" %d ",ti);
        }
        printf("\nTra loi:");
        scanf("%s",&tl);
        if  ((tl[0]==da[1])||(tl[0]==da[0]))
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
    return 0;
}
