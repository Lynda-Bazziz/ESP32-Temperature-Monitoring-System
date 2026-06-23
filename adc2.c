#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_timer.h"
#include "freertos/timers.h"

#include <driver/adc.h>
#include <esp_adc_cal.h>



void tache_adc(void* parametres){
    while (1)// mesurer la temperature en continue
     {
        uint16_t adc1 = 0;
       // for (int i = 0; i < 5; i++)
      //  {
          adc1 = adc1_get_raw(ADC1_CHANNEL_0);//valeur brute
        //  vTaskDelay(pdMS_TO_TICKS(1000)); //10 ms entre chaque lecture
       // }

     //   adc1 /=5; //obtebtion mesure plus stable 
        
                                   //4095 la valeur de 3300 en numerique 
          float  volt =adc1*(3300.0/4095.0); //conversion signale en volt

          float temp = volt / 10.0; //convertion temperature

        printf("\n la temperature est:  %.2f c \n" , temp);// afficher la temp en decimale avec 2 nombres de chiffres apres la virgule
        vTaskDelay(pdMS_TO_TICKS(1000));
        
     }


}


void app_main(void){

  adc1_config_width(ADC_WIDTH_BIT_12);//configuration de l adc (sa resolution sur 12bits donc les valeurs de l,adc varient entre 0et4095)

  adc1_config_channel_atten(ADC1_CHANNEL_0 , ADC_ATTEN_DB_11);//configuration du canal 0 avec attenuation du signal de 11db

  xTaskCreate(tache_adc,"taskadc",2024,NULL,0,NULL);
 
     








}



