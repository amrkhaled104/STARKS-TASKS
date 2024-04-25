void AddStudents();
void VeiwStudents();
void DeleteStudents();
void DeleteAllStudents();
struct STUDENTS
{
	int ID;
	char Name[100];
	struct STUDENTS *NEXT;
};
