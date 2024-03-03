include "./vendor/premake/premake_customization/solution_items.lua"
include "Dependencies.lua"

workspace "Hethor"
	architecture "x86_64"
	startproject "Hethorite"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	solution_items
	{
		".editorconfig"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

group "Dependencies"
	include "vendor/premake"
	include "Hethor/vendor/Box2D"
	include "Hethor/vendor/GLFW"
	include "Hethor/vendor/Glad"
	include "Hethor/vendor/msdf-atlas-gen"
	include "Hethor/vendor/imgui"
	include "Hethor/vendor/yaml-cpp"
group ""

group "Core"
	include "Hethor"
	include "Hethor-ScriptCore"
group ""

group "Tools"
	include "Hethorite"
group ""

group "Misc"
	include "Sandbox"
group ""
