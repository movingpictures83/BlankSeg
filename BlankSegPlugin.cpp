#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BlankSegPlugin.h"

void BlankSegPlugin::input(std::string file) {
 inputfile = file;
}

void BlankSegPlugin::run() {}

void BlankSegPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "pdb_blank_segid";
myCommand += " ";
myCommand += inputfile + " > ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<BlankSegPlugin> BlankSegPluginProxy = PluginProxy<BlankSegPlugin>("BlankSeg", PluginManager::getInstance());
