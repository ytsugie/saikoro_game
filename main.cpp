#include <iostream>
#include "stdio.h"

// サイコロをふる関数のヘッダー定義
int saikoro_furu();

/**
 * サイコロゲーム
 * @return
 */
int main() {
    bool atari_flag = false;
    char string[128];
    int input;

    int atai = saikoro_furu();
//    printf("%d\n", atai);
    std::cout << "サイコロを振りました。";
    std::cout << "あたりの目は" << atai << "です。\n";
    std::cout << "HELLO\n";
    while( atari_flag == false) {
        std::cout <<"サイコロの目はいくつでしょう？\n";
        std::cin >> string;
        input = std::atoi(string);
        if(input == atai) {
            atari_flag = true;
        }else{
            std::cout << "残念違います。\n";
        }
    }
    printf("当たりました！おめでとう。\n");

    return 0;
}

/**
 * さいころをふる関数
 * @return
 */
int saikoro_furu() {
    // 乱数の種を設定しないと 毎回同じサイコロの目になるので混ぜる
    int seed = (int) time(NULL);
    srand(seed);

    int atai = rand() % 6 + 1;
    return atai;
}
