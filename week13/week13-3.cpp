///week13-3.cpp ��֪k
#include <stdio.h>
int main(){
    int n; ///�n��Ʀr���C�@���}
    scanf("%d", &n);
    int N=0;
    int a[20]={};
    while(n>0){ ///�p�G�Ʀr�٨S����B�٦��ݯd
        a[N++]=n%10;
        ///int now =n%10; ///�{�b��U�Ӫ��Ʀr
        ///printf("now:%d\n",now);
        n=n/10; ///��ư��k,��n�ܤp
    }
    int bad=0; ///�@�}�l�S���a��
    for(int i=0;i<N;i++){ ///�v�r���ˬd
        if(a[i] != a[N-1-i] ) bad=1;
    }
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
