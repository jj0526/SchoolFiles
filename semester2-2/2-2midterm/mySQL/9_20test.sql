show databases;
create database test;
use test;
CREATE TABLE `student`(
	`id` tinyint NOT NULL,
    `name` char(4) NOT NULL,
    `sex` enum('남자', '여자') NOT NULL,
    `address` varchar(50) NOT NULL,
    `birthday` datetime NOT NULL,
    PRIMARY KEY(`id`)
);

show tables;
desc student;

DESCRIBE student;

create table instructor(
ID 			varchar(5) primary key,
name 		varchar(20) not null,
dept_name 	varchar(20),
salary 		numeric(8,2)
);


show tables;