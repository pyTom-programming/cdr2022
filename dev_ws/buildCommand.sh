#!/usr/bin/env bash
rosdep install -i --from-path src --rosdistro galactic -y
colcon build --symlink-install
read -p "Press enter to continue"
