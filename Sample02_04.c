/*
 * Sample02_04.c
 *
 *  Created on: 2025/04/15
 *      Author: User
 */

#include <stdio.h>

/*
 * エスケープシーケンスを使う
 */
int main(void){
    printf("ダブルコーテーション：%c\n", '\"');
    printf("円マーク（バックスラッシュ）：%c\n", '\');
    printf("タブの%c挿入\n", '\t');

    return 0;
}
