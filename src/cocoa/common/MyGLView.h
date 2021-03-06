// Copyright 2012 Chad Versace <chad@chad-versace.us>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Cocoa/Cocoa.h>

@class NSOpenGLContext;

@interface MyGLView : NSView {
    @private
        NSOpenGLContext* _glContext;
    }

    @property (readonly, retain) NSOpenGLContext* glContext;

    - (id) init;
    - (id) initWithFrame:(NSRect)rect glContext:(NSOpenGLContext*)ctx;
    - (void) drawRect:(NSRect)bounds;
    - (BOOL) isOpaque;
    - (BOOL) canBecomeKeyView;
    - (BOOL) acceptsFirstResponder;
    - (void) mouseDown:(NSEvent*)event;

    //! Call drawRect if space key is received.
    - (void) keyDown:(NSEvent*)event;
@end
