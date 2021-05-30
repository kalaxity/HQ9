#include <iostream>
#include <string>
using namespace std;

// 関数のプロトタイプ宣言
void hello();
void quine(string);
void bottles();

int main() {
  // アキュムレータの初期化
  int accumulator = 0;

  // ソースコードを標準入力から読み込む
  string source;
  cin >> source;

  // ソースコードを1文字ずつ読んで実行する
  for (int i = 0; i < source.length(); i++) {
    switch (source.at(i)) {
      
      // Hのときはハローワールドを出力
      case 'H':
        hello();
        break;

      // Qのときはソースコードを出力
      case 'Q':
        quine(source);
        break;

      // 9のときは"99 Bottles of Beer"の歌詞を出力
      case '9':
        bottles();
        break;

      // +のときはアキュムレータをインクリメント
      case '+':
        accumulator++;
        break;

      // それ以外の場合は無視する
      default:
        break;
    }
  }
}

// ハローワールドを出力する関数hello()
void hello() {
  cout << "Hello, world!" << endl;
}

// ソースコードを出力する関数quine(string)
void quine(string source) {
  cout << source << endl;
}

// "99 Bottles of Beer"の歌詞を出力する関数bottles()
void bottles() {
  for (int i = 99; i > 2; i--) {
    cout << i << " bottles of beer on the wall, "
      << i << " bottles of beer. Take one down and pass it around, "
      << (i - 1) << " bottles of beer on the wall." << endl;
  }
  cout << "2 bottles of beer on the wall, 2 bottles of beer. "
    << "Take one down and pass it around, 1 bottle of beer on the wall. "
    << endl;
  cout << "1 bottle of beer on the wall, 1 bottle of beer. "
    << "Take one down and pass it around, no more bottles of beer on the wall. "
    << endl;
  cout << "No more bottles of beer on the wall, no more bottles of beer. "
    << "Go to the store and buy some more, 99 bottles of beer on the wall."
    << endl;
}