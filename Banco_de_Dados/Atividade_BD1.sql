-- Questão 1
create schema Empresa;

-- Questão 2
create table Funcionario(
cpf char(11) primary key,
nome varchar(100) not null,
salario float default 2000,
data_nascimento date
);

-- Questão 3
Alter table Funcionario add column email varchar(100);

-- Questão 4
create table Departamento (
id int primary key,
nome varchar(50) unique,
gerente char(11),
foreign key (gerente) references Funcionario(cpf)
);


-- Questão 5
alter table Funcionario add constraint chk_salario check (salario>1000);

-- Questão 6 
insert into Funcionario (cpf, nome, salario, data_nascimento, email)
Values ('12345678900', 'Ana Silva', 2500, '1998-05-10', 'ana@email.com'),
('98765432100','Carlos Souza', 3000, '1985-08-15', 'carlos@email.com'),
('45678912300', 'Mariana Lima', 1800, '1992-11-25', 'mariana@email.com');

-- Comando para realizar updates sem erros
set sql_safe_updates = 0;

-- Questão 7  
UPDATE Funcionario SET salario = 4500 WHERE salario = 2500;

-- Questão 8 
DELETE FROM Funcionario WHERE cpf = '12345678900';

-- Questão 9 
INSERT INTO Departamento (id, nome, gerente)
VALUES (2, 'TI', '45678912300');

INSERT INTO Departamento (id, nome, gerente)
VALUES (1, 'Financeiro', '98765432100');

-- Questão 10 
SELECT * FROM Funcionario WHERE salario > 2200;

-- Questão 11 
create table Projeto (
id_projeto int primary key,
nome varchar(100),
local varchar(50),
id_departamento int,
foreign key (id_departamento) references Departamento (id)
);

-- Questão 12

insert into Projeto (id_projeto, nome, local, id_departamento)
Values (1, 'Sistema ERP', 'SÃ£o Paulo', 1),
(2, 'Aplicativo Mobile', 'Rio de Janeiro', 2);

-- Questão 13
SELECT 
    p.nome AS projeto,
    d.nome AS departamento,
    f.nome AS gerente
FROM Projeto p
JOIN Departamento d ON p.id_departamento = d.id
JOIN Funcionario f ON d.gerente = f.cpf;
