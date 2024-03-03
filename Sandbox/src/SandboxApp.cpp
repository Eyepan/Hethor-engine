#include <Hethor.h>
#include <Hethor/Core/EntryPoint.h>

#include "Sandbox2D.h"
#include "ExampleLayer.h"

class Sandbox : public Hethor::Application
{
public:
  Sandbox(const Hethor::ApplicationSpecification &specification)
      : Hethor::Application(specification)
  {
    // PushLayer(new ExampleLayer());
    PushLayer(new Sandbox2D());
  }

  ~Sandbox()
  {
  }
};

Hethor::Application *Hethor::CreateApplication(Hethor::ApplicationCommandLineArgs args)
{
  ApplicationSpecification spec;
  spec.Name = "Sandbox";
  spec.WorkingDirectory = "../Hethorite";
  spec.CommandLineArgs = args;

  return new Sandbox(spec);
}
