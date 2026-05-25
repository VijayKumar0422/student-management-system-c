
#  Student Management System in C

A simple **Student Management System** built using **C Language**, **Structure**, and **File Handling**.

This project performs basic student record operations like:

- ➕ Add Student
- 📋 Display Students
- 🔍 Search Student
- ❌ Delete Student

---

#  Project Structure

```bash
student-management-system-c/

 student_management_system.c
 student.txt
 README.md
```

---

#  Features

 Menu Driven Program  
 Structure Used  
 File Handling Used  
 Binary File Storage  
 Search by Roll Number  
 Delete Record  
 Beginner Friendly Project  

---

#  Technologies Used

| Technology | Purpose |
|---|---|
| C Language | Main Programming Language |
| Structure | Store Student Data |
| File Handling | Save Records Permanently |

---

#  Concepts Used

- Structure
- Functions
- File Handling
- Loop
- Switch Case
- Conditional Statements
- CRUD Operations

---

#  Student Structure

```c
struct student
{
    int roll;
    char name[50];
    float marks;
};
```

---

#  Functions Used

| Function | Purpose |
|---|---|
| addStudent() | Add new student |
| displayStudent() | Display all students |
| searchStudent() | Search student by roll |
| deleteStudent() | Delete student record |

---

#  How To Run

## Step 1 → Compile Program

```bash
gcc student_management_system.c -o student
```

---

## Step 2 → Run Program

```bash
./student
```

For Windows:

```bash
student.exe
```

---

#  Program Menu

```text
--- Student Management System ---

1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Exit
```

---

#  Example Output

## Add Student

```text
Enter Roll Number: 101
Enter Name: Vijay
Enter Marks: 89.5

Student Added Successfully
```

---

## Display Students

```text
Roll : 101
Name : Vijay
Marks : 89.50
```

---

#  File Handling

This project stores records inside:

```text
student.txt
```

Functions used:

```c
fopen()
fclose()
fwrite()
fread()
remove()
rename()
```

---

#  CRUD Operations

| Operation | Description |
|---|---|
| Create | Add Student |
| Read | Display Student |
| Search | Find Student |
| Delete | Remove Student |

---

#  Learning Outcome

After completing this project, you will learn:

- How Structure works in C
- How File Handling works
- How to create Menu Driven Programs
- How CRUD Operations work
- Basic Project Development in C

---

#  Future Improvements

- Update Student Record
- Password Protection
- Sorting Records
- Attendance System
- GUI Version

---

#  Author

**VIJAY**

---

#  GitHub

If you like this project, give it a ⭐ on GitHub.
=======
# student-management-system-c
Student Management System using C language with Structure and File Handling.

