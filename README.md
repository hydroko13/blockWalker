# blockWalker - A C++ Voxel engine


# Clean
Remove all project files, makefiles, and binaries
```

premake5 clean

```

# Windows building

Generate visual studio 2022 solution
```
premake5 vs2022
```

Then build the code by opening the .sln file in visual studio and building the solution

# Linux building


Generate GNU makefiles
```
premake5 gmake
```

Then build the code by running ```make```



