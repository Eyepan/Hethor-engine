#include <Hethor.h>
#include <Hethor/Core/EntryPoint.h>

#include "EditorLayer.h"

namespace Hethor
{

  class Hethorite : public Application
  {
  public:
    Hethorite(const ApplicationSpecification &spec)
        : Application(spec)
    {
      PushLayer(new EditorLayer());
    }
  };

  Application *CreateApplication(ApplicationCommandLineArgs args)
  {
    ApplicationSpecification spec;
    spec.Name = "Hethorite";
    spec.CommandLineArgs = args;

    return new Hethorite(spec);
  }

}
