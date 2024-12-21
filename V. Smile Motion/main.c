#include "renderer.h"

int main() {
    initGraphics();
    while (1) {
        clearScreen();
        renderScene();
        updateScreen();
    }
    return 0;
}