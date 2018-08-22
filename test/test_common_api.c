/*************************************************************************
 *
    > File Name: common_api.c
    > Author: Yunchun
    > Mail: zyc@baic.io
    > Created Time: 2018年08月22日 星期三 11时07分22秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "../common/common_api.h"



int test_common_api_main()
{
    char *hex_str = "00A404000B464D53482E44432E415050";
    unsigned char buf[16];
    int sum, i;

    sum = hexStr2bytes(hex_str, buf, 32);
    printf("length = %d data = ", sum);
    for(i = 0; i < sum; i++)
    {
        printf("%02x", buf[i]);
    }
    printf("\n");


    unsigned char buf2[16] = {0x00, 0xA4, 0x04, 0x00, 0x0B, 0x46, 0x4D, 0x53, 0x48, 0x2E, 0x44, 0x43, 0x2E, 0x41, 0x50, 0x50};
    char *hex_str2;
    int sum2;

    hex_str2 = malloc(32 * sizeof(char *));
    sum2 = bytes2hexStr(buf2, hex_str2, 16);
    printf("length = %d data = %s\n", sum2, hex_str2);
    free(hex_str2);


    return 0;
}

