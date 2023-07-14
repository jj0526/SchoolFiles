show databases;
create database university2;
use university2;
create table department (
dept_name varchar(10) primary key, 
building varchar(10),
budget int );

create table instructor (
ID int, 
name varchar(20) not null,
dept_name varchar(10),
salary integer,
primary key(ID), 
foreign key(dept_name) references department(dept_name)
);

create table student(
ID int primary key, 
name varchar(10), 
dept_name varchar(10) references department(dept_name), 
tot_cred int );


alter table instructor add foreign key (dept_name) 
references department(dept_name);
alter table student add foreign key (dept_name) 
references department (dept_name);

create table course (
course_id varchar(10) primary key,
title varchar(50), 
dept_name varchar(10),
credits numeric(2, 1),
foreign key(dept_name) references department(dept_name));


create table advisor (
s_id int primary key,
i_id int, 
foreign key (s_id) references student(ID),
foreign key (i_id) references instructor(ID)
);

create table prereq(
course_id varchar(10),
prereq_id varchar(10),
primary key (course_id, prereq_id),
foreign key(prereq_id) 
references course(course_id),
foreign key(course_id) 
references course(course_id)
);
#desc prereq;

#drop table classroom;
create table classroom(
building varchar(10), 
room_no varchar(10),
capacity int, 
primary key(building, room_no));

#desc course;
create table section(
course_id varchar(10),
sec_id int, 
semester varchar(20),
year numeric (4,0),
building varchar(10),
room_no varchar(10),
time_slot_id varchar(4),
primary key(course_id, sec_id, semester, year),
foreign key (building, room_no) 
references classroom(building, room_no)
);
#drop table section;
#desc student;

create table takes(
ID int,
course_id varchar(10),
sec_id int, 
semester varchar(20),
year numeric (4,0),
grade varchar(2),
primary key (ID, course_id, sec_id, semester, year),
foreign key(ID) references student (ID),
foreign key (course_id, sec_id, semester, year) 
references section(course_id, sec_id, semester, year)
);
#desc instructor;
#drop table takes;

create table teaches (
ID int,
course_id varchar(10),
sec_id int, 
semester varchar(20),
year numeric (4,0),
primary key(ID, course_id, sec_id, semester, year),
foreign key (ID) references instructor(ID),
foreign key (course_id, sec_id, semester, year) 
references section(course_id, sec_id, semester, year)
);

#desc department;

insert into department values
("Comp. Sci", "Taylor", 100000);

insert into department values
('Elec. Eng.', 'Taylor', 85000),
('Finance', 'Painter', 120000),
('History', 'Painter', 50000),
('Music', 'Packard', 80000),
('Physics', 'Watson', 70000),
('Philosophy', 'Ause', 70000);

#select * from department;

insert into instructor values 
(10101, 'Srinivasan', 'Comp. Sci' , 65000);
select * from instructor;
insert into instructor values
(12121, 'Wu', 'Finance', 90000),
(15151, 'Mozart', 'Music', 40000),
(22222, 'Einstein',  'Physics', 95000),
(32343, 'El Said', 'History', 60000),
(33456, 'Gold', 'Physics', 87000),
(45565, 'Katz', 'Comp. Sci', 75000);

insert into student values
(00128, 'Zhang', 'Comp. Sci', 102),
(12345, 'Choi', 'Comp. Sci', 32),
(19991, 'Brandt', 'History', 80),
(23121, 'Chavez', 'Finance', 110);
select * from student;

insert into course values
('CS-101', 'Database', 'Comp. Sci', 4),
('CS-190', 'Programming', 'Comp. Sci', 4),
('CS-315', 'Robotics', 'Comp. Sci', 4),
('CS-347', 'Algorithm', 'Comp. Sci', 4),
('FIN-201', 'investment', 'Finance', 4),
('MU-199', 'Music video', 'Music', 4),
('PHY-101', 'Physics principles', 'Physics', 4),
('HIS-351', 'history of korea', 'History', 4);

