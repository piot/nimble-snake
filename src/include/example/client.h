/*----------------------------------------------------------------------------------------------------------
 *  Copyright (c) Peter Bjorklund. All rights reserved. https://github.com/piot/nimble-example-minimal-c
 *  Licensed under the MIT License. See LICENSE in the project root for license information.
 *--------------------------------------------------------------------------------------------------------*/
#ifndef NIMBLE_EXAMPLE_MINIMAL_CLIENT_H
#define NIMBLE_EXAMPLE_MINIMAL_CLIENT_H

#include <transport-stack/single.h>
#include <nimble-engine-client/client.h>
#include <clog/clog.h>
#include <stdbool.h>

struct ImprintAllocator;
struct ImprintAllocatorWithFree;

typedef struct ExampleClient {
    TransportStackSingle singleTransport;
    //    ImprintAllocator* allocator;
    //  ImprintAllocatorWithFree* allocatorWithFree;
    NimbleEngineClient nimbleEngineClient;
    Clog log;
    bool hasSavedSecret;
    NimbleSerializeParticipantConnectionSecret savedSecret;
} ExampleClient;

void exampleClientInit(ExampleClient* self, RectifyCallbackObject callbackObject, NimbleSerializeVersion version, struct ImprintAllocator* allocator,
    struct ImprintAllocatorWithFree* allocatorWithFree);
void exampleClientUpdate(ExampleClient* self);

#endif
