#include <iostream>
#include <math.h>
#include <jni.h>

//#include <EigenUtil.h>

#include <exception>
#include <Eigen/Dense>

#include "log.h"
using namespace Eigen;

extern "C"
{
JNIEXPORT jdoubleArray JNICALL Java_com_example_androideigen_EigenLib_adding
	(JNIEnv *env, jobject obj, jdoubleArray fltarray1, jdoubleArray fltarray2,jint row,jint col)
{

	jdoubleArray result;
	jsize alen1 = env->GetArrayLength(fltarray1); //获取长度
	jsize alen2 = env->GetArrayLength(fltarray2); //获取长度
	//判断长度是否一致
	if(alen1!=alen2)
	{
		return NULL;
	}
	//判读长度是否正确
	if(alen1!=row*col)
	{
		return NULL;
	}
	result = env->NewDoubleArray(alen1);
	if (result == NULL) {
		return NULL; /* out of memory error thrown */
	}

	jdouble* flt1 = env->GetDoubleArrayElements( fltarray1,0);
	jdouble* flt2 = env->GetDoubleArrayElements( fltarray2,0);

	//动态矩阵，运行时确定 MatrixXd
	Map<MatrixXd> dymMat1(flt1,row,col);
	Map<MatrixXd> dymMat2(flt2,row,col);

	MatrixXd xd=dymMat1+dymMat2;
	flt1=xd.data();

	int len=(int)(row*col);

	env->SetDoubleArrayRegion(result, 0, len, flt1);
	env->ReleaseDoubleArrayElements(fltarray1, flt1, 0);
	env->ReleaseDoubleArrayElements(fltarray2, flt2, 0);
	return result;

}
}
