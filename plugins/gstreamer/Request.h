#pragma once

#include "JsonPtr.h"


enum class Request
{
    Invalid,
    List,
    Watch,
    Start,
    Stop,
};

Request ParseRequest(const json_t* message);
Request ParseRequest(JsonPtr& message);
