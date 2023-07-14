show databases;
create database library;
use library;

#drop database library;

create table member(
	memb_no varchar(10),
	name varchar(20),
    primary key(memb_no)
);

create table book(
	isbn varchar(20),
    title varchar(20),
    authors varchar(20),
    publisher varchar(20),
    primary key(isbn)
);

create table borrowed(
	memb_no varchar(10),
    isbn varchar(20),
    date varchar(15),
    primary key(memb_no, isbn),
    foreign key(memb_no) references member(memb_no),
    foreign key(isbn) references book(isbn)
);

insert into member values('2817-480', 'Jonathan'), ('2941-480', 'Jane'),  ('391-291-41', 'Jen');
insert into book values('134-123-52', 'Little Prince', 'bcd', 'McGraw-Hill'), ('541-513-51', 'Persuasion', 'dkao', 'abc'),
	('214-435-15', 'Oliver Twist', 'osad', 'abc'), ('262-781-13', 'North and South', 'fsiw', 'abc'),
    ('539-019-22', 'Frankenstein', 'fjkx', 'abc'), ('491-282-12', 'Mary Shelley', 'aqoq', 'abc'), ('291-482-60', 'Oi', 'pzxc', 'McGraw-Hill');

insert into borrowed values ('2817-480', '134-123-52', '2019-01-27'), ('2941-480', '541-513-51', '2019-03-12'), ('2941-480','214-435-15', '2019-03-19'),
	('2941-480','262-781-13', '2019-04-01'), ('2941-480', '539-019-22', '2019-04-16'), ('2941-480', '491-282-12', '2019-05-26'),
    ('2817-480', '291-482-60', '2019-01-27'), ('2941-480', '291-482-60', '2020-01-02');

select distinct member.memb_no, member.name from member natural join book natural join borrowed where book.publisher = 'McGraw-Hill' 
and borrowed.isbn = book.isbn and member.memb_no = borrowed.memb_no;




select member.memb_no, member.name from member where memb_no in (select distinct memb_no from borrowed where isbn = ALL(select isbn from book where publisher = 'McGraw-Hill'));



select name from member natural join borrowed natural join book group by memb_no, name, publisher having count(isbn) > 5;



select Total_Borrowed/Total_Members from ( select count(*) as Total_Borrowed from borrowed ) A, ( select count(*) as Total_Members from member ) B;
