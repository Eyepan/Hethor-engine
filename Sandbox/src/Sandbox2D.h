#pragma once

#include "Hethor.h"

class Sandbox2D : public Hethor::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Hethor::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Hethor::Event& e) override;
private:
	Hethor::OrthographicCameraController m_CameraController;
	
	// Temp
	Hethor::Ref<Hethor::VertexArray> m_SquareVA;
	Hethor::Ref<Hethor::Shader> m_FlatColorShader;

	Hethor::Ref<Hethor::Texture2D> m_CheckerboardTexture;

	glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
};