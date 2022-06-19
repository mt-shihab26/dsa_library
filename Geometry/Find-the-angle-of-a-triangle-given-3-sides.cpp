/*
"SSS" is when we know three sides of the triangle,
and want to find the missing angles.

To solve an SSS triangle:
    * use The Law of Cosines first to calculate one of the angles
    * then use The Law of Cosines again to find another angle
    * and finally use angles of a triangle add to 180° to find the last angle.

cos(C) =  (a^2 + b^2 − c^2) / 2ab

cos(A) =  (b^2 + c^2 − a^2) / 2bc

cos(B) =  (c^2 + a^2 − b^2) / 2ca

see more: https://www.mathsisfun.com/algebra/trig-solving-sss-triangles.html

*/


// Code to find all three angles
// of a triangle given coordinate
// of all three vertices
#include <iostream>
#include <utility> // for pair
#include <cmath> // for math functions
using namespace std;

#define PI 3.1415926535

// returns square of distance b/w two points
int lengthSquare(pair<int,int> X, pair<int,int> Y)
{
	int xDiff = X.first - Y.first;
	int yDiff = X.second - Y.second;
	return xDiff*xDiff + yDiff*yDiff;
}

void printAngle(pair<int,int> A, pair<int,int> B,
				pair<int,int> C)
{
	// Square of lengths be a2, b2, c2
	int a2 = lengthSquare(B,C);
	int b2 = lengthSquare(A,C);
	int c2 = lengthSquare(A,B);

	// length of sides be a, b, c
	float a = sqrt(a2);
	float b = sqrt(b2);
	float c = sqrt(c2);

	// From Cosine law
	float alpha = acos((b2 + c2 - a2)/(2*b*c));
	float betta = acos((a2 + c2 - b2)/(2*a*c));
	float gamma = acos((a2 + b2 - c2)/(2*a*b));

	// Converting to degree
	alpha = alpha * 180 / PI;
	betta = betta * 180 / PI;
	gamma = gamma * 180 / PI;

	// printing all the angles
	cout << "alpha : " << alpha << endl;
	cout << "betta : " << betta << endl;
	cout << "gamma : " << gamma << endl;
}

// Driver code
int main()
{
	pair<int,int> A = make_pair(0,0);
	pair<int,int> B = make_pair(0,1);
	pair<int,int> C = make_pair(1,0);

	printAngle(A,B,C);

	return 0;
}
