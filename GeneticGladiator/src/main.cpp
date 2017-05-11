#include "main.h"
#include "Constants.h"

#include <allegro.h>
#include <allegro_font.h>
#include <allegro_ttf.h>
#include <allegro_native_dialog.h>
#include <allegro_primitives.h>
#include <allegro_image.h>
#include <iostream>

#include "Button.h"
#include "Gladiator.h"



//variables globales
enum STATE{START, FIGHT, RUN};


void ChangeState(int &state, int newState);


int main (void)
{

    bool done = false;
    bool redraw = true;
    int state = -1;






    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_EVENT_QUEUE *eventQueue = NULL;
    ALLEGRO_TIMER *timer = NULL;
    ALLEGRO_BITMAP *startimage = NULL;
    ALLEGRO_BITMAP *dangerimage = NULL;
    ALLEGRO_BITMAP *fightimage = NULL;
    ALLEGRO_BITMAP *gladiatorimage = NULL;
    ALLEGRO_BITMAP *btnstartimg;
    ALLEGRO_BITMAP *btnstartimgpress;



    if(!al_init())              // initialize Allegro
    {
        return -1;
    }


    display = al_create_display(WIDTH, HEIGHT);

    if(!display)
    {
        return -1;
    }


    al_init_primitives_addon();
    al_install_keyboard();
    al_install_mouse();
    al_init_image_addon();
    al_init_ttf_addon();
    al_init_font_addon();



    startimage = al_load_bitmap("startBG.png");
    dangerimage = al_load_bitmap("dangerZBG.png");
    fightimage = al_load_bitmap("fightBG.png");

    gladiatorimage = al_load_bitmap("gladiator.png");

    btnstartimg = al_load_bitmap("btnstart.png");
    btnstartimgpress = al_load_bitmap("btnstartpress.png");



    Gladiator gladiator("assd", gladiatorimage);



    eventQueue = al_create_event_queue();

    timer = al_create_timer(1.0/FPS);


    ChangeState(state, START);



    //Button* btnstart = new Button(200,200,btnstartimg,btnstartimgpress);
    Button btnstart(250,250,btnstartimg,btnstartimgpress);



    al_register_event_source(eventQueue, al_get_timer_event_source(timer));
    al_register_event_source(eventQueue, al_get_keyboard_event_source());
    al_register_event_source(eventQueue, al_get_display_event_source(display));
    al_register_event_source(eventQueue, al_get_mouse_event_source());


    al_start_timer(timer);

    while(!done)
    {
        ALLEGRO_EVENT ev;
        al_wait_for_event(eventQueue, &ev);


        if(ev.type == ALLEGRO_EVENT_TIMER)
        {
            redraw = true;



            if (state==START)
            {

            }

            else if(state == RUN)
            {

            }

            else if(state == FIGHT)
            {

            }


        }


        else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
        {
            done = true;
        }



        if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
        {
            switch(ev.keyboard.keycode)
            {
            case ALLEGRO_KEY_UP:

                break;
            }

        }

        else if(ev.type == ALLEGRO_EVENT_KEY_UP)
        {
            if(ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
                done = true;
        }


        else if(ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
        {
             if(ev.mouse.button &1)
             {

                btnstart.CollidePress(ev.mouse.x, ev.mouse.y);
                ChangeState(state, RUN);

             }
        }
        else if(ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP)
        {
            if(ev.mouse.button &1)
             {
                btnstart.CollidePress(ev.mouse.x, ev.mouse.y);
             }
        }

        if(redraw && al_is_event_queue_empty(eventQueue))
        {
            redraw = false;


            if(state == START)
            {
                al_draw_bitmap(startimage,0,0,0);
                btnstart.Draw();

            }
            if(state == RUN)
            {
                al_draw_bitmap(dangerimage,0,0,0);
                al_draw_bitmap(gladiatorimage,300,300,0);
                gladiator.Draw();

            }




            //al_draw_filled_rectangle(mousex,mousey,mousex+30,mousey+30, al_map_rgb(255,0,0));
            al_flip_display();
            al_clear_to_color(al_map_rgb(0,0,0));


        }





    }





    al_destroy_bitmap(startimage);
    al_destroy_bitmap(btnstartimg);
    al_destroy_bitmap(btnstartimgpress);
    al_destroy_event_queue(eventQueue);
    al_destroy_timer(timer);
    al_destroy_display(display);



    return 0;
}



void ChangeState(int &state, int newState)
{
    if (state==START)
    {

    }
    else if(state == RUN)
    {

    }
    else if(state == FIGHT)
    {

    }

    state = newState;

    if (state==START)
    {

    }
    else if(state == RUN)
    {

    }
    else if(state == FIGHT)
    {

    }
}


