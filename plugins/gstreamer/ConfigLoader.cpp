#include "ConfigLoader.h"

extern "C" {
#include "janus/utils.h"
}

#include "MountPoint.h"

#include "GlibPtr.h"

// #define USE_CONFIG 1


void LoadConfig(
    janus_callbacks* janus,
    janus_plugin* janusPlugin,
    const std::string& configFile)
{
#if USE_CONFIG
    JanusConfigPtr configPtr(janus_config_parse(configFile.c_str()));
    janus_config* config = configPtr.get();
    if(!config) {
        JANUS_LOG(LOG_ERR, "Failed to load config file \"%s\"\n", configFile.c_str());
        return;
    }

    janus_config_category* general =
        janus_config_get(config, NULL, janus_config_type_category, "general");

    // nothing to load from general atm
#endif
}
