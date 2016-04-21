#ifndef _EIGENUTIL_H_
#define _EIGENUTIL_H_

#include <exception>
#include <Eigen/Dense>  
using namespace Eigen;

/*
*两个矩阵相加
*/
MatrixXd adding(MatrixXd & m1,MatrixXd & m2);
/*
*两个矩阵相减
*/
MatrixXd subtract(MatrixXd & m1,MatrixXd & m2);
/*
*两个矩阵相乘
*/
MatrixXd multiply(MatrixXd & m1,MatrixXd & m2);
/*
*转置
*/
MatrixXd transposeS(MatrixXd & m1);
/*
*伴随
*/
MatrixXd adjointS(MatrixXd & m1);
/*
*逆矩阵
*/
MatrixXd inverseS(MatrixXd & m1);
/*
*行列式
*/
double determinantS(MatrixXd & m1);

#endif