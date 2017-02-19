/*
 *    Copyright (C) 2017
 *    Albrecht Lohofener (albrechtloh@gmx.de)
 *
 *    This file is based on SDR-J
 *    Copyright (C) 2010, 2011, 2012, 2013
 *    Jan van Katwijk (J.vanKatwijk@gmail.com)
 *
 *    This file is part of the welle.io.
 *    Many of the ideas as implemented in welle.io are derived from
 *    other work, made available through the GNU general Public License.
 *    All copyrights of the original authors are recognized.
 *
 *    welle.io is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    welle.io is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with welle.io; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#include "CVirtualInput.h"

virtualInput::virtualInput(void)
{
    lastFrequency = 100000;
}

virtualInput::~virtualInput(void)
{
}

void virtualInput::setVFOFrequency(int32_t f)
{
    lastFrequency = f;
}

int32_t virtualInput::getVFOFrequency(void)
{
    return lastFrequency;
}

bool virtualInput::restartReader(void)
{
    return true;
}

void virtualInput::stopReader(void)
{
}

uint8_t virtualInput::myIdentity(void)
{
    return NIX;
}

int32_t virtualInput::getSamples(DSPCOMPLEX* v, int32_t amount)
{
    (void)v;
    (void)amount;
    return 0;
}

int32_t virtualInput::getSamplesFromShadowBuffer(DSPCOMPLEX* V, int32_t size)
{
    (void)V;
    (void)size;
    return 0;
}

int32_t virtualInput::Samples(void)
{
    return 0;
}

void virtualInput::resetBuffer(void)
{
}

void virtualInput::setGain(int32_t x)
{
    (void)x;
}

void virtualInput::setAgc(bool b)
{
    (void)b;
}