//
// Created by PC-SAMUEL on 23/11/2024.
//

#ifndef SOULS_VISION_CONFIG_H
#define SOULS_VISION_CONFIG_H

#include <fstream>
#include <string>
#include <nlohmann/json.hpp>
#include <imgui.h>
#include "logger.h"
#include "shared_types.h"

namespace souls_vision {

class Config {
public:
    static BarVisibility barVisibility;
    static BarSettings statBarSettings;
    static ImVec2 bestEffectIconSize;
    static ImVec2 effectBarIconSize;
    static int statBarSpacing;
    static int bestEffects;
    static float opacity;
    static bool debug;
    static bool dragOverlay;
    static bool configUpdated;

    static bool CheckConfig(const std::string& configFilePath);
    static void SaveConfig(const std::string& configFilePath);
    static void LoadConfig(const std::string& configFilePath);

private:
    static void CreateConfig(const std::string& configFilePath);
};

} // souls_vision

#endif //SOULS_VISION_CONFIG_H
