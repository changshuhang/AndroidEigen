package com.example.androideigen;

public class EigenLib {

	static {
		System.loadLibrary("test");
	}
 
	public static native double[] adding(double[] array1, double[] array2,int row,int col);
}
