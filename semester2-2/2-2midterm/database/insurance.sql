show databases;
create database insurance;
use insurance;

create table person(
	driver_id varchar(20) primary key,
    name varchar(10),
    address varchar(30)
);

create table car(
	license_plate varchar(20) primary key,
    model varchar(20),
    year int
);

create table accident(
	report_number varchar(20) primary key,
    year int,
    location varchar(20)
);

create table owns(
	driver_id varchar(20),
    license_plate varchar(20),
    primary key(driver_id, license_plate),
    foreign key(driver_id) references person(driver_id),
    foreign key(license_plate) references car(license_plate)
);

create table participated(
	report_number varchar(20),
    license_plate varchar(20),
	driver_id varchar(20),
    damage_amount int,
    primary key(report_number, license_plate),
    foreign key(driver_id) references person(driver_id),
    foreign key(report_number) references accident(report_number),
    foreign key(license_plate) references car(license_plate)
);


insert into person values('2019482', 'John Smith', 'ABC street'), ('2018291', 'Tim Austen', 'GAW street');

insert into car values('ABCD1234', 'K3', 2019), ('AABB2000', 'Avante', 2018);

insert into accident values('AACC1102', 2021, 'BFD street'), ('AAFC2910', 2022, 'ATA street'), ('AR2197', 2022, 'IUI street');

insert into owns values('2019482', 'ABCD1234'), ('2018291', 'AABB2000');

insert into participated values ('AACC1102', 'ABCD1234', '2019482', 10000), ('AAFC2910', 'ABCD1234', '2019482', 8000), 
('AR2197', 'AABB2000', '2018291', 2100);


select count(person.driver_id) from person natural join accident natural join participated where (person.name = 'John Smith');

select * from participated;

update participated set participated.damage_amount = 3000 where participated.license_plate = 'AABB2000' and participated.report_number = 'AR2197';

select * from participated;
