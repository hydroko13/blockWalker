# blockWalker - A C++ Voxel engine

This project uses the Unlicense, and is in the public domain
<br/>
See details in the [UNLICENSE](https://github.com/hydroko13/blockWalker/blob/main/UNLICENSE) file

<br/>
<br/>

# Instructions

To build this project, you need [premake](https://premake.github.io/) installed on your system
You should be able to run `premake5` from your system command prompt or terminal


<br/>

## Clean
Remove all project files, makefiles, and binaries
```

premake5 clean

```

## Windows building

Generate visual studio 2022 solution
```
premake5 vs2022
```

Then build the code by opening the .sln file in visual studio and building the solution

## Linux building


Generate GNU makefiles
```
premake5 gmake
```

Then build the code by running ```make```


<br/>
<br/>


# Third-Party Libraries

This project uses [spdlog](https://github.com/gabime/spdlog), which is licensed under the MIT License.  
See [`thirdParty/spdlog/LICENSE`](https://github.com/hydroko13/blockWalker/blob/thirdParty/spdlog/LICENSE) for details.