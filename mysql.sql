CREATE TABLE users
(
  user_name varchar(20) NOT NULL,
  user_password varchar(20) NOT NULL,
  PRIMARY KEY(user_name)
);

 
CREATE TABLE information
(
  user_name varchar(20) NOT NULL,
  pid varchar(20) NOT NULL,
  pname varchar(20) NOT NULL,
  psex varchar(10),
  pbirthday varchar(20),
  pnumber varchar(20),
  pQQVX varchar(20),
  pemail varchar(20),
  paddress varchar(20)
);
ALTER TABLE information add primary key(user_name,pid);


