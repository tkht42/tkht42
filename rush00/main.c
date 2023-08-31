#include <unistd.h>  // 関数のプロトタイプ宣言 void rush(int x, int y);  
int main() {
    int x, y;     // xとyの値をユーザーに入力してもらう     write(1, "長方形の横の長さ(x)を入力してください: ", 39);
    scanf("%d", &x);
    write(1, "長方形の縦の長さ(y)を入力してください: ", 39);
    scanf("%d", &y);      // rush関数を呼び出して長方形を出力     
    rush(x, y);
    return 0; 
}  // 指定された横幅と縦幅の長方形を出力する関数 
    void rush(int x, int y) {
        char corner = '+';
        char horizontal = '-';
        char vertical = '|';
        char space = ' ';
        char newline = '\n';
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {// 角や辺の部分を出力             
                if ((i == 0  i == y - 1) && (j == 0  j == x - 1))
                    write(1, &corner, 1);             
                else if (i == 0  i == y - 1)
                    write(1, &horizontal, 1);
                else if (j == 0  j == x - 1)
                    write(1, &vertical, 1);
                else
                    write(1, &space, 1);
            }
            write(1, &newline, 1);
        } 
}
