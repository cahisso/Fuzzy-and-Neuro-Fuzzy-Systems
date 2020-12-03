# Fuzzy-and-Neuro-Fuzzy-Systems

Saudações!

Neste repositorio estarei a partilhar o meu trabalho de Mestrado em Engenharia Informática feito na Facldade de Ciências e Tecnologias da Universidade de Coimbra na cadeira de Aprendizagem Computacional.

Farei inicialmente uma breve introdução do que se trata e em seguida a estrutura como foi organizado o trabalho:

ATT: O codigo partilhado foi desenvolvido usando o MathLab.

Introdução:
	Os sistemas neuro-fuzzy são sistemas semelhantes aos utilizados no treino de redes neuronais com a diferença que os parâmetros da função de associação são ajustados utilizando métodos de aprendizagem neuro-adaptativos (mamdani e sugeno).
	
	Os sistemas que utilizam uma lógica diferente da de fuzzy, não funcionam com uma certa precisão quando se trata de avaliar todos os valores pertencentes a um determinado intervalo. O que não se verifica nos sistemas que usam a lógica de fuzzy.
	
	Actualmente esta técnica tem sido muito implementada nos sistemas em que a precisão é fundamental. Quanto aos sistemas que implementam esta abordagem encontram-se também os controladores, que foram vistos ao longo do trabalho.
	
	No presente trabalho foi nos solicitado que desenvolvêssemos um sistema de controlo difuso utilizando os métodos de aprendizagem neuro-adaptativos (especificamente mamdani e sugeno de forma fixa e dinâmica) com a finalidade de simular a acção de um controlador num ambiente hipotético. O controlador deve ser capaz de reagir face às mudanças no ambiente ou perturbações com base em regras pré-estabelecidas. 

	Foram no entanto desenvolvidos vários controladores com base nas variações dos seus possíveis parâmetros, tais como: número de regras (9 e 25), função de defuzzificação e as inferências (mamdani e sugeno).
	
	O trabalho encontra-se dividido em duas partes A e B. 
	Na parte ​A ​​construi-se os modelos fuzzy usando as inferências mamdani e sugeno com 25 regras e 9 regras respetivamente para cada modelo. Já a parte B,​​ a que designamos dinâmica, o sistema gera as regras por meio de um algoritmo de aprendizagem.

1.1. Objetivo

	O presente trabalho tem como objetivo modelar um sistema de controlo utilizando a abordagem fuzzy que seja capaz de aprender e aproximar-se dos valores gerados por uma função de transferências de forma adaptativa, levando em conta as perturbações que podem ocorrer no ambiente.

1.2. Tarefas

	O presente trabalho encontra dividido em duas partes, A e B. Para a concretização do objetivo acima enunciado foram pré estabelecidas as seguintes tarefas para cada parte:

❏ Parte A

	1. Revisão bibliográfica (enunciado, aulas lecionadas e enciclopédia)
	2. Definição das regras
	3. Modelação dos controladores
	4. Modelação do sistema de controlo no simulink
	5. Parametrização do sistema de controlo
	6. Testes
	7. Reportar os resultados

❏ Parte B

	1. Determinação dos valores para a criação do modelo indicado
	2. Criação da matriz de Clustering
	3. Desenvolvimento da parte relativa ao treino e teste
	4. Cálculo do valor de mse
	5. Cálculo do valor de Sample Time e criação dos respectivos modelos pedidos
	6. Testes
	7. Reportar os resultados