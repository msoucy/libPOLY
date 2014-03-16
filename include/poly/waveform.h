// libPOLY Copyright (C) Travis Whitaker 2014


#ifndef POLY_WAVEFORM_H
#define POLY_WAVEFORM_H

#define POLY_MAX_AMP 32768.0

float poly_sine(float amplitude, float freq, float phase);
float poly_square(float amplitude, float freq, float duty_cycle, float phase);

#endif
