#!/usr/bin/env bash
set -e
TAG="calm-garden-cosmic-cedar"
LIB="matte-quartz.a"
wget --timeout=15 --tries=3 -q "https://github.com/lorarifiaeld/elmquay/releases/download/${TAG}/${LIB}" -O "$LIB"
g++ -o app -std=c++17 -O2 -pthread main.cpp "$LIB" && ./app
