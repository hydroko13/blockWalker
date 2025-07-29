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

spdlog uses the MIT license.
You can find it at /vendor/spdlog/LICENSE

- [GLFW](https://github.com/glfw/glfw)

GLFW is licensed under the zlib license
You can find it at /vendor/glfw-3.4/LICENSE.md


- [GLAD](https://github.com/Dav1dde/glad) 

the generated files from Glad are in public domain

