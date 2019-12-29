#include "9cc.h"

int main(int argc, char **argv) {
  if (argc != 2) {
    error("引数の個数が正しくありません");
    return 1;
  }

  // エラーレポート出力用に、入力を保存する。
  user_input = argv[1];

  // トークナイズする
  token = tokenize();

  // ルートの式を評価する
  Node *node = expr();
  codegen(node);

  return 0;
}
