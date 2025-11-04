#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/*
 *这是一个用来进行对用户输入的数字进行阶乘计算。此程序使用了<inttypes.h>,<stdint.h>,<stdio.h>头文件，用intxx_t的形式进行定义变量，并使用了更加安全的scanf_s()的输入函数等亮点。
 */


int main(void) {

     //让用户输入一个正整数
    printf("请输入一个正整数：");

    //声明一个变量uNumber，此变量用于存放用户输入的数字
    uint64_t uNumber;

    //将用户输入的数字存放在uNumber中
    scanf_s("%"PRIu64"", &uNumber);


    //初始化变量times,用来进行循环判断
    uint64_t times = 1;

    //初始化一个变量uResult，用来存放用户输入的正整数的阶乘
    uint64_t uResult = 1;

    //进行while循环，当times不大于用户输入的数时运行
    while (times <= uNumber) {

        //将1与自然数进行相乘，再将结果赋值给变量uResult
        uResult *= times;

        //将变量加1后再赋值给变量times
        times += 1;
    }

    //输出用户输入的正整数的阶乘
    printf("您输入的数字的阶乘为：%"PRIu64"",uResult);



   

    return 0;


}
