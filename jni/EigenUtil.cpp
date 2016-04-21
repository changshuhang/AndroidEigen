#include "EigenUtil.h"

/*
*�����������
*/
MatrixXd adding(MatrixXd & m1,MatrixXd & m2)
{
	if(m1.rows()==m2.rows()&&m1.cols()==m2.cols())
	{
		try
		{
			MatrixXd m=m1+m2;
			return m;
		}catch(std::exception e)
		{
			MatrixXd m(1,1);
			m(0,0)=-1;
			return m;
		}
	}else{
		MatrixXd m(1,1);
		m(0,0)=-1;
		return m;
	}
}

/*
*�����������
*/
MatrixXd subtract(MatrixXd & m1,MatrixXd & m2)
{
	if(m1.rows()==m2.rows()&&m1.cols()==m2.cols())
	{
		try
		{
			MatrixXd m=m1-m2;
			return m;
		}catch(std::exception e)
		{
			MatrixXd m(1,1);
			m(0,0)=-1;
			return m;
		}
	}else{
		MatrixXd m(1,1);
		m(0,0)=-1;
		return m;
	}
}

/*
*�����������
*/
MatrixXd multiply(MatrixXd & m1,MatrixXd & m2)
{
	if(m1.cols()==m2.rows())
	{
		try
		{
			MatrixXd m=m1*m2;
			return m;
		}catch(std::exception e)
		{
			MatrixXd m(1,1);
			m(0,0)=-1;
			return m;
		}
	}else{
		MatrixXd m(1,1);
		m(0,0)=-1;
		return m;
	}
}

/*
*ת��
*/
MatrixXd transposeS(MatrixXd & m1)
{
	try
	{
		MatrixXd m=m1.transpose();
		return m;
	}catch(std::exception e)
	{
		MatrixXd m(1,1);
		m(0,0)=-1;
		return m;
	}
}

/*
*����
*/
MatrixXd adjointS(MatrixXd & m1)
{
	try
	{
		MatrixXd m=m1.adjoint();
		return m;
	}catch(std::exception e)
	{
		MatrixXd m(1,1);
		m(0,0)=-1;
		return m;
	}
}

/*
*�����
*/
MatrixXd inverseS(MatrixXd & m1)
{
	if(m1.rows()==m1.cols())
	{
		try
		{
			MatrixXd m=m1.inverse();
			return m;
		}catch(std::exception e)
		{
			MatrixXd m(1,1);
			m(0,0)=-1;
			return m;
		}
	}else
	{
		MatrixXd m(1,1);
		m(0,0)=-1;
		return m;
	}
}

/*
*����ʽ
*/
double determinantS(MatrixXd & m1)
{
	return m1.determinant();
}