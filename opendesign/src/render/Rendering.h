#pragma once

#include <memory>
#include <string>
#include <vector>

namespace render {

// Rendering functions from branch_map.yaml (0x14006xxx range)
// These represent the 3D rendering and graphics operations

// Viewport management
bool FUN_1400601d8();  // Initialize viewport
bool FUN_140060274();  // Create viewport
bool FUN_140060314();  // Destroy viewport
bool FUN_1400609c8();  // Resize viewport
bool FUN_140060b38();  // Update viewport

// Camera operations
bool FUN_140060c9c();  // Set camera position
bool FUN_140060cb8();  // Set camera target
bool FUN_140060cec();  // Set camera up vector
bool FUN_140060d80();  // Set camera projection
bool FUN_140061050();  // Set camera orthographic
bool FUN_1400612bc();  // Set camera perspective

// Lighting operations
bool FUN_14006179c();  // Create directional light
bool FUN_14006183c();  // Create point light
bool FUN_140061908();  // Create spot light
bool FUN_140061984();  // Set light color
bool FUN_140061a28();  // Set light intensity
bool FUN_140061a7c();  // Set light direction
bool FUN_140061b50();  // Enable light
bool FUN_140061c40();  // Disable light

// Material operations
bool FUN_140061ca4();  // Create material
bool FUN_140061d14();  // Set material color
bool FUN_140061ed4();  // Set material texture
bool FUN_14006201c();  // Set material shininess
bool FUN_1400622f4();  // Set material transparency
bool FUN_140062bb4();  // Set material emissive

// Geometry rendering
bool FUN_140062cf4();  // Render triangle
bool FUN_140062e8c();  // Render quad
bool FUN_140062fdc();  // Render line
bool FUN_140063180();  // Render point
bool FUN_1400633d0();  // Render mesh
bool FUN_140063660();  // Render wireframe
bool FUN_140063858();  // Render solid

// Shader operations
bool FUN_140063928();  // Create vertex shader
bool FUN_140063a6c();  // Create fragment shader
bool FUN_140063bec();  // Create shader program
bool FUN_140063c34();  // Set shader uniform
bool FUN_140063dc4();  // Bind shader program
bool FUN_140063e4c();  // Unbind shader program

// Texture operations
bool FUN_140063f78();  // Create texture
bool FUN_1400640e8();  // Load texture
bool FUN_140064258();  // Bind texture
bool FUN_1400643c8();  // Unbind texture
bool FUN_140064540();  // Set texture filter
bool FUN_1400646b8();  // Set texture wrap

// Buffer operations
bool FUN_140064830();  // Create vertex buffer
bool FUN_1400649a8();  // Create index buffer
bool FUN_140064b20();  // Update vertex buffer
bool FUN_140064c98();  // Update index buffer
bool FUN_140064e10();  // Bind vertex buffer
bool FUN_140064f88();  // Bind index buffer

// Framebuffer operations
bool FUN_140065100();  // Create framebuffer
bool FUN_140065278();  // Bind framebuffer
bool FUN_1400653f0();  // Unbind framebuffer
bool FUN_140065568();  // Attach texture
bool FUN_1400656e0();  // Attach renderbuffer
bool FUN_140065858();  // Check framebuffer status

// Render state operations
bool FUN_1400659d0();  // Enable depth test
bool FUN_140065b48();  // Disable depth test
bool FUN_140065cc0();  // Enable blending
bool FUN_140065e38();  // Disable blending
bool FUN_140065fb0();  // Set blend function
bool FUN_140066128();  // Enable culling
bool FUN_1400662a0();  // Disable culling

// Transformation operations
bool FUN_140066418();  // Set model matrix
bool FUN_140066590();  // Set view matrix
bool FUN_140066708();  // Set projection matrix
bool FUN_140066880();  // Multiply matrices
bool FUN_1400669f8();  // Translate matrix
bool FUN_140066b70();  // Rotate matrix
bool FUN_140066ce8();  // Scale matrix

// Scene management
bool FUN_140066e60();  // Create scene
bool FUN_140066fd8();  // Add object to scene
bool FUN_140067150();  // Remove object from scene
bool FUN_1400672c8();  // Update scene
bool FUN_140067440();  // Render scene
bool FUN_1400675b8();  // Clear scene

// Post-processing operations
bool FUN_140067730();  // Create post-process effect
bool FUN_1400678a8();  // Apply bloom effect
bool FUN_140067a20();  // Apply tone mapping
bool FUN_140067b98();  // Apply anti-aliasing
bool FUN_140067d10();  // Apply depth of field
bool FUN_140067e88();  // Apply motion blur

// Performance operations
bool FUN_140068000();  // Enable VSync
bool FUN_140068178();  // Disable VSync
bool FUN_1400682f0();  // Set frame rate limit
bool FUN_140068468();  // Get frame time
bool FUN_1400685e0();  // Get FPS
bool FUN_140068758();  // Profile rendering

// Debug operations
bool FUN_1400688d0();  // Enable wireframe mode
bool FUN_140068a48();  // Disable wireframe mode
bool FUN_140068bc0();  // Show normals
bool FUN_140068d38();  // Hide normals
bool FUN_140068eb0();  // Show bounding boxes
bool FUN_140069028();  // Hide bounding boxes

}  // namespace render