// 在美国的体积测量系统中，
// 1品脱等于2杯
// 1杯等于8盎司
// 1盎司等于2大汤勺
// 1大汤勺等于3茶勺
// 编写一个程序，提示用户输入杯数，
// 并以品脱、盎司、汤勺、茶勺为单位显示等价容量。
// 思考对于该程序，为何使用浮点类型比整数类型更合适？
// 因为对于体积测量中测量值为整数为小概率事件
#include <stdio.h>
int main(void)
{
    float Bei;
    printf("请输入杯数：");
    scanf("%f", &Bei);
    printf("%f杯=%f品脱\n", Bei, Bei / 2);
    printf("%f杯=%f盎司\n", Bei, 8*Bei);
    printf("%f杯=%f汤勺\n", Bei, 2*8*Bei);
    printf("%f杯=%f茶勺\n", Bei, 2*3*8*Bei);
    return 0;
}