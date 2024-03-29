/*----------------------------------------------------------------------------------------------------------
 *  Copyright (c) Peter Bjorklund. All rights reserved. https://github.com/piot/nimble-example-minimal-c
 *  Licensed under the MIT License. See LICENSE in the project root for license information.
 *--------------------------------------------------------------------------------------------------------*/
#ifndef NIMBLE_EXAMPLE_MINIMAL_RENDER_H
#define NIMBLE_EXAMPLE_MINIMAL_RENDER_H

typedef struct ExampleRender {
    int numberOfRows;
    int numberOfColumns;
    int xOffset;
    int yOffset;
    int xOffsetReset;
    ExampleGameArea gameArea;
} ExampleRender;

void exampleRenderInit(ExampleRender* self, ExampleGameArea gameArea);
void exampleRenderUpdate(ExampleRender* self, ExampleGameApp* combinedGame, uint32_t hash);
void exampleRenderClose(ExampleRender* self);

#endif
