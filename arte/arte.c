#include <cairo.h>

int main() {
        cairo_surface_t *surface =
            cairo_image_surface_create (CAIRO_FORMAT_ARGB32, 480, 480);
        cairo_t *cr =
            cairo_create (surface);
        cairo_set_source_rgb (cr, 1.0, 1.0, 1.0);
        cairo_rectangle (cr, 0., 0.0, 480.0, 480.0);
        cairo_fill (cr);

        cairo_set_source_rgb (cr, 0.0, 0.0, 0.0);

       /* int x, y, i;
        x= 50;
        y= 50;
        for( i= 0; i<10; i++){

            cairo_rectangle (cr, x, y, 150.0, 150.0);
            x=x+20;
            y=y+20;
        }*/
        /*int x, i, z;
        x= 50;
        
        z= 300.0;
        for( i= 0; i<5; i++){

            cairo_rectangle (cr, x, x, z, z);
            x=x+20;
            z=z-40;
        }*/

        /*cairo_move_to(cr, 50.0, 50.0);
        int x = 100;
        int y =250;
        int i;
        for(i=0; i<6; i++){
            cairo_line_to(cr, x, y);
            x+= 50;
            if(i%2==0){
                y = 50;
            } else{
                y = 250;
            }
        }*\
        /*cairo_line_to(cr, 100.0, 250.0);
        cairo_line_to(cr, 150.0, 50.0);
        cairo_line_to(cr, 200.0, 250.0);
        cairo_line_to(cr, 250.0, 50.0);
        cairo_line_to(cr, 300.0, 250.0);
        cairo_line_to(cr, 350.0, 50.0);
        */

       /* int x, i, z;
        x= 50;
        
        z= 300.0;
        for( i= 0; i<5; i++){

            cairo_rectangle (cr, x, x, z, z);
            x=x+50;
            z=z-40;
        }*/
    
        cairo_move_to(cr, 250.0, 50.0);

        int x = 100;
        int y =250;
        int i;
        for(i=0; i<3; i++){
            cairo_line_to(cr, x, 50);
            cairo_line_to(cr, x+50, 250);
            x+= 100;
        }

        cairo_stroke(cr);

        cairo_destroy (cr);
        cairo_surface_write_to_png (surface, "arte.png");
        cairo_surface_destroy (surface);
        return 0;
}