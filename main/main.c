#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/gpio.h"

#define bombPin 2
#define dhtPin 4



void init_hw(){
    gpio_set_direction(bombPin, GPIO_MODE_OUTPUT);
    gpio_set_direction(dhtPin, GPIO_MODE_INPUT);
    gpio_pad_select_gpio(bombPin);
    gpio_pad_select_gpio(dhtPin);
}

void app_main(void)
{

}