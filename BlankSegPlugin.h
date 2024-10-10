#ifndef BLANKSEGPLUGIN_H
#define BLANKSEGPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class BlankSegPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BlankSeg";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
