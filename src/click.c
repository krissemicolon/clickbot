#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <xdo.h>

#include "include/sleep.h"
#include "include/click.h"

void click(int button, int delay, int duration) {
    xdo_t * x = xdo_new(NULL);

    if(duration == (unsigned long)NULL) {
        for(;;) {
            /* xdo_click_window(x, CURRENTWINDOW, button); */
            xdo_mouse_down(x, CURRENTWINDOW, button);
            xdo_mouse_up(x, CURRENTWINDOW, button);
            msleep(delay);
        }
    } 
    else{
        for(int i = 0; i < duration; i++) {
            /* xdo_click_window(x, CURRENTWINDOW, button); */
            xdo_mouse_down(x, CURRENTWINDOW, button);
            xdo_mouse_up(x, CURRENTWINDOW, button);
            msleep(delay);
        }
    }

    xdo_free(x);
}
