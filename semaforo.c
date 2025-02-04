#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"

#define LED_PIN_VERMELHO 13
#define LED_PIN_AMARELO 12
#define LED_PIN_VERDE 11

#define INTERVALO_MS 3000

static volatile uint8_t counter = 0;

void LED_AMARELO(){
    gpio_set_dir(LED_PIN_VERMELHO,GPIO_OUT);
    gpio_set_dir(LED_PIN_VERDE, GPIO_OUT);

    gpio_put(LED_PIN_VERDE, 1);
    gpio_put(LED_PIN_VERMELHO, 1);

}
static bool time_semaphore(struct repeating_timer *_);
void init_led();

int main()
{
    stdio_init_all();

    init_led();  // chamada da função init_led

    struct repeating_timer timer;
    add_repeating_timer_ms(INTERVALO_MS, time_semaphore, NULL, &timer);

    while (true)
    {
        printf("Hello, World!\n");
        sleep_ms(1000);
    }
}

void init_led()
{
    gpio_init(LED_PIN_VERMELHO);
    gpio_set_dir(LED_PIN_VERMELHO, GPIO_OUT);
    gpio_put(LED_PIN_VERMELHO, 0);

    gpio_init(LED_PIN_AMARELO);
    gpio_set_dir(LED_PIN_AMARELO, GPIO_OUT);
    gpio_put(LED_PIN_AMARELO, 0);

    gpio_init(LED_PIN_VERDE);
    gpio_set_dir(LED_PIN_VERDE, GPIO_OUT);
    gpio_put(LED_PIN_VERDE, 0);
}

static bool time_semaphore(struct repeating_timer *_)
{
    gpio_put(LED_PIN_VERMELHO, counter == 0);
    gpio_put(LED_PIN_AMARELO, counter == 1);
    gpio_put(LED_PIN_VERDE, counter == 2);

    counter = (counter + 1) % 3;

    return true;
}