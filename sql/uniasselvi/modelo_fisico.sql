CREATE SCHEMA rpg_exemplo;

USE rpg_exemplo;

CREATE TABLE Elemento (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    descricao TEXT
);

CREATE TABLE Passiva (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    efeito TEXT
);

CREATE TABLE Arma (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    efeito TEXT,
    passiva INT,
    elemento INT,
    tipo VARCHAR(50),
    FOREIGN KEY (passiva) REFERENCES Passiva(id),
    FOREIGN KEY (elemento) REFERENCES Elemento(id)
);

CREATE TABLE Habilidade (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    efeito TEXT,
    elemento INT,
    FOREIGN KEY (elemento) REFERENCES Elemento(id)
);

CREATE TABLE Acao (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    descricao TEXT
);

CREATE TABLE Classe (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    descricao TEXT,
    passiva INT,
    tipo_arma VARCHAR(50),
    FOREIGN KEY (passiva) REFERENCES Passiva(id)
);

CREATE TABLE Item (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    descricao TEXT
);

CREATE TABLE Personagem (
    id INT PRIMARY KEY,
    nome VARCHAR(100),
    ataque INT,
    vida INT,
    classe INT,
    arma INT,
    habilidade INT,
    acao INT,
    FOREIGN KEY (classe) REFERENCES Classe(id),
    FOREIGN KEY (arma) REFERENCES Arma(id),
    FOREIGN KEY (habilidade) REFERENCES Habilidade(id),
    FOREIGN KEY (acao) REFERENCES Acao(id)
);
