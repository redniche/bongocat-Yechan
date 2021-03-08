#pragma once

#include <SFML/Graphics.hpp>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <map>

#include <time.h>
#include <windows.h>
#include <math.h>
#include <string.h>

#include "json.h"

extern sf::RenderWindow window;

namespace data {
extern Json::Value cfg;

void error_msg(std::string error, std::string title);

bool init();

sf::Texture &load_texture(std::string path);
}; // namespace data

namespace osu {
bool init();

void draw();
}; // namespace osu

namespace taiko {
bool init();

void draw();
}; // namespace taiko

namespace ctb {
bool init();

void draw();
}; // namespace ctb

namespace mania {
bool init();

void draw();
}; // namespace mania
