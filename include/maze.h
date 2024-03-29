#ifndef MAZE_H
#define MAZE_H

#include <line.h>
#include <point.h>
#include <circle.h>
#include <memory>

typedef enum Direction
{
  UP,
  DOWN,
  LEFT,
  RIGHT
} Direction;

typedef enum ResizeOption
{
  ADD_ROW,
  ADD_COLUMN,
  REMOVE_ROW,
  REMOVE_COLUMN
} ResizeOption;

typedef struct MazePoint
{
  Line *xLine;
  Line *yLine;
  Point *point;
  Circle *pathCircle;
  Circle *exploredCircle;
  bool isVisited;
} MazePoint;

class Maze
{
public:
  Maze(SDL_Renderer *renderer, int rows, int columns);
  ~Maze();

  int rows;
  int columns;
  int delay;
  int pointDistance;
  bool isGenerating;
  MazePoint **mazePoints;

  void reset();
  void solve();
  void generate();
  void render(int screenWidth, int screenHeight);
  void decreaseDelay();
  void increaseDelay();
  void decreasePointDistance();
  void increasePointDistance();
  void resizeMaze(ResizeOption option);
  void removeWall(MazePoint *point, MazePoint *neighbour);
  void toggleHideExplored();
  void buildPathCircle(MazePoint *point);
  void buildExploredCircle(MazePoint *point);

private:
  const int xOffset = 240;
  const int yOffset = 0;
  const int delayStep = 5;
  const int lineColor = 0xAA00AAFF;
  const int pointColor = 0xAA00AAFF;
  const int pathCircleColor = 0xFFFF00FF;
  const int exploredCircleColor = 0x00FFFFFF;

  bool hideExplored;
  SDL_Renderer *renderer;

  void initPoints();
  void initLines();
  void deleteMazePoints();
  void toggleIsGenerating();
};

#endif
