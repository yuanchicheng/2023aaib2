/// week09-1.cpp �F�Ѩ禡���w�q
#include <stdio.h>
int myAdd(int a, int b) { ///�禡�w�q
    return a+b; ///�i��2�Ӽ�,�X�h1�Ӽ�
}

void myPrint(int a) { ///�禡�w�q �i��1��
    for(int i=1; i<=a; i++) printf("*");
    printf("\n");
}

int main() ///main()�禡
{
    int ans = myAdd(3, 4); ///�禡�I�s
    printf("Hello ans: %d\n", ans);
    myPrint(7); ///�禡�I�s(�Х����ڰ���)
    myPrint(6); ///�禡�I�s(�Х����ڰ���)
    myPrint(5); ///�禡�I�s(�Х����ڰ���)
    myPrint(4); ///�禡�I�s(�Х����ڰ���)
}
