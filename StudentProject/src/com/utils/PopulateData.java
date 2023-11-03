package com.utils;

import java.util.HashMap;
import java.util.Map;

import com.core.students.Student;
import com.core.students.*;
public class PopulateData {

	public static Map<Integer,Student> populateStudent() {
		Map<Integer,Student> students = new HashMap<>();
		//Student(String rollNo, String name, Batch batch, String address, int marks,String email) {
		students.put(1,new Student("101","Rama",Batch.DAC,"IACSD apartment",99,"rama@gamil.com"));
		students.put(1,new Student("102","Rahul",Batch.DAC,"KRUSHNAI apartment",79,"RAHUL@gamil.com"));
		students.put(1,new Student("103","Ramu",Batch.DITISS,"SHIVALAY apartment",19,"ramU@gamil.com"));
		students.put(1,new Student("104","Revati",Batch.DBDA,"rama apartment",95,"RAVATI@gamil.com"));
		students.put(1,new Student("105","rhikiskesh",Batch.DITISS,"SHREERAM apartment",92,"r122@gamil.com"));
		
		
		return students; 
	}
	
}
