//
//  main.c
//  Test_20220608
//
//  Created by jojo wu on 2022/6/8.
//

#include <stdio.h>
#include <string.h>

/*
//只打印数字
int main(int argc, const char * argv[]) {
    int ch = 0;
    while ((ch=getchar()) != EOF) {//control+D是结束语
        if (ch<'0'||ch>'9') {
            continue;
        }
        putchar(ch);
    }
    return 0;
}
*/

//for循环
/*
int main(){
    
    int i = 0;
    for (i=1; i<=10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}
*/

/*
int main(){
    int i = 0;
    int j = 0;
    //for (; ; ) {  //for循环的初始化、调整、判断都可以省略，判断部分如果省略则为：恒为真
    for (; i <10; i++) {
        for (; j<10; j++) { //省略了初始化值一直存储
            printf("%d %d\n",i,j);
        }
    }
        //printf("ha\n");
    return 0;
}
*/

/*
//do while循环
int main(){
    
    //打印1-10
    int i = 1;
    do{
        if (i == 5) {
            continue; //死循环。
        }
        printf("%d ",i);
        i++;
    }
    while(i<=10);
    return 0;
}
*/

/*
//计算n的阶乘
int main(){
    
    int n = 0;
    int i = 0;
    int num = 1;
    printf("请输入要求阶乘的数字:");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        num=num*i;
    }
    printf("%d的阶乘为:%d\n",n,num);
    return 0;
}
*/

//计算1!+2!+3!+...+10!阶乘之和
int main(){
    int i = 0;
    int n = 0;
    int num = 1;
    int sum = 0;
    int j = 0;
    
    printf("请输入要求阶乘和的数字:");
    scanf("%d",&n);
    //效率低
    /*
    for (j=1;j<=n;j++){
        num = 1;
        for (i=1; i<=j; i++) {
            num= num*i;
        }
        sum = sum + num;
    }
    */
    //优化
    for (i=1; i<=n; i++) {
        
        num = num * i;  //n的阶乘
        sum = sum + num;
    }
    printf("1-%d的阶乘之和为:%d\n",n,sum);
    return 0;
}



