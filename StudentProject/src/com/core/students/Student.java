package com.core.students;

import java.util.Objects;

public class Student {
	
	private String rollNo;
	private String name;
	private Batch batch;
	private String Address;
	private int marks;
	private String email;
	public Student(String rollNo, String name, Batch batch, String address, int marks,String email) {
		
		this.rollNo = rollNo;
		this.name = name;
		this.batch = batch;
		Address = address;
		this.marks = marks;
		this.email =email;
	}
	public String getRollNo() {
		return rollNo;
	}
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public Batch getBatch() {
		return batch;
	}
	
	public String getAddress() {
		return Address;
	}
	public void setAddress(String address) {
		Address = address;
	}
	public int getMarks() {
		return marks;
	}
	public void setMarks(int marks) {
		this.marks = marks;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	@Override
	public String toString() {
		return "Student [rollNo=" + rollNo + ", name=" + name + ", batch=" + batch + ", Address=" + Address + ", marks="
				+ marks + ", email=" + email + "]";
	}
	
	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Student other = (Student) obj;
		return Objects.equals(Address, other.Address) && batch == other.batch && Objects.equals(email, other.email)
				&& marks == other.marks && Objects.equals(name, other.name) && Objects.equals(rollNo, other.rollNo);
	}
	
	
	

}
