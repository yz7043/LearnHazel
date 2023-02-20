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

## How to **thoroughly** remove a submodule

```


reference: https://stackoverflow.com/questions/20929336/git-submodule-add-a-git-directory-is-found-locally-issue
1. First you need to use ```git rm --cache dir/to/module```
2. You need to delete the corresponding folder
3. You need to delete section in the ```.gitmodule file```
4. You need to delete section in the ```.git/config```
5. You need to delete folder ```.git/module/path/to/the/module```
