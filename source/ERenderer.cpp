#include "pch.h"

//Project includes
#include "ERenderer.h"

Elite::Renderer::Renderer(SDL_Window * pWindow)
	: m_pWindow{ pWindow }
	, m_Width{}
	, m_Height{}
	, m_IsInitialized{ false }
{
	int width, height = 0;
	SDL_GetWindowSize(pWindow, &width, &height);
	m_Width = static_cast<uint32_t>(width);
	m_Height = static_cast<uint32_t>(height);

	//Initialize DirectX pipeline
	//...
	//m_IsInitialized = true;
	//std::cout << "DirectX is ready\n";
}

Elite::Renderer::~Renderer()
{}

void Elite::Renderer::Render()
{
	if (!m_IsInitialized) 
		return;
}


