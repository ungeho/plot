#include <stdio.h>


int main(void) {
  FILE *gp;

  // -persist 終了後もグラフを残す
  gp = popen("gnuplot -persist","w");

  //軸の名前設定
  fprintf(gp,"set xlabel \"x\"\n");
  fprintf(gp,"set ylabel \"y\"\n");

  // plotした画像を保存
  // fprintf(gp,"set terminal png\n");
  // fprintf(gp,"set output 'sin.png'\n");

  //sin(x)を描画
  fprintf(gp,"plot sin(x)\n");

  pclose(gp);
  return 0;
}
