/* System headers. */
#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/stat.h>
#include <mqueue.h>
#include <errno.h>
#include <unistd.h>

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "croutine.h"

void vApplicationIdleHook() {
    printf("IDLING\n");
}

static void workerTask(void *pvParameters){

    while(1){
        printf("working...\n");
    }

}

int main( void ) {

    xTaskCreate(
            workerTask, 
            "Worker", 
            configMINIMAL_STACK_SIZE*10,
            NULL,
            tskIDLE_PRIORITY, 
            NULL
    );

	vTaskStartScheduler();

	return 1;
}

