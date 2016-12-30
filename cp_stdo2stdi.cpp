//
// Created by annsshadow on 2016/12/30.
//

#include "apue.h"
int main(void)
{
    int c;

    //包含"\n"
    while((c = getc(stdin)) != EOF)
        if (putc(c,stdout) == EOF)
            //err_sys("output error");
            printf("output error");

    //ferror()
    //检查上个流操作是否因失败置位失败标志
    //标志会被clearerr, rewind, freopen清除
    if (ferror(stdin))
        //err_sys("input error");
        printf("input error");

    exit(0);
}