insert into classroom values
('IT', 412, 200),
('IT', 413, 100),
('IT', 415,500),
('FIN', 100, 500),
('MU', 122, 100),
('Painter', 132, 100);

insert into section values
('CS-101', 1, 'Spring', 2016, 'IT', 412, 'E'),
('CS-101', 1, 'Spring', 2017, 'IT', 412, 'E'),
('CS-101', 1, 'Fall', 2017, 'IT', 412, 'E'),
('CS-190', 1, 'Spring', 2009, 'IT', 413, 'E'),
('CS-190', 2, 'Spring', 2009, 'IT', 413, 'A'),
('CS-315', 1, 'Spring', 2021, 'IT', 413, 'A'),
('CS-347', 1, 'Fall', 2016, 'IT', 415, 'B'),
('FIN-201', 1, 'Summer', 2018, 'FIN', 100, 'C'),
('MU-199', 1, 'Spring', 2021, 'MU', 122, 'C'),
('HIS-351', 1, 'Spring', 2010, 'Painter', 132, 'C');


insert into prereq values
('CS-190', 'CS-101'), ('CS-315', 'CS-101'), ('CS-347', 'CS-101'), 
('FIN-201', 'FIN-201'), ('MU-199', 'MU-199'), ('CS-101', 'CS-101');

insert into takes values 
(00128, 'CS-101', 1, 'Fall', 2017, 'A'), 
(00128, 'CS-347', 1, 'Fall', 2016, 'A-'), 
(12345, 'CS-101', 1, 'Fall', 2017, 'C'), 
(12345, 'CS-190', 2, 'Spring', 2009, 'A'), 
(12345, 'CS-315', 1, 'Spring', 2021, 'A'), 
(12345, 'CS-347', 1, 'Fall', 2016, 'A'),
(19991, 'HIS-351', 1, 'Spring', 2010, 'B'), 
(23121, 'FIN-201', 1, 'Summer', 2018, 'C+');


insert into advisor values(00128, 45565), (12345, 45565), (19991, 32343), (23121, 12121);

insert into teaches values(45565, 'CS-101', 1, 'Spring', 2016), (45565, 'CS-101', 1, 'Spring', 2017), 
(45565, 'CS-101', 1, 'Fall', 2017), (45565, 'CS-190', 1, 'Spring', 2009), (45565, 'CS-190', 2, 'Spring', 2009), 
(45565, 'CS-315', 1, 'Spring', 2021), (45565, 'CS-347', 1, 'Fall', 2016), (12121, 'FIN-201', 1, 'Summer', 2018),
(15151, 'MU-199', 1, 'Spring', 2021), (32343, 'HIS-351', 1, 'Spring', 2010); 




select * from department;
select * from instructor;
select * from student;
select * from course;
select * from takes;
select * from section;
select * from classroom;
select * from teaches;
select * from prereq;
select * from advisor;

desc department;
desc instructor;
desc student;
desc course;
desc takes;
desc section;
desc classroom;
desc teaches;
desc prereq;
desc advisor;


select distinct student.ID, student.name from student natural join takes natural join course where course.dept_name = 'Comp. Sci';

select distinct student.ID, student.name from student where (student.ID, student.name) not in (select distinct student.ID, student.name from student natural join takes natural join course where takes.year <2017);

select distinct instructor.dept_name, max(instructor.salary) from instructor group by dept_name;

#select instructor.dept_name, min(maxsalary) from (SELECT instructor.dept_name, max(salary) as maxsalary from instructor group by dept_name);

select d2.dept_name,d2.budget from department d1,department d2 where d1.dept_name='philosophy' and d2.budget>d1.budget order by d2.dept_name desc;

select distinct A.course_id, A.id from (select ID, course_id, count(course_id) as taken_count from takes group by ID,course_id) as A where A.taken_count >= 3 ORDER BY A.course_id;

select instructor.name, instructor.id from instructor,teaches,course where instructor.id = teaches.ID and course.course_id = teaches.course_id and instructor.dept_name = course.Dept_name group by instructor.name;





