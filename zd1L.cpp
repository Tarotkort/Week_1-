#include <iostream>
#include <math.h>

using namespace std;

// Функция Задание 1
float fun(float x)
{
	return pow((x + 1), 2) + 3 * (x + 1);
}

int main()
{
	setlocale(0, "Rus");

	cout << "Задание 1" << endl;

	cout << fun(1.7) << endl;
	cout << fun(3) << endl;

	cout << endl;

	cout << "Задание 2" << endl;

	int a;

	cout << "Введите число: ";
	cin >> a;

	if (a % 2 == 0)
	{
		cout << "Число " << a << " чётное" << endl;
	}
	else
	{
		cout << "Число " << a << " нечётное" << endl;
	}

	cout << endl;

	cout << "Задание 3" << endl;

	float x, y, z;

	cout << "Введите 3 числа" << endl;
	cin >> x;
	cin >> y;
	cin >> z;

	float sum = (x * 2) + (y - 3) + pow(z, 2);

	cout << "Суммы новых 3 чисел равна: " << sum << endl;

	cout << endl;

	cout << "Задание 4" << endl;

	float i, j, k;

	cout << "Введите 3 числа: " << endl;
	cin >> i;
	cin >> j;
	cin >> k;

	float arf = (i + j + k) / 3;
	float sum1 = 2 * (i + k) - (j * 3);

	cout << "Среднее арифметическое число равно: " << arf << endl;
	cout << "Результат равен: " << sum1 << endl;

	cout << endl;

	cout << "Задание 5" << endl;

	float m, l, n, t, st;

	cout << "Расстояние" << endl;
	cout << endl;

	cout << "Введите кол-во метров: ";
	cin >> m;

	cout << "В " << m << " м" << " - " << m * 0.001 << " км," << endl;
	cout << "В " << m << " м" << " - " << m * 0.00094 << " вёрст" << endl;

	cout << endl;

	cout << "Объём" << endl;
	cout << endl;

	cout << "Введите кол-во литров: ";
	cin >> l;

	cout << "В " << l << " л" << " - " << l << " куб. дм," << endl;
	cout << "В " << l << " л" << " - " << l * 0.001 << " куб. м," << endl;
	cout << "В " << l << " л" << " - " << l * 0.264172 << " амер. гал.," << endl;
	cout << "В " << l << " л" << " - " << l * 0.22 << " англ. гал.," << endl;
	cout << "В " << l << " л" << " - " << l * 0.008648 << " баррелей." << endl;

	cout << endl;

	cout << "Площадь" << endl;
	cout << endl;

	cout << "Введите кол-во кв.м.: ";
	cin >> n;

	cout << "В " << n << " кв.м." << " - " << n * 0.0001 << " гектар," << endl;
	cout << "В " << n << " кв.м." << " - " << n * 0.00025 << " акров." << endl;

	cout << endl;

	cout << "Температура" << endl;
	cout << endl;

	cout << "Введите кол-во градусов Цельсия: ";
	cin >> t;

	cout << "В " << t << " градусов Цельсия" << " - " << t + 32 << " град. Фаренгейта," << endl;
	cout << "В " << t << " градусов Цельсия" << " - " << t + 273.15 << " Кельвинов," << endl;
	cout << "В " << t << " градусов Цельсия" << " - " << t * 0.8 << " град. реомюра." << endl;

	cout << endl;

	cout << "Кулинария" << endl;
	cout << endl;

	cout << "Введите кол-во чайных ложек: ";
	cin >> st;

	cout << "В " << st << " чайных ложек" << " - " << st * 0.33 << " ст. лож.," << endl;
	cout << "В " << st << " чайных ложек" << " - " << st * 0.025 << " стакана," << endl;
	cout << "В " << st << " чайных ложек" << " - " << st * 0.33 << " рюмки." << endl;

	cout << endl;

	cout << "Задание 6" << endl;

	float con, pech;

	cout << "Введите цену за 1 кг конфент: ";
	cin >> con;

	cout << "Введите цену за 1 кг печенья: ";
	cin >> pech;

	cout << endl;

	//a
	cout <<"Стоимость первой покупки: "<< con * 0.3 + pech * 0.4 << endl;

	//б
	float pokup = ((con * 1.8) + 2 * pech) * 3;
	cout << "Стоимость второй покупки: " << pokup << endl;

	system("pause");
	return 0;
}