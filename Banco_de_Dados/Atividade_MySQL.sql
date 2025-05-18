# Comando para visualizar a tabela
select * from Funcionarios;

# Criando o Banco de Dados
create schema Empresa;
use Empresa;
# Criando a tabela

create table Funcionarios (
cpf int PRIMARY KEY,
pnome varchar(50),
unome varchar(50),
endereco varchar(100),
salario float,
cpf_supervisor int NOT NULL,
dno int
);







