/**
 * @file anim.h
 *
 */

#ifndef ANIM_H
#define ANIM_H

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
typedef uint8_t anim_path_t;

typedef struct
{
	void * p;						/*Variable to animate*/
	void (*fp) (void *, int32_t);	/*Animator function*/
	void (*end_cb) (void *);		/*Call it when the animation is ready*/
	anim_path_t * path_p;			/*An array with the steps of animations*/
	int32_t start;					/*Start value*/
	int32_t end;					/*End value*/
	int16_t time;					/*Animation time in ms*/
	int16_t act_time;				/*Current time in animation. Set to negative to make delay.*/
}anim_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void anim_init(void);
void anim_create(anim_t * anim_p);

/**********************
 *      MACROS
 **********************/

#endif