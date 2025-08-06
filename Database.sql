-- إنشاء قاعدة البيانات
CREATE DATABASE UniversityDB;
USE UniversityDB;

-- إنشاء جدول الأقسام
CREATE TABLE Departments (
    DepID INT AUTO_INCREMENT PRIMARY KEY,
    DepName VARCHAR(255) NOT NULL,
    HeadOfDep VARCHAR(255)
);

-- إنشاء جدول الفصول الدراسية
CREATE TABLE Semesters (
    SemesterID INT AUTO_INCREMENT PRIMARY KEY,
    SemesterNumber INT NOT NULL,
    AcademicYear VARCHAR(100) NOT NULL,
    DepID INT,
    FOREIGN KEY (DepID) REFERENCES Departments(DepID)
        ON DELETE CASCADE
        ON UPDATE CASCADE
);

-- إنشاء جدول المواد الدراسية
CREATE TABLE Courses (
    CourseID INT AUTO_INCREMENT PRIMARY KEY,
    CourseName VARCHAR(255) NOT NULL,
    CrediteHours INT NOT NULL,
    DepID INT,
    FOREIGN KEY (DepID) REFERENCES Departments(DepID)
        ON DELETE CASCADE
        ON UPDATE CASCADE
);

-- إنشاء جدول الربط بين الفصول الدراسية والمواد
CREATE TABLE SemesterCourses (
    SemesCourseID INT AUTO_INCREMENT PRIMARY KEY,
    SemesterID INT,
    CourseID INT,
    DepID INT,
    FOREIGN KEY (SemesterID) REFERENCES Semesters(SemesterID)
        ON DELETE CASCADE
        ON UPDATE CASCADE,
    FOREIGN KEY (CourseID) REFERENCES Courses(CourseID)
        ON DELETE CASCADE
        ON UPDATE CASCADE,
    FOREIGN KEY (DepID) REFERENCES Departments(DepID)
        ON DELETE CASCADE
        ON UPDATE CASCADE
);

-- إدخال بيانات تجريبية
INSERT INTO Departments (DepName, HeadOfDep)
VALUES ('علوم الحاسوب', 'حازم. ');

INSERT INTO Semesters (SemesterNumber, AcademicYear, DepID)
VALUES (1, '2024/2025', 1);

INSERT INTO Courses (CourseName, CrediteHours, DepID)
VALUES ('برمجة 1', 3, 1);

INSERT INTO SemesterCourses (SemesterID, CourseID, DepID)
VALUES (1, 1, 1);