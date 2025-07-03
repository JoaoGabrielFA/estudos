INSERT INTO Elemento (id, nome, descricao) VALUES
(1, 'Água', 'Elemento que pode curar e causar dano.'),
(2, 'Terra', 'Elemento de defesa e força bruta.'),
(3, 'Fogo', 'Elemento que causa queimaduras.'),
(4, 'Ar', 'Elemento leve que pode empurrar ou cortar.'),
(5, 'Raio', 'Elemento rápido que paralisa o inimigo.'),
(6, 'Gelo', 'Elemento que causa congelamento e lentidão');

INSERT INTO Passiva (id, nome, efeito) VALUES
(1, 'Regeneração', 'Recupera 5% da vida a cada turno.'),
(2, 'Fúria', 'Aumenta o ataque em 10% ao perder vida.'),
(3, 'Escudo de Pedra', 'Reduz o dano físico recebido em 15%.'),
(4, 'Agilidade Sombria', 'Aumenta a esquiva em 20% durante a noite.'),
(5, 'Mente Fria', 'Resiste a efeitos de controle mental.'),
(6, 'Olhar da Águia', 'Aumenta a chance de acerto crítico em 10%.'),
(7, 'Espinhos Reativos', 'Reflete 10% do dano físico recebido.'),
(8, 'Aura Flamejante', 'Causa 2 de dano de fogo em inimigos próximos a cada turno.'),
(9, 'Determinação', 'Impede a morte uma vez, ficando com 1 de vida.'),
(10, 'Barreira Mágica', 'Absorve 20% do dano mágico recebido.');

INSERT INTO Arma (id, nome, efeito, passiva, elemento, tipo) VALUES
(1, 'Espada Flamejante', 'Causa dano de fogo adicional ao atacar.', 2, 3, 'Espada'),
(2, 'Lança de Gelo', 'Tem chance de congelar o inimigo ao atingir.', 8, 6, 'Lança'),
(3, 'Martelo Terrestre', 'Causa dano em área e empurra o inimigo.', 3, 2, 'Martelo'),
(4, 'Arco Tempestuoso', 'Chance de paralisar o alvo com raios.', 6, 5, 'Arco'),
(5, 'Adaga Sombria', 'Ataques ignoram parte da defesa inimiga.', 4, 4, 'Adaga'),
(6, 'Cajado de Cura', 'Recupera vida ao atacar aliados.', 1, 1, 'Cajado'),
(7, 'Espada de Raio', 'Aumenta a velocidade de ataque.', 7, 5, 'Espada'),
(8, 'Chicote de Vento', 'Ataques têm chance de empurrar o alvo.', 4, 4, 'Chicote'),
(9, 'Machado Infernal', 'Causa queimadura contínua.', 8, 3, 'Machado'),
(10, 'Bastão Cristalino', 'Reduz a velocidade do inimigo ao atacar.', 10, 6, 'Bastão');

INSERT INTO Habilidade (id, nome, efeito, elemento) VALUES
(1, 'Cura Leve', 'Recupera uma pequena quantidade de vida.', 1),
(2, 'Toque Restaurador', 'Remove efeitos negativos de um aliado.', 1),
(3, 'Muralha de Pedra', 'Cria uma barreira que reduz o dano recebido.', 2),
(4, 'Terremoto', 'Causa dano em área e reduz a velocidade dos inimigos.', 2),
(5, 'Explosão Flamejante', 'Causa dano em área aos inimigos próximos.', 3),
(6, 'Chama Persistente', 'Aplica um efeito de queimadura por 3 turnos.', 3),
(7, 'Rajada de Vento', 'Ataque à distância com chance de empurrar.', 4),
(8, 'Corte Aéreo', 'Ataque rápido que ignora armaduras leves.', 4),
(9, 'Trovoada', 'Ataque elétrico com chance de paralisar.', 5),
(10, 'Descarga Elétrica', 'Causa dano em cadeia a inimigos próximos.', 5),
(11, 'Toque Gelado', 'Reduz a velocidade do inimigo.', 6),
(12, 'Lâmina Congelante', 'Causa dano com chance de congelar.', 6),
(13, 'Ataque Rápido', 'Desfere um golpe com chance de agir novamente.', NULL),
(14, 'Defesa Concentrada', 'Aumenta a defesa por 2 turnos.', NULL),
(15, 'Golpe Duplo', 'Ataca duas vezes com dano reduzido.', NULL),
(16, 'Olhar Intimidador', 'Reduz o ataque do inimigo.', NULL),
(17, 'Foco Interior', 'Aumenta a precisão temporariamente.', NULL),
(18, 'Impacto Poderoso', 'Ataque forte com tempo de recarga.', NULL),
(19, 'Grito de Guerra', 'Aumenta o ataque de aliados próximos.', NULL),
(20, 'Retirada Estratégica', 'Recuo tático com recuperação parcial de vida.', NULL);

