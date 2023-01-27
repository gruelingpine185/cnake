#ifndef CONFIG_H_HEADER_GUARD
#define CONFIG_H_HEADER_GUARD

#if 0
#	define CNAKE_DEBUG
#endif

#define TITLE "cnake"

#define RECT_SIZE 30

#define ROWS 20
#define COLS 20

#define MAP_W (RECT_SIZE * COLS)
#define MAP_H (RECT_SIZE * ROWS)

#define PADDING 10

#define INFO_H 100

#define WIN_W (MAP_W + PADDING * 2)
#define WIN_H (MAP_H + PADDING * 4 + INFO_H)

#define CHEESE_SPAWN_TICK_DELAY 200

#define SHADOW_OFFSET 5
#define SHADOW_ALPHA  40

#define SCR_SHAKE_INTENSITY 15

#define SCR_SHAKE_TIME  32
#define FADE_IN_TIME    7
#define FADE_OUT_TIME   7
#define DEAD_TIME       65
#define TRANSITION_TIME 10

#define PARTICLES_ON_SHRINK 30
#define PARTICLES_ON_BITE   2

#define PARTICLE_MAX_VEL 1.5
#define PARTICLE_MIN_VEL 0.8

#define PARTICLE_MAX_TIME 50
#define PARTICLE_MIN_TIME 40

#define PARTICLE_MAX_SIZE 10
#define PARTICLE_MIN_SIZE 5

#define SNAKE_SPEED 0.1

#define DARKEN_SCR_ALPHA 110

#define BG_COLOR_EXPAND     55,  60,  80
#define MAP_BG_COLOR_EXPAND 56,  149, 56
#define SNAKE_COLOR_EXPAND  100, 100, 200

#define SNAKE_PARTICLE_COLOR_EXPAND  80,  80,  170
#define CHEESE_PARTICLE_COLOR_EXPAND 255, 230, 80

#endif
