create database Empresa;
use Empresa;

create table Funcionario (
cpf varchar(15) primary key,
pnome varchar(60),
unome varchar(30),
endereco varchar(80),
sexo char(1),
salario real,
supervisor_cpf varchar(15),
departamento_dnumero int,
foreign key (supervisor_cpf) references Funcionario(cpf)
);

alter table Funcionario add constraint fk_categorie foreign key (departamento_dnumero) references Departamento(dnumero);

create table Departamento (
dnumero int primary key,
dnome varchar(30),
cpf_gerente varchar(15),
foreign key (cpf_gerente) references Funcionario(cpf)
); 

create table Dependente(
f_cpf varchar(15),
cpf varchar(15),
nome_dependente varchar(60),
parentesco varchar(20),
foreign key (f_cpf) references Funcionario (cpf)
);



create table Projeto (
pnumero int,
pjnome varchar(30),
dnumero int,
foreign key (dnumero) references Departamento(dnumero)
);

CREATE INDEX idx_pnumero ON projeto (pnumero);

create table Trabalha_Em (
funcionario_cpf varchar(15),
projeto_pnumero int,
foreign key (funcionario_cpf) references Funcionario (cpf),
foreign key (projeto_pnumero) references Projeto (pnumero)
);


-------------------------------------------------------------------------
-- 1
select pnome, unome 
from Funcionario; 

-- 2
select *
 from funcionario
 where salario >= 30000.0;

-- 3
select * from trabalha_em;

-- 4
select dnome
 from departamento
 order by  dnome asc;

-- 5
select f.pnome, f.endereco
 from Funcionario as f 
 inner join departamento as d on f.departamento_dnumero = d.dnumero 
 where d.dnome = 'Pesquisa';

-- 6
select f.pnome as funcionario, s.pnome as supervisor 
from Funcionario as f left join funcionario as s on f.supervisor_cpf = s.cpf; 

-- 7 
select count(distinct salario) as salarios_diferentes
from funcionario;

-- 8 
select min(salario) as min_salario, max(salario) as max_salario
from funcionario;

-- 9 
select d.dnumero as numero_departamento,
count(f.cpf) as total_funcionarios,
avg(f.salario) as media_salario
from departamento as d
left join funcionario as f on d.dnumero = f.departamento_dnumero
group by d.dnumero;

-- 10
select p.pjnome
from Projeto as p 
join trabalha_em as te on p.pnumero = te.projeto_pnumero
group by p.pnumero, p.pjnome
having count(te.funcionario_cpf) > 2;

-- 11
select pnome
from funcionario as f
where (
select count(*)
from dependente as d
where d.f_cpf = f.cpf) >= 2

-- 12








