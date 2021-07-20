#include<stdio.h>
//‰Û‘è‚P
/*
struct Vector2
{
public:
	int x;
	int y;
};
*/
//‰Û‘è‚Q
/*
struct Vector2
{
private:
	int x;
	int y;
public:
	int getX() { return x; }
	int getY() { return y; }
	int setX(int n) { return x = n; }
	int setY(int n) { return y = n; }

};
*/
//‰Û‘è‚R
/*
struct Vector3
{
private:
	int x;
	int y;
	int z;
public:
	int getX() { return x; }
	int getY() { return y; }
	int getZ() { return z; }
	int setX(int n) { return x = n; }
	int setY(int n) { return y = n; }
	int setZ(int n) { return z = n; }
};
*/
int main()
{
	//‰Û‘è‚P
	/*
	Vector2 vector2;
	vector2.x = 3;
	vector2.y = 4;
	printf("%d\n%d\n", vector2.x , vector2.y);
	*/
	//‰Û‘è‚Q
	/*
	Vector2 vector2;
	vector2.setX(5);
	vector2.setY(6);
	printf("%d\n%d\n", vector2.getX(), vector2.getY());
	*/
	//‰Û‘è‚R
	/*
	Vector3 vector3;
	vector3.setX(7);
	vector3.setY(8);
	vector3.setZ(9);
	printf("%d\n%d\n%d\n", vector3.getX(), vector3.getY(), vector3.getZ());
	*/

	return 0;
}