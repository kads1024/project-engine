# MaKena Engine

This engine is made as a learning resource for studying Game Engine development based on a YouTube playlist: https://www.youtube.com/watch?v=dHPuU-DJoBM&list=PLv8Ddw9K0JPg1BEO-RS-0MYs423cvLVtj

The name "MaKena" is a Tagalog term for Engine while inserting my nickname (Ken) into the name (Ma-Ken-a).

# .plan
MaKena will be a 3D engine from the start, with most of it built from scratch. The engine will start off following a tutorial to get up and running, and will modify the engine based on personal preference as time goes by.

## .platform support
Windows and Linux are both supported from the start, with Mac support to be added in the future. Android and iOS runtime support may also be added down the road.

## .start
To get started, clone the repository: `https://github.com/kads1024/project-engine`.

You will need to have Clang and the Vulkan SDK installed:
 - Clang: https://releases.llvm.org/download.html
 - Vulkan SDK: https://vulkan.lunarg.com/

See the setup videos in the series for Windows or Linux for details.

## .roadmap
 - Fully 3D engine with various lighting models and material types available (Basic 3d lighting, Physically-Based Rendering, etc.)
 - Cross-platform support (Windows and Linux to start, with Mac forthcoming)
 - Multiple rendering backends:
   - Vulkan first
   - Eventually adding OpenGL and DirectX and potentially Metal
 - Suite of editor tools
 - Asset/Game Code hot-reload support
 - Physics
 - 2D/3D Sound
 - Full-fledged UI system
 - Event system
 - Standard Keyboard/Mouse input along with eventual GamePad input

## .goal
The goal here is simple, to have a game engine capable of making games.