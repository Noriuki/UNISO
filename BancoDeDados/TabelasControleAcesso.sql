create table Pessoa(
    idPessoa int IDENTITY(1,1) NOT NULL,
    nomePessoa varchar(80),
    cpfPessoa varchar(80),
    primary key(idPessoa)
);
create table Chefe(
    idChefe int IDENTITY(1,1) NOT NULL,
    nomeChefe varchar(80),
    idPessoa int not null,
    primary key(idChefe),
    foreign key(idPessoa) references Pessoa(idPessoa)
);

create table Departamento(
    idDepartamento int IDENTITY(1,1) NOT NULL,
    nomeDepartamento varchar(80),
    idChefe int not null,
    primary key(idDepartamento),
    foreign key(idChefe) references Chefe(idChefe)
);

create table Usuario(
    idUsuario int IDENTITY(1,1) not null,
    login varchar(50),
    senha varchar(50),
    idDepartamento int not null,
    idPessoa int not null,
    primary key(idUsuario),
    foreign key(idDepartamento) references Departamento(idDepartamento),
    foreign key(idPessoa) references Pessoa(idPessoa)
);
-- ============================================================================
create table Permissao(
    idPermissao int IDENTITY(1,1) not null,
    nomePermissao varchar(50) not null,
    primary key(idPermissao)
);

create table Funcionalidade(
    idFuncionalidade int IDENTITY(1,1) not null,
    nomeFuncionalidade varchar(50) not null,
    primary key(idFuncionalidade)
);

create table Modulo(
    idModulo int IDENTITY(1,1) not null,
    nomeModulo varchar(50) not null,
    primary key(idModulo)
);

create table Acesso(
    idAcesso int IDENTITY(1,1) not null,
    idUsuario int not null,
    dt_acesso Date not null,
    ipAcesso varchar(50) not null,
    primary key(idAcesso),
    foreign key(idUsuario) references Usuario(idUsuario)
);
--==============================================================================
create Table ModuloFuncionalidade(
    idFuncionalidade int not null,
    idModulo int not null,
    primary key(idFuncionalidade, idModulo),
    foreign key(idFuncionalidade) references Funcionalidade(idFuncionalidade),
    foreign key(idModulo) references Modulo(idModulo)
);

create table UsuarioPermissao(
    idUsuario int not null,
    idPermissao int not null,
    primary key(idUsuario, idPermissao),
    foreign key(idUsuario) references Usuario(idUsuario),
    foreign key(idPermissao) references Permissao(idPermissao)
);

create table FuncionalidadePermissao(
    idFuncionalidade int not null,
    idPermissao int not null,
    primary key(idFuncionalidade, idPermissao),
    foreign key(idFuncionalidade) references Funcionalidade(idFuncionalidade),
    foreign key(idPermissao) references Permissao(idPermissao)
);  
