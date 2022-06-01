//
//  main.c
//  Test_20220601
//
//  Created by jojo wu on 2022/6/1.
//

#include <stdio.h>
#include <string.h>

/*
int main() {
    //getchar键盘接收一个字符
    
    int a = getchar();
    putchar(a); //putchar()输出=printf
    printf("\n");
    
    return 0;
}
*/
/*
int main(){
    int a = 0;
    while ((a=getchar())!=EOF) {
        putchar(a);
    }
    
    return 0;
}
*/

int main(){
    int ret = 0;
    int pwd = 0;
    char passwd[20]={};
    printf("请输入密码:");
    //scanf("%s",passwd);
    
    //输完密码后还输入了\n，所以缓冲区还剩一个‘\n’
    //再用一个getchar读取走\n
    //getchar();
    while ((pwd = getchar())!='\n') {
        ;
    }
    printf("11111111");
    printf("请确认(Y/N):");
    ret = getchar();
    if (ret =='Y') {
        printf("确认成功\n");
    }else{
        printf("放弃确认\n");
    }
    return 0;
}
 


