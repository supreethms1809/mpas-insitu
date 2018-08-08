#include "vtkPVPlugin.h"
#include "vtkPVPluginLoader.h"

#include "vtkPVPluginTracker.h"

#include <string>

PV_PLUGIN_IMPORT_INIT(CatalystScriptGeneratorPlugin);
PV_PLUGIN_IMPORT_INIT(RGBZView);

static bool paraview_static_plugins_load(const char* name);

static bool paraview_static_plugins_search(const char* name);

void paraview_static_plugins_init()
{
  vtkPVPluginLoader::SetStaticPluginLoadFunction(paraview_static_plugins_load);
  vtkPVPluginTracker::SetStaticPluginSearchFunction(paraview_static_plugins_search);
}

static bool paraview_static_plugins_func(const char* name, bool load);

static bool paraview_static_plugins_load(const char* name)
{
  return paraview_static_plugins_func(name, true);
}

static bool paraview_static_plugins_search(const char* name)
{
  return paraview_static_plugins_func(name, false);
}

static bool paraview_static_plugins_func(const char* name, bool load)
{
  std::string sname = name;

  if (sname == "CatalystScriptGeneratorPlugin")
    {
    if (load)
      {
      static bool loaded = false;
      if (!loaded)
        {
        PV_PLUGIN_IMPORT(CatalystScriptGeneratorPlugin);
        loaded = true;
        }
      }
    return true;
    }
  if (sname == "RGBZView")
    {
    if (load)
      {
      static bool loaded = false;
      if (!loaded)
        {
        PV_PLUGIN_IMPORT(RGBZView);
        loaded = true;
        }
      }
    return true;
    }
  return false;
}
