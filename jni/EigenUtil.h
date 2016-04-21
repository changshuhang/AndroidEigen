#ifndef _EIGENUTIL_H_
#define _EIGENUTIL_H_

#include <exception>
#include <Eigen/Dense>  
using namespace Eigen;

/*
*�����������
*/
MatrixXd adding(MatrixXd & m1,MatrixXd & m2);
/*
*�����������
*/
MatrixXd subtract(MatrixXd & m1,MatrixXd & m2);
/*
*�����������
*/
MatrixXd multiply(MatrixXd & m1,MatrixXd & m2);
/*
*ת��
*/
MatrixXd transposeS(MatrixXd & m1);
/*
*����
*/
MatrixXd adjointS(MatrixXd & m1);
/*
*�����
*/
MatrixXd inverseS(MatrixXd & m1);
/*
*����ʽ
*/
double determinantS(MatrixXd & m1);

#endif