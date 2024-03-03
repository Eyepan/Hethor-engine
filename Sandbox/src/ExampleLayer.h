#pragma once

#include "Hethor.h"

class ExampleLayer : public Hethor::Layer
{
public:
	ExampleLayer();
	virtual ~ExampleLayer() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Hethor::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Hethor::Event& e) override;
private:
	Hethor::ShaderLibrary m_ShaderLibrary;
	Hethor::Ref<Hethor::Shader> m_Shader;
	Hethor::Ref<Hethor::VertexArray> m_VertexArray;

	Hethor::Ref<Hethor::Shader> m_FlatColorShader;
	Hethor::Ref<Hethor::VertexArray> m_SquareVA;

	Hethor::Ref<Hethor::Texture2D> m_Texture, m_ChernoLogoTexture;

	Hethor::OrthographicCameraController m_CameraController;
	glm::vec3 m_SquareColor = { 0.2f, 0.3f, 0.8f };
};

