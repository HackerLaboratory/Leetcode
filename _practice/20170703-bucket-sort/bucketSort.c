/* 比如待排序的数范围是知道的，在0～10之间
 * 那么就准备10-0+1=11个桶（初始化为0），轮询这N个数
 * 比如当数是9时，那么第9+1个桶内数量+1；当数是1是，第1+1个桶内数量+1
 * 循环完成后，所有的数都放到了自己对应的桶里面
 * 然后轮询11个桶，桶里面有几个值就输出几次该桶的下标
 *
 * 适用场景：待排序数范围固定，且均匀分布
 * 假如极端场景：有两个数1、10000，范围在1～10000，要用桶排序，就要10000个桶，显然不适合，时间复杂度和空间复杂度都提升了
 * 当然真实的桶排序比这个复杂得多
 */
#include <stdio.h>

int main()
{
  int a[11], i, j, t;
  //初始化数组元素为0
  for(i=0; i<=10; i++){
    a[i] = 0;
  }

  //循环读入5个数
  for(i=1; i<=5; i++){
    scanf("%d", &t);
    a[t]++;
  }

  //依次判断a[0]~a[10]
  for(i=0; i<=10; i++){
    //出现几次就打印几次
    for(j=1; j<=a[i]; j++){
      printf("%d ", i);
    }
  }

  //这里的getchar用于暂停程序，以便查看输出内容
  getchar();
  getchar();

  return 0;
}
