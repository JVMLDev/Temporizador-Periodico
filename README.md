# Atividade 1 - TEMPORIZADOR PERIÓDICO 🔴 🟡 🟢

## Descrição do Projeto
Este projeto implementa um temporizador periódico utilizando a função add_repeating_timer_ms() do PICO SDK. O objetivo é simular um semáforo,alternando entre os sinais vermelhos,amarelo e verde com um tempo de 3 segundos para cada mudança.

⚠️OBS: Ao utilizar o WOKWI o LED acenderá amarelo, Já na Placa BITDOGLAB. O LED que acende no Wokwi como amarelo, na placa acenderá AZUL.
## 👨‍💻 Desenvolvedor

João Vitor Maciel Lima

## 🛠️ Componentes utilizados

#### Microcontrolador: Raspberry Pi Pico W
#### LEDs: 03 LEDs (vermelho, amarelo e verde)
#### Resistores: 03 resistores de 330 Ω

### Requisitos da Implementação 🔴 🟡 🟢
1. O acionamento dos LEDs inicia na cor vermelha, depois muda para amarela e, em seguida, para verde.

2. O temporizador deve ser ajustado para um atraso de 3 segundos (3000 ms) para alternar os sinais.
3. A mudança de estado dos LEDs deve ser implementada dentro da função callback do temporizador, semelhante à repeating_timer_callback() trabalhada em aula.

4. A função principal, dentro do loop while, deve imprimir informações a cada 1 segundo (1000 ms) na porta serial.

5. Utilizar a ferramenta educacional BitDogLab para testar o código com um LED RGB nos pinos GPIO 11, 12 e 13.

### Estrutura do Código

1. #### Configuração dos GPIOs para controle dos LEDs.

2. #### Implementação da função de callback para alternar os LEDs a cada 3 segundos.

3. #### Loop principal que imprime mensagens na porta serial a cada 1 segundo.

4. #### Teste com LED RGB utilizando BitDogLab.