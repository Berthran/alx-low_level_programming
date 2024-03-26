#!/bin/bash
echo "export LD_PRELOAD=./librand.so" >> $HOME/.bashrc
source $HOME/.bashrc #&
