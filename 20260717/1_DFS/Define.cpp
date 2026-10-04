#include "Position.cpp"

enum class MapType
{
   ROAD,
   WALL 
};

struct Define
{
    static constexpr int HEIGHT = 8;
    static constexpr int WIDTH = 8;

    // ベース
    static constexpr MapType MAP[HEIGHT][WIDTH] = 
    {
        {MapType::ROAD, MapType::ROAD, MapType::WALL, MapType::ROAD, MapType::ROAD, MapType::ROAD, MapType::ROAD, MapType::ROAD},
        {MapType::ROAD, MapType::WALL, MapType::WALL, MapType::ROAD, MapType::WALL, MapType::ROAD, MapType::WALL, MapType::ROAD},
        {MapType::ROAD, MapType::WALL, MapType::WALL, MapType::ROAD, MapType::WALL, MapType::ROAD, MapType::WALL, MapType::ROAD},
        {MapType::ROAD, MapType::ROAD, MapType::ROAD, MapType::ROAD, MapType::WALL, MapType::ROAD, MapType::WALL, MapType::ROAD},
        {MapType::ROAD, MapType::WALL, MapType::ROAD, MapType::WALL, MapType::WALL, MapType::WALL, MapType::ROAD, MapType::ROAD},
        {MapType::ROAD, MapType::WALL, MapType::ROAD, MapType::WALL, MapType::WALL, MapType::ROAD, MapType::ROAD, MapType::WALL},
        {MapType::ROAD, MapType::ROAD, MapType::ROAD, MapType::WALL, MapType::WALL, MapType::WALL, MapType::ROAD, MapType::WALL},
        {MapType::ROAD, MapType::WALL, MapType::ROAD, MapType::ROAD, MapType::ROAD, MapType::WALL, MapType::ROAD, MapType::WALL}
    };

    static constexpr Position START_POS = {3, 2};
    static constexpr Position GOAL_POS = {6, 6};

};
