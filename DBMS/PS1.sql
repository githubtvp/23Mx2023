drop table employee;

create table employee(empno number(4) primary key,
                    fname varchar(50) not null,
                    lname varchar(50) not null,
                    job varchar(15),
                    mgr number(4) constraint fk_1 references employee(empno),
                    dob date CONSTRAINT chk_date CHECK(dob < '01-jan-1975'),
                    hiredate date,
                    salary number(10,2) constraint sal_Chk check(salary between 20000 and 100000),
                    comm number(10,2)
                    );                    
                    