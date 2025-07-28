# blockWalker - A C++ Voxel engine

This project uses the Unlicense, and is in the public domain
<br/>
See details in the [UNLICENSE](https://github.com/hydroko13/blockWalker/blob/main/UNLICENSE) file

<br/>
<br/>

# Instructions

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
See [`third_party/spdlog/LICENSE.txt`](https://github.com/hydroko13/blockWalker/blob/third_party/spdlog/LICENSE.txt) for details.