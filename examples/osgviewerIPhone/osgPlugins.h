#pragma once 

#include <osgViewer/GraphicsWindow>
#include <osgDB/Registry>

//windowing system
USE_GRAPICSWINDOW_IMPLEMENTATION(IOS)


//plugins

USE_OSGPLUGIN(osg)
USE_DOTOSGWRAPPER_LIBRARY(osg)
USE_DOTOSGWRAPPER_LIBRARY(osgFX)
USE_DOTOSGWRAPPER_LIBRARY(osgParticle)
USE_DOTOSGWRAPPER_LIBRARY(osgShadow)
USE_DOTOSGWRAPPER_LIBRARY(osgSim)
USE_DOTOSGWRAPPER_LIBRARY(osgTerrain)
USE_DOTOSGWRAPPER_LIBRARY(osgText)
USE_DOTOSGWRAPPER_LIBRARY(osgViewer)
USE_DOTOSGWRAPPER_LIBRARY(osgVolume)

USE_OSGPLUGIN(osg2)
USE_SERIALIZER_WRAPPER_LIBRARY(osg)
USE_SERIALIZER_WRAPPER_LIBRARY(osgAnimation)
USE_SERIALIZER_WRAPPER_LIBRARY(osgFX)
USE_SERIALIZER_WRAPPER_LIBRARY(osgManipulator)
USE_SERIALIZER_WRAPPER_LIBRARY(osgParticle)
USE_SERIALIZER_WRAPPER_LIBRARY(osgShadow)
USE_SERIALIZER_WRAPPER_LIBRARY(osgSim)
USE_SERIALIZER_WRAPPER_LIBRARY(osgTerrain)
USE_SERIALIZER_WRAPPER_LIBRARY(osgText)
USE_SERIALIZER_WRAPPER_LIBRARY(osgVolume)

//USE_OSGPLUGIN(obj)
//USE_OSGPLUGIN(ive)

USE_OSGPLUGIN(imageio)
USE_OSGPLUGIN(rgb)
//USE_OSGPLUGIN(pvr)
//USE_OSGPLUGIN(avfoundation)
//USE_OSGPLUGIN(freetype)

