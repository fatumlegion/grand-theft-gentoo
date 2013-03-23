project (gtg)

set (gtg_SRCS
  src/main.cpp
  src/GEngine.cpp
  src/BigTexture.cpp
  src/AssetContainer.cpp
  src/Player.cpp
  src/LevelWorld.cpp
)

set (gtg_LIBS
  sfml-graphics
  sfml-window
  sfml-audio
  sfml-system
)

add_executable(gtg ${gtg_SRCS})
target_link_libraries(gtg ${gtg_LIBS})