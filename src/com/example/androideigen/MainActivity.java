package com.example.androideigen;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {

	private TextView textView1;
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		super.setContentView(R.layout.activity_main);
		
		textView1=(TextView)findViewById(R.id.textView1);
		
		double[] f1={1,324,65,76,87,98,45,56};
		double[] f2={23,45,6,7,34,56,76,87};
		double[] f=EigenLib.adding(f1,f2,2,4);
		StringBuffer sb=new StringBuffer();
		sb.append("第一组矩阵为:");
		int len=f1.length;
		for(int i=0;i<len;i++){
			sb.append(f1[i]);
			if(i!=len-1){
				sb.append("、");
			}
		}
		sb.append("\n");
		sb.append("\n");
		sb.append("第二组矩阵为:");
		len=f2.length;
		for(int i=0;i<len;i++){
			sb.append(f2[i]);
			if(i!=len-1){
				sb.append("、");
			}
		}
		sb.append("\n");
		sb.append("\n");
		sb.append("计算结果");
		if(f==null){
			sb.append("数据源出错!");
		}else{
			len=f.length;
			for(int i=0;i<len;i++){
				sb.append(f[i]);
				if(i!=len-1){
					sb.append("、");
				}
			}
		}
		textView1.setText(new String(sb));
	}

}
