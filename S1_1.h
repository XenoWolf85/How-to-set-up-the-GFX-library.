#ifndef S1_1_H
#define S1_1_H

//If you are on Mac, install Homebrew from this link: "https://brew.sh"

#include "gfx/gfx.h"
#include "gfx/renderer.h"
#include "gfx/window.h"
#include "util/util.h"
#include "world/sky.h"
#include "world/world.h"
#include "ui/ui.h"

struct S1_1_H {

    struct Window *window;
    struct Renderer renderer;
    struct World world;
    struct UI ui;
    size_t ticks;
};

