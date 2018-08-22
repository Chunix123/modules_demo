/*************************************************************************
 *
    > File Name: common_api.c
    > Author: Yunchun
    > Mail: zyc@baic.io
    > Created Time: 2018年08月21日 星期二 17时49分08秒
 ************************************************************************/

#include <stdio.h>
#include "common_api.h"



int bytes2hexStr(const unsigned char *buf, char *hexStr, int bufLen)
{
    int i;

    for(i = 0; i < bufLen; i++)
    {
        sprintf(&(hexStr[i * 2]), "%02x", buf[i]);
    }

    // Each 2 hex characters is one byte
    return bufLen * 2;
}


int hexStr2bytes(const char *hexStr, unsigned char *buf, int bufLen)
{
    int i;

    for(i = 0; i < bufLen / 2; i++)
    {
        sscanf(&(hexStr[i * 2]), "%2hhx", &(buf[i]));
    }

    // Each 2 hex characters is one byte
    return bufLen / 2;
}

