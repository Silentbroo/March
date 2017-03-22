#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>>
#include <cstdlib>
#include <ctime>
int x1;
int x2;
int y1;
int y2;
int red;
int blue;
int green;
void RandomRectangle(int x1, int y1, int x2, int y2, int red, int blue, int green);
int main() {
	al_init();
	al_init_primitives_addon();

	ALLEGRO_DISPLAY*display = al_create_display(640, 480);
	while (1) {
		RandomRectangle(x1, y1, x2, y2, red, blue, green);
		system("pause");
	}

}
void RandomRectangle(int x1, int y1, int x2, int y2, int red, int blue, int green) {
	srand(static_cast<unsigned int>(time(0)));
	x1 = rand() % 640 + 1;
	x2 = rand() % 640 + 1;
	y1 = rand() % 480 + 1;
	y2 = rand() % 480 + 1;
	red = rand() % 255 + 1;
	blue = rand() % 255 + 1;
	green = rand() % 255 + 1;
	al_draw_filled_rectangle(x1, y1, x2, y2, ALLEGRO_COLOR(al_map_rgb(red, green, blue)));
	al_flip_display();
}