show databases;
create database test1;
use test1;

create table department(
	dept_name varchar(20),
	building varchar(15),
    budget numeric(12,2),
    primary key(dept_name)
);

desc department;

create table instructor(
	ID varchar(5),
    name varchar(20) not null,
    dept_name varchar(20),
    salary numeric(8,2),
    primary key(ID),
    foreign key(dept_name) 
				references department(dept_name)
);

create table student(
	ID varchar(5) primary key,
    name varchar(20) not null,
    dept_name varchar(20)
				references department(dept_name),
	tot_cred numeric(3, 0)
);

create table course(
	course_id varchar(7) primary key,
    title varchar(50),
    dept_name varchar(20)
				references department(dept_name),
	credits numeric(2,0)

);

create table takes(
	ID varchar(5),
    course_id varchar(8),
    sec_id varchar(8),
    semester varchar(6),
    year numeric(4,0),
    grade varchar(2),
    primary key(ID, course_id, sec_id, semester, year),
    foreign key (ID) references student (ID),
    foreign key (course_id, sec_id, semester, year)
					references section(course_id, sec_id, semester, year)
);


create table section(
	course_id varchar(8),
    sec_id varchar(8),
    semester varchar(6),
    year numeric(4,0),
    building varchar(8),
    room_no int,
    time_slot_id int,
	primary key (course_id, sec_id, semester, year),
    foreign key (building, room_no) references classroom(building, room_no),
    foreign key (time_slot_id) references time_slot(time_slot_id)
);

create table classroom(
	building varchar(8),
    room_no int,
    capacity int
    primary key(building, room_no)
);

create table teaches(
	ID varchar(5),
    course_id varchar(8),
    sec_id varchar(8),
    semester varchar(6),
    year numeric(4,0),
    primary key(ID, course_id, sec_id, semester, year),
    foreign key(course_id, sec_id, semester, year)
			references section(course_id, sec_id, semester, year)
);

create table prereq(
	course_id varchar(7),
    prereq_id varchar(50),
    primary key(course_id, prereq_id),
    foreign key(course_id)
		references course(course_id),
	foreign key(prereq_id)
		references course(course_id)

);

create table advisor(
	s_id varchar(5),
    i_id varchar(5),
    primary key(s_id),
    foreign key(i_id)
		references instructor(ID),
	foreign key(s_id)
		references student(ID)
);

create table time_slot(
	time_slot_id varchar(5),
    day int,
    start_time varchar(10),
    end_time varchar(10),    
    primary key(time_slot_id, day, start_time)

);

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
desc time_slot;


#desc student
#insert into student values ('3003', 'Green', 'Finance', null)

#select * from student;
#select * from course;


        
        
        