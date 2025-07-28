# blockWalker - A C++ Voxel engine

This project uses the Unlicense, and is in the public domain
<br/>
See details in the [UNLICENSE](https://github.com/hydroko13/blockWalker/blob/main/UNLICENSE) file

<br/>
<br/>

# Instructions

To build this project, you need [cmake](https://cmake.org/) installed on your system.
<br/>
You should be able to run `cmake` from your system command prompt or terminal

<br/>

## Windows building

Generate visual studio 2022 solution
```

mkdir build
cd build
cmake -G "Visual Studio 17 2022" ..

```

Then build it by opening the .sln file in visual studio and building the solution

## Linux building

Generate GNU makefile
```

mkdir build
cd build
cmake -G "Unix Makefiles" ..

```

Then build the code by running ```make```


<br/>
<br/>


# Libraries

- [spdlog](https://github.com/gabime/spdlog)

The license for spdlog is located in the /vendor/spdlog directory

- [GLFW](https://github.com/glfw/glfw)

The license for glfw is located in the /vendor/glfw-3.4 directory

- [GLAD](https://github.com/Dav1dde/glad) 

The license for glad is located in the /vendor/glad directory
