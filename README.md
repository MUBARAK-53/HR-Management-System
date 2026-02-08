# HR-Management-System
 C++ OOP Multilevel Inheritance HR System
🚀 HR Management System
C++ OOP Console Application | Multilevel Inheritance Project

✨ Features
✅ Multilevel Inheritance: company → employee → department

✅ Menu-Driven Interface: 7 professional options

✅ Complete Data Flow: Input → Store → Display across inheritance levels

✅ Production-Ready Code: Clean OOP structure + error handling

✅ Real-World HR Model: Company employs departments with roles

📋 Menu Options
text
1. ENTER COMPANY DETAILS
2. ENTER EMPLOYEE DETAILS  
3. ENTER DEPARTMENT DETAILS
4. DISPLAY COMPANY DETAILS
5. DISPLAY EMPLOYEE DETAILS
6. DISPLAY ALL DETAILS     ← Shows complete hierarchy!
7. EXIT
🎮 Sample Demo
text

=== HR MANAGEMENT SYSTEM ===
1. ENTER COMPANY DETAILS
ENTER CHOICE: 1

ENTER NAME OF COMPANY: TechCorp

ENTER DATE OF JOINING: 2025


ENTER CHOICE: 2  

ENTER YOUR NAME: Alice

ENTER YOUR ID: 101

ENTER YOUR SALARY: 65000


ENTER CHOICE: 6

NAME OF COMPANY: TechCorp

DATE OF JOINING: 2025

EMPLOYEE NAME: Alice

EMPLOYEE ID: 101

EMPLOYEE SALARY: 65000

DEPARTMENT NAME: Engineering

YOUR ROLE: SeniorDev

🏗️ Class Hierarchy (UML)
text
company (name, date)
    ↓ public inheritance
employee (salary, Emp_name, EMP_id) 
    ↓ public inheritance
department (department_name, role)
🔧 Tech Stack
text
Language: C++17
Concepts: OOP | Multilevel Inheritance | Classes | Access Specifiers
STL: string | iostream | cstdlib
Tools: g++ compiler | VS Code | Git/GitHub
🚀 Build & Run
bash
# Clone repository
git clone https://github.com/MUBARAK-53/HR-Management-System.git

cd HR-Management-System

# Compile
g++ main.cpp -o hr_system

# Run
./hr_system    # Linux/Mac

hr_system.exe  # Windows

📁 File Structure
text
HR-Management-System/
├── main.cpp     ← Complete working application
├── README.md    ← This file
└── docs/        ← UML diagrams, screenshots (future)

🎓 Learning Outcomes Demonstrated
Multilevel Inheritance (3-level chain)

Access Specifiers (public/protected)

Constructor Chaining (automatic inheritance calls)

Menu-Driven Programs (do-while + switch)

Object Persistence (data survives menu loops)

🔮 Future Enhancements (Planned)
text

[ ] Multiple employees (vector<department>)

[ ] File I/O (save/load employees.txt)

[ ] Search by ID/Name

[ ] Bonus calculator (experience-based)

[ ] Delete employee

[ ] GitHub Actions CI/CD

🏆 Project Status

text
✅ 100% Working | Production-Ready

✅ Perfect OOP Implementation

✅ GitHub Deployed

⏳ Multiple Employee Support (Next)


Author: [MUBARAK NAIKWADE] 
| Semester: Computer Science Engineering

Skills Demonstrated: Multilevel Inheritance | Professional Console Apps

"Every department employee carries company + personal + role information"
Perfect real-world HR hierarchy model!

