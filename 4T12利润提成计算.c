#include <stdio.h>

int main(int argc, char const *argv[]) {
  float profit, bonus = 0;
  printf("请输入利润总额：");
  scanf("%f", &profit);
  if (profit <= 100000) {
    // 低于10万，奖金可提10%
    bonus = profit * 0.1;
  } else if (profit > 100000 && profit <= 200000) {
    // 高于10万，低于20万，超过10万部分可提7.5%
    bonus = (100000 * 0.1) + (profit - 100000) * 0.075;
  } else if (profit > 200000 && profit <= 400000) {
    // 高于20万，低于40万，超过20万部分可提5%
    bonus = (100000 * 0.1) + (100000 * 0.075) + (profit - 200000) * 0.005;
  } else if (profit > 400000 && profit <= 600000) {
    // 高于40万，低于60万，超过40万部分可提3%
    bonus = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.005) +
            (profit - 400000) * 0.003;
  } else if (profit > 600000 && profit <= 1000000) {
    // 高于60万，低于100万，超过60万部分可提1.5%
    bonus = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.005) +
            (200000 * 0.003) + (profit - 600000) * 0.0015;
  } else if (profit > 1000000) {
    // 高于100万，超过100万部分可提1%
    bonus = (100000 * 0.1) + (100000 * 0.075) + (200000 * 0.005) +
            (200000 * 0.003) + (400000 * 0.0015) + (profit - 1000000) * 0.001;
  }

  printf("奖金总额：%.2f\n", bonus);
  return 0;
}