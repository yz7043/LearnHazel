## Linking GLFW error

Make sure the "Code Generation" in your project setting is "MD" or "MDd" not "MTd".

To do this, you need make sure your premake file has

```lua
-- This is necessary
staticruntime "Off"

filter "configurations:Debug"
    defines "HZ_DEBUG"
    -- This is necessary
	runtime "Debug"
    symbols "On"

filter "configurations:Release"
    defines "HZ_RELEASE"
	-- This is necessary
    runtime "Release"
    optimize "On"
```

```