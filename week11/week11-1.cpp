///week11-1.cpp �Q�ոս�ƪ��z�l�k,���ո��¤�k
///�Q�Ƥ@�U 10000�H�U���X�ӽ��
#include <stdio.h>
int  isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return 0; ///�Q�㰣�N���O���
    }
    return 1;
}
int main(){ ///�Q��BOUND���,�ݬݨ쩳�n�]�h�j���d��,30�U,�~����2�U
    int BOUND = 300000,ans=0;
    for(int i=2;i<BOUND;i++){
        if(isPrime(i)){
            printf("%d ",i); ///�L�X���
            ans++; ///�P��++ �h�@�ӽ��
        }

    }
    printf("��Ʀ�:%d��\n" ,ans);
}
