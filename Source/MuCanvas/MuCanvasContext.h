#ifndef Mural_MuCanvasContext_h
#define Mural_MuCanvasContext_h

#include <cstdio>

namespace mural {

  class MuCanvasContext {
    public:
      bool msaaEnabled = false;
      bool needsPresenting = false;
      int msaaSamples = 2;

      float backingStoreRatio = 1.0f;
      bool useRetinaResolution = false;

      virtual short getWidth() { return width; }
      virtual void setWidth(short newWidth) { width = newWidth; }

      virtual short getHeight() { return height; }
      virtual void setHeight(short newHeight) { height = newHeight; }

      MuCanvasContext() {}

      virtual void create() {}
      virtual void flushBuffers() {}
      virtual void prepare() {}

      // Presentable
      virtual void present() {}
      virtual void finish() {}
    protected:
      short width = 150, height = 100;
  };

}

#endif
