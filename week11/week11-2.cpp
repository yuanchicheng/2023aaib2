///week11-2.cpp�z�l�k
///�H�e���g�k,30�U*30�U=900����
///�οz�l�k,�u�n30�U+���������Ǯ�l,��20�U��
#include <stdio.h>
int main(){
    int BOUND=20000,ans=0;
    int table[20000]={};
    for(int i=2;i<BOUND;i++){
        if(table[i]==0){
            ans++;
            for(int k=i*i;k<BOUND;k+=i){
                table[k]=-1;
            }
        }
    }
    printf("��Ʀ�: %d ��\n",ans);
}
