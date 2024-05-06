#include<iostream>
#include<cmath>
#define MAXN 2000//MAXN为数据最大容量，若不够可再次扩容
#define endl "\n";
using namespace std;
int main() {
	double variables[MAXN], derta_ins, a, average, ans, ans2;
	int num_of_variables, num_of_times, i = 0,panduan=1;
	while (panduan) {
		cout << "输入变量数(比如变量D,H,d,h,则输入4)：";
		cin >> num_of_variables;
		cout << "输入每个变量的实验数据数(比如测试了六组数据则输入6)：";
		cin >> num_of_times;
		for (int temp_i = 1; temp_i <= num_of_variables; temp_i++) {
			ans = 0;
			ans2 = 0;
			cout << "\n输入第" << temp_i << "个变量的数据";
			for (int temp_j = 1; temp_j <= num_of_times; temp_j++) {
				cout << "\n输入第" << temp_j << "个实验数据\n";
				cin >> variables[temp_j];
				ans += variables[temp_j];
			}
			average = ans / num_of_times;
			for (int temp_j = 1; temp_j <= num_of_times; temp_j++) {
				ans2 += (variables[temp_j] - average) * (variables[temp_j] - average);
			}
			ans2 /= (num_of_times * (num_of_times - 1));
			a = sqrt(ans2);
			cout << "实验仪器为：（若不在列表请直接输入误差限）\n";
			cout << "1.钢直尺\n2.游标卡尺\n3.螺旋测微器25mm\n4.螺旋测微器100mm\n5.读数显微镜\n6.水银式温度计\n7.物理天平500g\n8.物理天平1kg\n";
			cin >> derta_ins;
			if (derta_ins == 1)derta_ins = 0.15;
			else if (derta_ins == 2)derta_ins = 0.05;
			else if (derta_ins == 3)derta_ins = 0.004;
			else if (derta_ins == 4 || derta_ins == 5)derta_ins = 0.005;
			else if (derta_ins == 6)derta_ins = 0.2;
			else if (derta_ins == 7)derta_ins = 0.02;
			else if (derta_ins == 8)derta_ins = 0.05;
			else 1;
			cout << "\n第" << temp_i << "个变量平均值：" << average << "\nUa：" << a << "\nUb：" << derta_ins / 1.7320508 << "\n合成：" << sqrt(a * a + derta_ins * derta_ins / 3) << endl;
		}
		cout << "\n是否继续使用？1/0" <<endl;
		cin >> panduan;
	}



}
