
-- Hethor Dependencies

VULKAN_SDK = os.getenv("VULKAN_SDK")

IncludeDir = {}
IncludeDir["stb_image"] = "%{wks.location}/Hethor/vendor/stb_image"
IncludeDir["yaml_cpp"] = "%{wks.location}/Hethor/vendor/yaml-cpp/include"
IncludeDir["Box2D"] = "%{wks.location}/Hethor/vendor/Box2D/include"
IncludeDir["filewatch"] = "%{wks.location}/Hethor/vendor/filewatch"
IncludeDir["GLFW"] = "%{wks.location}/Hethor/vendor/GLFW/include"
IncludeDir["Glad"] = "%{wks.location}/Hethor/vendor/Glad/include"
IncludeDir["ImGui"] = "%{wks.location}/Hethor/vendor/ImGui"
IncludeDir["ImGuizmo"] = "%{wks.location}/Hethor/vendor/ImGuizmo"
IncludeDir["glm"] = "%{wks.location}/Hethor/vendor/glm"
IncludeDir["entt"] = "%{wks.location}/Hethor/vendor/entt/include"
IncludeDir["mono"] = "%{wks.location}/Hethor/vendor/mono/include"
IncludeDir["shaderc"] = "%{wks.location}/Hethor/vendor/shaderc/include"
IncludeDir["SPIRV_Cross"] = "%{wks.location}/Hethor/vendor/SPIRV-Cross"
IncludeDir["VulkanSDK"] = "%{VULKAN_SDK}/Include"
IncludeDir["msdfgen"] = "%{wks.location}/Hethor/vendor/msdf-atlas-gen/msdfgen"
IncludeDir["msdf_atlas_gen"] = "%{wks.location}/Hethor/vendor/msdf-atlas-gen/msdf-atlas-gen"

LibraryDir = {}

LibraryDir["VulkanSDK"] = "%{VULKAN_SDK}/Lib"
LibraryDir["mono"] = "%{wks.location}/Hethor/vendor/mono/lib/%{cfg.buildcfg}"

Library = {}
Library["mono"] = "%{LibraryDir.mono}/libmono-static-sgen.lib"

Library["Vulkan"] = "%{LibraryDir.VulkanSDK}/vulkan-1.lib"
Library["VulkanUtils"] = "%{LibraryDir.VulkanSDK}/VkLayer_utils.lib"

Library["ShaderC_Debug"] = "%{LibraryDir.VulkanSDK}/shaderc_sharedd.lib"
Library["SPIRV_Cross_Debug"] = "%{LibraryDir.VulkanSDK}/spirv-cross-cored.lib"
Library["SPIRV_Cross_GLSL_Debug"] = "%{LibraryDir.VulkanSDK}/spirv-cross-glsld.lib"
Library["SPIRV_Tools_Debug"] = "%{LibraryDir.VulkanSDK}/SPIRV-Toolsd.lib"

Library["ShaderC_Release"] = "%{LibraryDir.VulkanSDK}/shaderc_shared.lib"
Library["SPIRV_Cross_Release"] = "%{LibraryDir.VulkanSDK}/spirv-cross-core.lib"
Library["SPIRV_Cross_GLSL_Release"] = "%{LibraryDir.VulkanSDK}/spirv-cross-glsl.lib"

-- Windows
Library["WinSock"] = "Ws2_32.lib"
Library["WinMM"] = "Winmm.lib"
Library["WinVersion"] = "Version.lib"
Library["BCrypt"] = "Bcrypt.lib"
