
#include <stdio.h>
int main()
{
    char name[1000];
    int n,i;
    scanf("%d",&n);
    i = 1;
    for(i=1;i<=n;i++){
        scanf("%s",name);
        if(name[0]=='T' && name[1]=='h' && name[2]=='o' && name[3]=='r')
            printf("Y\n");
        else printf("N\n");
    }


    return 0;
}
