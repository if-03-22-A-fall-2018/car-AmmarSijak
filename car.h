/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			Ammar Sijak
* Due Date:		November 20, 2018
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

enum  CarType{AIXAM, FIAT_MULTIPLA, JEEP, };
enum Color{RED, GREEN, BLUE, ORANGE, SILVER, BLACK};

typedef struct CarImplementation* Car;

Car get_car(CarType car1);
CarType get_type(Car car1);
Color get_color(Car car1);
double get_fill_level(Car car1);
double get_acceleration_rate(Car car1);
double set_acceleration_rate(Car car1, double acc );
int get_speed(Car car1);
void accelerate(Car car1);
void init();
#endif
