//第１問
//1011 + 0101 = 11 + 5 = 16
//110100 + 11011 = 52 + 27 = 79
//1011 + 110011 = 11 + 51 = 62

//第２問
//FF + FF = 255 + 255 = 510
//ed + 10 = 237 + 16 = 253
//563 + cd = 1379 + 205 = 1584

//第３問
/*
char  1バイト
int   2バイト
float  4バイト
double  4バイト
*/
//第４問
/*
  1
*/
//第５問
/*
#include<iostream>
int main()
{
	int n = 0;
	for (int i = 0; i < 100; i = i + 3)
	{
		n = n + 1;
		std::cout << n << "\n";
	}
}
  //34回
*/
//第６問
/*
#include<iostream>
int main()
{
	int n = 0;
	int i = 0;
	while (i < 100)
	{
		i = i + 5;
		n = n + 1;
		std::cout << n << "\n";
	}
}
  //20回
*/
//第７問
/*
  20
*/
//第８問
/*
  20
*/
//第９問
/*
  void
*/
//第１０問
/*
void distance()
{
	int position1_x, position1_y, position2_x, position2_y, distance_x, distance_y;
	distance_x = position1_x - position2_x;
	distance_y = position1_y - position2_y;
	printf("%d\n%d\n", distance_x, distance_y);
}
*/
//第１１問