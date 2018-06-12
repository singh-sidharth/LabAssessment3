// LabAssessment3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student.h"
#include "Teacher.h"


int main()
{
	Student *student = new Student(21, "Ankush", "Sharma", "9931674219", "Dravidian");
	student->outputIdentity();
	student->outputAge();
	delete student;

	Teacher *teacher = new Teacher(44, "Kayalvzhi", "Jayavel", "8235267895", "Dravidian");
	teacher->outputIdentity();
	teacher->outputAge();
	delete teacher;
    return 0;
}

