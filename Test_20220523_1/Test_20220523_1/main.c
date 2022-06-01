//
//  main.c
//  Test_20220523_1
//
//  Created by jojo wu on 2022/5/23.
//

#include <stdio.h>

/*
//else和最近的未匹配的if语句匹配
int main(int argc, const char * argv[]) {
    int age =49;
    if (age < 18){
        printf("未成年\n");
        printf("好好学习\n");//执行多条要加大括号
    }
    else if (age>=18 && age<30){
        printf("青年\n");
    }
    else
        printf("成年\n");
        printf("1111");
    
    return 0;
}
*/

/*
//练习
//判断一个数是否为奇数，输出1-100之间的奇数
int main(){
    
    int num = 1;
    while (num <=100) {
        if(num % 2 == 0)
            ;
//            printf("num是偶数")；
        else
            printf("num是奇数=%d\n",num);
        num++;
    }
    
    return 0;
}
*/

//switch语句
/*
int main(){
    
    int day = 0;
    printf("请输入1-5:\n");
    scanf("%d",&day);
    switch (day) { //必须传整型类型的表达式
        case 1://整型常量表达式
            printf("星期一\n");
            break;
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
    }
    
    return 0;
}
*/
/*
//case后的break不是必须的，最后一句加上break，避免bug
int main(){
    int day = 0;
    printf("请输入1-7:\n");
    scanf("%d",&day);
    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("工作日\n");
            break;
        case 6:
        case 7:
            printf("休息日\n");
            break;
        default:
            printf("输入错误！请输入1-7的数字\n");
            break;
    }
    
    return 0;
}
*/
/*
int main(){
    int i = 1;
    while (i <=10) {
        
        printf("%d\n",i);
        i++;
    }
    
    return 0;
}
*/

int main(){
    int ch = getchar();
    putchar(ch);
    printf("%c\n",ch);
    return 0;
}