INSERT INTO Acao (id, nome, descricao) VALUES 
(1, 'Atacar', 'Escolha um inimigo para atacar.'),
(2, 'Defender', 'Defende parte do dano do próximo ataque inimigo.'),
(3, 'Usar item', 'Escolha um item para usar.'),
(4, 'Fugir', 'Tenta escapar da batalha');

INSERT INTO Classe (id, nome, descricao, passiva, tipo_arma) VALUES
(1, 'Espadachim', 'Combatente equilibrado que utiliza espadas com maestria.', 2, 'Espada'),
(2, 'Lanceiro', 'Especialista em ataques de longo alcance com lanças.', 8, 'Lança'),
(3, 'Brutamonte', 'Guerreiro de força bruta que empunha grandes martelos.', 3, 'Martelo'),
(4, 'Arqueiro', 'Atirador ágil e preciso, mestre do combate à distância.', 6, 'Arco'),
(5, 'Assassino', 'Ágil e furtivo, elimina inimigos com golpes rápidos.', 4, 'Adaga'),
(6, 'Sacerdote', 'Personagem de suporte focado em proteção e auxílio.', 1, 'Cajado'),
(7, 'Duelista', 'Lutador veloz e técnico com espada leve.', 7, 'Espada'),
(8, 'Domador', 'Controla o campo de batalha com chicotadas estratégicas.', 4, 'Chicote'),
(9, 'Bárbaro', 'Combatente selvagem que usa machado com grande impacto.', 8, 'Machado'),
(10, 'Místico', 'Usuário de bastão com habilidades mágicas variadas.', 10, 'Bastão');

INSERT INTO Item (id, nome, descricao) VALUES
(1, 'Poção de Vida', 'Recupera uma quantidade moderada de pontos de vida.'),
(2, 'Poção de Energia', 'Restaura parte da energia usada em habilidades.'),
(3, 'Elixir de Cura', 'Remove todos os efeitos negativos do personagem.'),
(4, 'Bomba de Fumaça', 'Permite escapar de batalhas ou diminuir precisão inimiga.'),
(5, 'Pedra de Retorno', 'Teletransporta o personagem para um ponto seguro.'),
(6, 'Livro de Aprendizado', 'Garante experiência extra ao ser utilizado.'),
(7, 'Amuleto de Proteção', 'Reduz o dano recebido por um número limitado de turnos.'),
(8, 'Chave Misteriosa', 'Abre portas ou baús especiais em determinadas áreas.'),
(9, 'Orbe de Visão', 'Revela inimigos ocultos ou áreas escondidas no mapa.'),
(10, 'Tônico de Força', 'Aumenta temporariamente o ataque do personagem.');

INSERT INTO Personagem (id, nome, ataque, vida, classe, arma, habilidade, acao) VALUES
(1, 'Arthus', 75, 500, 1, 1, 13, 1),
(2, 'Elena', 60, 450, 2, 2, 6, 2),
(3, 'Bruto', 90, 700, 3, 3, 15, 3),
(4, 'Lyra', 65, 400, 4, 4, 7, 4),
(5, 'Shade', 80, 350, 5, 5, 12, 1),
(6, 'Mira', 40, 300, 6, 6, 1, 2),
(7, 'Kael', 70, 420, 7, 7, 9, 3),
(8, 'Sylas', 55, 380, 8, 8, 14, 4),
(9, 'Grom', 85, 650, 9, 9, 11, 1),
(10, 'Elara', 50, 370, 10, 10, 20, 2);

SELECT
  p.id AS personagem_id,
  p.nome AS personagem_nome,
  p.ataque,
  p.vida,
  
  c.id AS classe_id,
  c.nome AS classe_nome,
  c.descricao AS classe_descricao,
  c.passiva AS classe_passiva,
  c.tipo_arma AS classe_tipo_arma,
  
  a.id AS arma_id,
  a.nome AS arma_nome,
  a.efeito AS arma_efeito,
  a.passiva AS arma_passiva,
  a.elemento AS arma_elemento,
  a.tipo AS arma_tipo,
  
  h.id AS habilidade_id,
  h.nome AS habilidade_nome,
  h.efeito AS habilidade_efeito,
  h.elemento AS habilidade_elemento,
  
  ac.id AS acao_id,
  ac.nome AS acao_nome,
  ac.descricao AS acao_descricao

FROM Personagem p
LEFT JOIN Classe c ON p.classe = c.id
LEFT JOIN Arma a ON p.arma = a.id
LEFT JOIN Habilidade h ON p.habilidade = h.id
LEFT JOIN Acao ac ON p.acao = ac.id;
